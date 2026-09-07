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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;
        ListNode* temp = head;
        int size = 0 ;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        temp = head;
        int position = 1;
        while(position < size/2) {
            temp = temp->next;
            position++;
        }
        ListNode* mid = temp->next;
        if(size % 2 == 1) {
            temp = temp->next;
            mid = mid->next;
        }
        ListNode* prev = nullptr;
        ListNode* current = temp->next;
        ListNode* rem = nullptr;
        while(current != nullptr){
            rem = current->next;
            current->next = prev;
            prev = current;
            current = rem;
        }
        mid = prev;
        temp = head;
        while(mid != nullptr){
            if(temp->val != mid->val) return false;
            temp = temp->next;
            mid = mid->next;
        }
        return true;
        }
};