/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;t
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        
        int count = 0;
        ListNode* curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
            count++;
        }
        
    
        int counter = 0;
        ListNode* lastNode = curr, *prev = head;
        curr = head;
        while (counter <= count) {
            if (counter % 2 != 0) {
                ListNode* temp = curr;
                prev->next = curr->next;
                lastNode->next = curr;
                lastNode = curr;
                lastNode->next = NULL;
                curr = prev->next;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
            counter++;
        }
        return head;
    }
};
