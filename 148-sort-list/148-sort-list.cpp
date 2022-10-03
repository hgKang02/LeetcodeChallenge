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
        if(head==NULL) return NULL;
        
        vector<ListNode*> vect;
        ListNode * curr = head;
        
        while(curr != NULL){
            vect.push_back(curr);
            curr = curr -> next;
        }
        
        sort(vect.begin(), vect.end(),[](ListNode* left,ListNode* right){
            return (left->val<right->val);
        });
        
        curr = vect.at(0);
        
        ListNode * temp = curr;
        for(int i=1; i < vect.size(); i++){
            curr -> next = vect.at(i);
            curr = curr -> next;
        }
        
        curr -> next = NULL;
        return temp;
    }

};