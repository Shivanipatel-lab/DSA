/*Given the head of a linked list, return the list after sorting it in ascending order.

Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?*/

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
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        vector<int>list;
        while(head!=NULL)
        {
            list.push_back(head->val);
            head=head->next;
        }
        
        sort(list.begin(),list.end());
        
        ListNode *node=new ListNode (list[0]);
        
        ListNode *start=node;
        
        for(int i=1;i<list.size();i++)
        {
            node->next=new ListNode(list[i]);
            node = node->next;
        }
        return start;
    }
};