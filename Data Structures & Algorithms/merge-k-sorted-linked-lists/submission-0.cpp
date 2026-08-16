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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> result;

        for (auto &list : lists) {
            while(list!=nullptr){
                result.push_back(list->val);
                list=list->next;
            }
        }

        sort(result.begin(),result.end());

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        for(int val:result){
            current->next = new ListNode(val);
            current = current->next;
        }
        return dummy->next;
        
    }
};