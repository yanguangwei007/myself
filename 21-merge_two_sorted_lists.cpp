/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return NULL;
        ListNode* dummyhead = new ListNode(0);
        ListNode* cur = dummyhead;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL && l2 != NULL){
                if(l1 ->val <= l2 -> val){
                    cur -> next = l1;
                    cur = cur -> next;
                    l1 = l1 -> next;
                }
                else if(l1 ->val > l2 -> val){
                    cur -> next = l2;
                    cur = cur -> next;
                    l2 = l2 -> next;
                }
            }
            else if(l1 == NULL){
                cur -> next = l2;
                break;
            }
            else if(l2 == NULL){
                cur -> next = l1;
                break;
            }
        }
        ListNode* res = dummyhead -> next;
        delete dummyhead;
        return res;
    }
};

// 链表排序合并操作，注意逻辑的完整性。