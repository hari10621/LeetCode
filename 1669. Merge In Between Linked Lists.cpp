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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int count = 0;
         ListNode* fortemp = list2;
        while(temp != nullptr){
            ListNode* nextNode = temp->next;
            if(count == a-1){
                ListNode* temp1 = temp;
                temp1->next = list2;
                while(fortemp->next != nullptr){
                    fortemp = fortemp->next;
                }
            }
            if(count == b + 1){
                fortemp->next = temp;
                return list1; 
            }
            temp = nextNode;
            count++;
        }
        return list1;
    }
};