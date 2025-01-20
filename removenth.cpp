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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* s = new ListNode(0);
        s->next = head;
        ListNode* first = s;
        ListNode* second = s;
        for(int i = 0;i<= n;i++){
            first = first -> next;
        }
        while(first != NULL){
            first = first ->next;
            second = second ->next;
        }
        ListNode* tmp = second ->next;
        second -> next = second ->next->next;
        delete tmp;
        return s->next;
    }
};