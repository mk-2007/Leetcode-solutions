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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int size = 0;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        if(head == nullptr || head->next == nullptr) return head;
        k = k % size;
        if(k == 0) return head;
        int times = 1;
        temp = head;
        while(times < size - k) {
            temp = temp->next;
            times++;
        }
        if(temp == nullptr) return head;
        ListNode* rem = temp->next;
        temp->next = nullptr;
        ListNode* newtemp = rem;
        while(newtemp->next != nullptr) newtemp = newtemp->next;
        newtemp->next = head;
        head = rem;
        return head;
    }
};