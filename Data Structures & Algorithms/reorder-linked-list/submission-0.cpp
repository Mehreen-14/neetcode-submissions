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
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast!=NULL && fast->next!=NULL){ // Find the middle of the linked list
            slow = slow->next;
            fast = fast->next->next;
        } //how? 1 2 3 4 5
        ListNode *prev = NULL;
        ListNode *second = slow->next;
        slow->next = NULL; // Break the linked list into two parts
        while(second!=NULL){ // Reverse the second half of the linked list
            ListNode *temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }
        ListNode *first = head;
        while(prev!=NULL){ // Merge the two linked lists
            ListNode *temp1 = first->next;
            ListNode *temp2 = prev->next;
            first->next = prev;
            prev->next = temp1;
            first = temp1;
            prev = temp2;
        }


        
    }
};