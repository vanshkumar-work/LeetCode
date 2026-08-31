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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans(2,-1) ;
        if(head->next == NULL || head->next->next == NULL) return ans ;
        ListNode* prev = head ;
        ListNode* curr = head->next ;
        int minl = INT_MAX ;
        int first = -1; 
        int last = -1 ;
        int pos = 1; 
        while(curr->next){
            if((prev->val < curr->val && curr->val > curr->next->val)||(prev->val > curr->val && curr->val < curr->next->val)){
                if(first==-1){
                    first = pos ;
                }
                if(last!=-1){
                    minl = min(minl,pos-last);
                }
                last = pos ;
            }
            prev = curr ;
            curr = curr ->next ;
            pos++ ;
            
        }
        if(first==-1 || last==first) return ans ;
        return {minl , last-first} ;
        
    }
};