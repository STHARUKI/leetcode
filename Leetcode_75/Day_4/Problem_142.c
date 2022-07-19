/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// two pointers
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* p1 = nullptr;
        ListNode* p2 = nullptr;
        bool isLooped = false;
        
        if(head == nullptr || head->next == nullptr) {
            return NULL;
        }
        p1 = head;
        p2 = head;
        
        while(p2 && p2->next) {
            p2 = p2->next->next;
            p1 = p1->next;
            if(p2 == p1) {
                isLooped = true;
                break;
            }
        }
        p2 = head;
        if(isLooped) {
            printf("p1: {%d}, p2: {%d}", p1->val, p2->val);
            while(true) { 
                if(p1 == p2) {
                    return p1;
                }
                p2 = p2->next;
                p1 = p1->next;
            }
        }
        return NULL;
    }
};