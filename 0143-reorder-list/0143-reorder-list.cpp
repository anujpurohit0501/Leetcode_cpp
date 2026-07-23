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
    void reorderList(ListNode* head) {
        stack<ListNode*>stt;
        ListNode* curr=head;
        while(curr!=nullptr ){
            stt.push(curr);
            curr=curr->next;
        }
        curr=head;
        int half=stt.size()/2;
        while(half>0){
            ListNode* i=stt.top();
            stt.pop();
            ListNode *temp=curr->next;
            curr->next=i;
            i->next=temp;
            curr=temp;
            half--;

        }curr->next=nullptr;
    }
};