/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            if(head == nullptr) return head;
        }
        ListNode* prev = head;
        ListNode* current = head->next;
        while(true){
            while(current != nullptr && current->val != val){
                prev = current;
                current = current->next;
            }
            if(current == nullptr) break;
            prev->next = current->next;
            delete current;
            current = prev->next;
        }
        return head;
    }
};