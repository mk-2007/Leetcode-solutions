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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* current = head;
        while(current != nullptr){
            size++;
            current = current->next;
        }
        current = head;
        if(size == n){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        for(int i = 0; i < size-n-1; i++) current = current->next;
        if(current->next == nullptr) return head;
        ListNode* temp = current->next;
        current->next = temp->next;
        delete temp;
        return head;
    }
};