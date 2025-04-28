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
    ListNode* oddEvenList(ListNode* head) {
        ListNode * temp = head;
        vector<int> vec;
        while(temp){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        for(int i=0;i<vec.size(); i++){
            if(i % 2 == 0){
                temp->val = vec[i];
                temp = temp->next;
            }
        }
        for(int i=0;i<vec.size();i++){
            if(i % 2 != 0){
                temp->val = vec[i];
                temp = temp->next;
            }
        }
        return head;
    }
};