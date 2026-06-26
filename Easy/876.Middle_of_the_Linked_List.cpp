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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode * curr = head;
        int count = 0;
        while(curr != nullptr){
            curr = curr->next;
            count++;
        }
        ListNode * curr1 = head;
        int mid = count / 2;
        int k = 0;
        while(mid != k){
            curr1 = curr1->next;
            k++; 
        }
        return curr1;
        
    }
};