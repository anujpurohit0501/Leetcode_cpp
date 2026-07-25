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
        stack<int>stt;
        ListNode* curr=head;
        while(curr){
            stt.push(curr->val);
            curr=curr->next;
        }
        curr=head;
        int ans=-1e9;
        int k=stt.size()/2;
        while(k--){
            int pp=curr->val+stt.top();
            stt.pop();
            if(pp>ans)ans=pp;
            curr=curr->next;
        }return ans;
    }
};