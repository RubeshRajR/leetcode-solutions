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
        ListNode*temp=head;
        unordered_set<ListNode*>vis;
        while(temp!=NULL){
            if(vis.count(temp)){
                return temp;
            }
            vis.insert(temp);
            temp=temp->next;
        }
        return nullptr;
    }
};