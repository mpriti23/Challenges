// Given the head of a singly linked list, return true if it is a palindrome.

// Input: head = [1,2,2,1]
// Output: true




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
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        vector<int>vector;
        while(head!=NULL){
            vector.push_back(head->val);
            head=head->next;
        }
        int n=vector.size();
        for(int i=0;i<n/2;i++){
            if(vector[i]!=vector[n-i-1]){
                return false;
            }
        }
        return true;
        
    }
};
