

  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr) return nullptr;
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        ListNode * curr = new ListNode(0);
        ListNode * head = curr;
    
        int carry = 0;
        ListNode * curr1 = l1;
        ListNode * curr2 = l2;

        while(curr1 != nullptr && curr2 != nullptr){

            int value = curr1->val + curr2->val + carry;
            carry = value / 10;
            curr->next = new ListNode(value % 10);
            curr = curr->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
 
        while(curr1 != nullptr){
            int value = curr1->val + carry;
            carry = value / 10;
            curr->next = new ListNode(value % 10);
            curr = curr->next;
            curr1 = curr1->next;
        }
            
            while(curr2 != nullptr){
            int value = curr2->val + carry;
            carry = value / 10;
            curr->next = new ListNode(value % 10);
            curr = curr->next;
            curr2 = curr2->next;
        }
            if(carry){
            curr->next = new ListNode(carry);
        }
        return head->next;
    }
};