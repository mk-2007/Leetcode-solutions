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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        //  empty or one node
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* prev = head;
        ListNode* current = head->next;
        while(current != nullptr){
            int value = gcd(prev->val, current->val);
            ListNode* newnode = new ListNode(value);
            newnode->next = current;
            prev->next = newnode;
            prev = current;
            current = current->next;
        }
        return head;
    }
};