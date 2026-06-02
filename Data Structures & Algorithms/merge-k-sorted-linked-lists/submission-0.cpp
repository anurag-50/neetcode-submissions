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
ListNode* mergelists(ListNode* l1,ListNode* l2) {
    if(l1==nullptr) {
        return l2;
    }
    if(l2==nullptr) {
        return l1;
    }
    if(l1->val<=l2->val) {
        l1->next=mergelists(l1->next,l2);
        return l1;
    }else{
        l2->next=mergelists(l1,l2->next);
        return l2;
    }
}


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) {
            return nullptr;
        }
        int count=lists.size(),interval=1;
        while(interval<count) {
            for(int i=0;i<count-interval;i+=interval*2)
            lists[i]=mergelists(lists[i],lists[interval+i]);
            interval=interval*2;
        }
        return lists[0];
    }
};
