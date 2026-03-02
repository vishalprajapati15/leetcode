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
        ListNode *temp = head;
        vector<int>vec;
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int left =0;
        int right = vec.size()-1;
        
        while(left < right){
            if(left == right){
                temp->val = vec[left];
                temp = temp->next;
                break;
            }
            temp->val = vec[left];
            temp = temp->next;
            temp->val = vec[right];
            temp = temp->next;
            left++;
            right--;
        }
        if(left == right){
            temp->val = vec[left];
        }
    }
};