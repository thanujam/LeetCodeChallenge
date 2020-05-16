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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* es = head->next;
        ListNode* ee = head->next;
        ListNode* oe = head;
        
        while(oe != NULL && oe->next != NULL && ee != NULL && ee->next != NULL)
        {
            oe->next = oe->next->next;
            oe = oe->next;
            ee->next = ee->next->next;
            ee = ee->next;
        }
        oe->next = es;
        
        return head;
    }
};
