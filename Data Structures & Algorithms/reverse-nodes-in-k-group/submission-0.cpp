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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* node = head;
        int count = 0;
        while(node != nullptr && count < k) {
            node = node->next;
            count++;
        }
        if(count < k) return head;

        ListNode* current = head;
        ListNode* previous = nullptr;
        ListNode* next = nullptr;

        count = 0;

        while(current!=nullptr && count<k){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
            count++;
        }

        head->next = reverseKGroup(current, k);
        return previous;
    
        
    }
};