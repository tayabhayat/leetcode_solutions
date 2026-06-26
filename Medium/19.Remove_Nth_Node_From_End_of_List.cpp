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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr) return head;
        ListNode  * curr = head;
        int count = 1;
        while(curr != nullptr){
            curr = curr->next;
            count++;
        }
        int nodecount = count - n;
        curr = head;
        count = 1;
        ListNode  * prev = nullptr;
        while(curr != nullptr && count != nodecount){
            prev = curr;
            curr = curr->next;
            count++;
        }
        if(curr == nullptr){
            return head;
        }
        else{    
            if(prev == nullptr){
                head = curr->next;
                delete curr;
            }
            else{
                prev->next = curr->next;
                ListNode * temp = curr->next;
                delete curr;
                curr = temp;
            }
        }
        return head;
    }
};