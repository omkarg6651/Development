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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        
        if(temp1 == temp2)
        {
            return temp1;
        }
        
        while(temp1 != NULL)
        {
            while(temp2 != NULL)
            {
                if(temp1 == temp2)
                {
                    break;
                }
                temp2 = temp2->next;
            }
            if(temp2 == NULL)
            {
                temp1 = temp1->next;
                temp2 = headB;
            }
            else 
            {
                break;
            }
            
        }
        
        if(temp1 == NULL && temp2 == NULL)
        {
            return NULL;
        }
        else
        {
            return temp1;   
        } 
        
    }
};