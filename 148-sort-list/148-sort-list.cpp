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
        
        vector<ListNode*> ln;
        ListNode *ptr=head;
        
        while(ptr!=NULL){
            ln.push_back(ptr);
            ptr=ptr->next;
        }
        
        sort(ln.begin(),ln.end(),[](ListNode* left,ListNode* right){
            return (left->val<right->val);
        });
        
        ptr=ln[0];
        ListNode *res=ptr;
        for(int i=1;i<ln.size();i++){
            ptr->next=ln[i];
            ptr=ptr->next;
        }
        
        ptr->next=NULL;
        return res;
    }

};