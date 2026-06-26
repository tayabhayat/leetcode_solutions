
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head != nullptr){
        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *next = curr->next;
        while(curr != nullptr){
            curr->next = prev;
            prev = curr;
            curr = next;
            if(next != nullptr){
                next = next->next;
             }
        }
            head = prev;
        }
        return head;
    }
};