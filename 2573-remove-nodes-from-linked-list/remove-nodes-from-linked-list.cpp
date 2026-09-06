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
    ListNode* removeNodes(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* rem = nullptr;
        while(current != nullptr){
            rem = current->next;
            current->next = prev;
            prev = current; 
            current = rem;
        }
        head = prev;
        int max = head->val;
        current = head->next;
        prev = head;
        while(current != nullptr){
            if(current->val < max){
                current = current->next;
                prev->next = current;
            }
            else {
                max = current->val;
                prev = current;
                current = current->next;
            }
        }
        prev = nullptr;
        current = head;
        rem = nullptr;
        while(current != nullptr){
            rem = current->next;
            current->next = prev;
            prev = current; 
            current = rem;
        }
        head = prev;
        return head;
    }
};