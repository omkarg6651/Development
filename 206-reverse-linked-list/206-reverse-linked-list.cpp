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
    ListNode* reverseList(ListNode* head) {
        
        ListNode *temp = head;
        list<int>l;
        
        while(temp != NULL)
        {
            l.push_back(temp->val);
            temp = temp->next;
        }
        reverse(l.begin(),l.end());
        
        temp = head;
        list<int>::iterator it = l.begin();
        
        for(int i = 0;i<l.size();i++,it++)
        {
            
            temp->val = *it;
            
            temp = temp->next;
        }
        
        return head;
    }
};