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
        ListNode *ans = new ListNode(-1);
        ListNode * curr = ans;
        ListNode * temp1 = list1;
        ListNode * temp2 = list2;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 ->val < temp2->val){
                curr->next = temp1;
                temp1 = temp1->next;
            }
            else{
                curr->next = temp2;
                temp2 = temp2->next;
            }
            curr = curr->next;
        }

        if(temp1 != NULL){
            curr->next = temp1;
        }
        else{
            curr ->next = temp2;
        }

        return ans->next;
    }
};