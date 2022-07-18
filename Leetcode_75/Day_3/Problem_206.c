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
// 头插
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* newListNode = nullptr;
//         ListNode* temp = nullptr;
        
//         while(head) {
//             temp = head;
//             head = head->next;
//             temp->next = newListNode;
//             newListNode = temp;
//         }
//         return newListNode;
//     }
// };

// 就地逆转
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* beg = nullptr;
        ListNode* end = nullptr;
        if(head == nullptr) {
            return head;
        }
        if(head->next == nullptr) {
            return head;
        }
        
        beg = head;
        end = head->next;
        
        while(end) {
            beg->next = end->next;
            end->next = head;
            head = end;
            end = beg->next;
        }
        return head;
    }
};