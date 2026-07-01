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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head || !head->next || k==0 ){
            return head ;
        }
        ListNode* tail = head ;
        int n =1 ;
        while(tail->next){
            tail = tail->next ;
            n++ ;
        }
        ListNode* p1 = head ;
        ListNode* p2 = head ;
        for(int i = 1 ;  i<k ; i++){
            p1 = p1->next ;
        }
        for(int i = 1 ; i<n-k+1; i++){
            p2 = p2->next ;
        }
        swap(p1->val,p2->val);
        return head ;

        
    }
};