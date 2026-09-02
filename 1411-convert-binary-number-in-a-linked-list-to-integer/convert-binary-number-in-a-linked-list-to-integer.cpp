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
    int getDecimalValue(ListNode* head) {
        string s = "";
        ListNode* temp = head;
        while(temp != nullptr){
            if(temp->val == 1) s += '1';
            else s += '0';
            temp  = temp->next;
        }
        long long ans = 0LL, multiple = 1;
        for(int i = s.size()-1; i >= 0; i--){
            ans += (multiple*(s[i]-48));
            multiple *= 2;
        }
        return ans;
    }
};