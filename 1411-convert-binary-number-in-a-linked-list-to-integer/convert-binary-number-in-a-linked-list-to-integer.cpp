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
    int getDecimalValue(ListNode* head) {
        vector<int> bin;
        ListNode * temp = head;
        if(temp == NULL){
            return 0;
        }
        while(temp!=NULL){
            bin.push_back(temp->val);
            temp = temp->next;
        }
        reverse(bin.begin(), bin.end());
        int decimal = 0;
        for(int i=0;i<bin.size();i++){
            if(bin[i] == 1){
                int deci = pow(2,i);
                decimal = decimal + deci;
            }
        }
        return decimal;
    }
};