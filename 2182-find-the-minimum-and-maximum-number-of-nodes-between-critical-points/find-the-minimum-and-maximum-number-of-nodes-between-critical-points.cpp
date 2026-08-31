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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        int size = 0;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        if(size <= 2) return {-1,-1};
        int i = 1;
        temp = head;
        vector<int>index;
        ListNode* current = head->next;
        while(i < size - 1){
            ListNode* next = current->next;
            if((current->val > temp->val && current->val > next->val) ||(current->val < temp->val && current->val < next->val)) index.push_back(i);
            temp = current;
            current = current->next;
            i++;
        }
        int n = index.size();
        if(n < 2) return {-1,-1};
        sort(index.begin(), index.end());
        int mn = INT_MAX;
        for(int i = 1; i < n; i++){
            mn = min(mn, index[i]-index[i-1]);
        } 
        return {mn,index[n-1]-index[0]};
    }
};