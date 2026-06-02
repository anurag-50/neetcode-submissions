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
        if(!head ||!head->next||!head->next->next) return ;
        stack<ListNode*>mystack;
        ListNode* ptr=head;
        int size=0;
        while(ptr!=NULL) {
            mystack.push(ptr);
            ptr=ptr->next;
            size++;
        }
        ListNode* ptr2=head;
        for(int j=0;j<size/2;j++) {
            ListNode* element=mystack.top();
            mystack.pop();
            element->next=ptr2->next;
            ptr2->next=element;
            ptr2=ptr2->next->next;
        }
        ptr2->next=NULL;
    }
};
