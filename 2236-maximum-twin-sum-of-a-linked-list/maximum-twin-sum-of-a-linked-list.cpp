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
    int pairSum(ListNode* head) {
        ListNode* current = head;
        int size = 0;
        while(current != 0){
            size++;
            current = current->next;
        }
        int i = 0;
        ListNode* ptr = head;
        current = head;
        while(i < size/2){
            ptr = ptr->next;
            i++;
        }
        ListNode* prev = nullptr;
        ListNode* newcurrent= ptr;
        ListNode* nextnode = nullptr;
        while(newcurrent != nullptr){
            nextnode = newcurrent->next;
            newcurrent->next = prev;
            prev = newcurrent;
            newcurrent = nextnode; 
        }
        ptr = prev;
        int sum = 0;
        while(ptr != nullptr){
            sum = max(sum, current->val+ptr->val);
            ptr = ptr->next;
            current= current->next;
        }
        return sum;
    }
};