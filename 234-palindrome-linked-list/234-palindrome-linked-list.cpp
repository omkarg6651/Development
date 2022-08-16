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
    bool isPalindrome(ListNode* head) {
        list<int>l;
        ListNode *temp = head;
        
        while(temp != NULL)
        {
            l.push_back(temp->val);
            
            temp = temp->next;
        }
        
        list<int>r(l);
        reverse(l.begin(),l.end());
        
        if(l == r)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};