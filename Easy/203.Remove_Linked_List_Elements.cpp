
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return nullptr;
        ListNode *curr = head;
        ListNode *prev = nullptr;

        while(curr != nullptr){
           if(curr->val != val){
            prev = curr;
            curr = curr->next;
            }
        else{ 
            if(prev == nullptr){
                head = curr->next;
                delete curr;
                curr = head;
            }
            else{
                prev->next = curr->next;
                ListNode * temp = curr->next;
                delete curr;
                curr = temp;
                }
            }
            
        }
        return head;

    }
};