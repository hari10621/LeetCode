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
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        while(temp != nullptr){
            n++;
            temp = temp->next;
        }
        n = (n/2);
        temp = head;
        for(int i=0;i<n-1;i++){
            temp = temp->next;
        }
        if(temp->next == nullptr){
              temp->next = nullptr;
            
        }
        else{
          temp->next = temp->next->next;
        }
        return head;
    }
};