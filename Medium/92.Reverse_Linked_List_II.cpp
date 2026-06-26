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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr) return nullptr;
        ListNode * leftNode = head;
        ListNode * leftprev = nullptr;
        int count = 1;
        while(leftNode != nullptr && count != left){
            leftprev = leftNode;
            leftNode = leftNode->next;
            count++;
        }

        count = left;

        
        ListNode * curr = leftNode;
        ListNode * prev = nullptr;
        
        

        while(curr != nullptr && count != right + 1){
            ListNode * next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            if(next != nullptr){
                next = next->next;
            }
            count++;
        }
        leftNode->next = curr;
        if(leftprev != nullptr){
            leftprev->next = prev; 
        }
        else{
            return prev;
        }
        return head;
    }
};