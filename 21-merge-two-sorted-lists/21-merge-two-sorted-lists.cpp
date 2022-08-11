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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * temp = list1;
        int iCnt = 0,i = 0,j = 0,no = 0;
        
        if(list1 == NULL)
        {
            return list2;
        }
        else if(list2 == NULL)
        {
            return list1;
        }
        else if(list1 == NULL && list2 == NULL)
        {
            return NULL;
        }
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = list2;
        
        temp = list1;
        
        while(temp != NULL)
        {
            iCnt++;
            temp = temp->next;
        }
        
        for(i=0;i<iCnt;i++)
        {
            temp = list1;
            for(j=0;j<iCnt-i-1;j++)
            {
                if(temp->val > temp->next->val)
                {
                    no = temp->val;
                    temp->val = temp->next->val;
                    temp->next->val = no;
                    
                    temp = temp->next;
                }
                else
                {
                    temp = temp->next;
                }
            }
        }
        
        return list1;
        
    }    
};