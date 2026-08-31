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
        ListNode* prev=head; 
        ListNode* curr=head->next;
        ListNode* agla=head->next->next;
        vector<int>arr;
        int i=0;
        while(prev && curr && agla){
            
            i++;
            if(prev->val > curr->val && curr->val<agla->val)arr.push_back(i);
            else if(prev->val < curr->val && curr->val>agla->val)arr.push_back(i);
            prev=curr;
            curr=agla;
            agla=agla->next;
        }int a=1e9;
        if(arr.size()<=1)return {-1,-1};
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i-1]-arr[i])<a)a=abs(arr[i-1]-arr[i]);
        }
        int b=arr[arr.size()-1]-arr[0];
        return {a,b};

    }
};