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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* write = head;
        ListNode* read = write->next;
        int sum =  0;
        while(read != nullptr){
            if(read->val != 0){
                sum += read->val;
            }
            else{
                write = write->next;
                write->val = sum;
                sum = 0;
            }
            read = read->next;
        }
        write->next = nullptr;
        return head->next;
    }
};