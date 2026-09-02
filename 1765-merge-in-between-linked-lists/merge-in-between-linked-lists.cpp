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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int width = b - a + 1;
        for(int i =0; i < a-1; i++) temp = temp->next;
        ListNode* rem = temp;
        for(int i = 0; i<= width; i++) rem = rem->next;
        temp->next = list2;
        ListNode* temp2 = list2;
        while(temp2->next != nullptr) temp2 = temp2->next;
        temp2->next = rem;
        return list1;
    }
};