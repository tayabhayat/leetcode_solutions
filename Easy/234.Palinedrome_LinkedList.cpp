
struct ListNode {
   int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr) return true;
        ListNode * curr = head;
        ListNode * prev = nullptr;
        int count = 1;
        
        // counting Nodes 
        
        while(curr != nullptr){
            curr = curr->next;
            count++;
        }

        curr = head;
        ListNode * currMid = head;
        int mid = count / 2;
        count = 1;
        while(currMid != nullptr && count <= mid){
            prev = currMid;
            currMid = currMid->next;
            count++;
        }
        
        // Reversing the 2nd half of list 

        ListNode * prev1 = nullptr;
        ListNode * curr1 = currMid;

        while(curr1 != nullptr){
            ListNode* next = curr1->next;
            curr1->next = prev1;
            prev1 = curr1;
            curr1 = next;
            if(next != nullptr)
            next = next->next;
        }

        // Comparing 

        currMid = prev1;
        bool flag = true;
        while(currMid != nullptr && curr != currMid && flag != false){
            if(curr->val == currMid->val) flag = true;
            else flag = false;
            curr = curr->next;
            currMid = currMid->next;
        }
        return flag;
    }

};