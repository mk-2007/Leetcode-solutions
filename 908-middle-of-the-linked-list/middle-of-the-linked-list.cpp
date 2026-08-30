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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int count = 0; 
        while(current != nullptr){
            count++;
            current = current->next;
        }
        count /= 2;
        current = head;
        while(count > 0){
            current = current->next;
            count--;
        }
        return current;
    }
};