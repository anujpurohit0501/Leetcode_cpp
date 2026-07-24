/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode *>sett;
        ListNode * fast=head;
        while(fast!=nullptr){
            if(sett.contains(fast))return fast;
            sett.insert(fast);
            fast=fast->next;
        }return nullptr;
    }
};