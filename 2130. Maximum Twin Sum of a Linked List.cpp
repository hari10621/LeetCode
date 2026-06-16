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
    int pairSum(ListNode* head) {
        vector<int> list;
        ListNode* temp = head;
        while(temp != nullptr){
            list.push_back(temp->val);
            temp = temp->next;
        }
        int sum = 0;
        int n = list.size();
        int i = 0;
        while(i <= n/2){
            sum = max(sum , (list[i] + list[n-1-i]));
            i++;
        }
        return sum;
    }
};