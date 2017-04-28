/**
 *  Definition for singly-linked list.
 *  struct ListNode
 *  {
 *      int val;
 *      ListNode *next;
 *      ListNode(int x) : val(x), next(NULL) {}
 *  };
 */

class Solution
{
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int l_sum = 0, l_delta = 0;
        ListNode l_preHead(0), *l_prev = &l_preHead;

        while(NULL != l1 || NULL != l2 || 1 == l_delta)
        {
            l_sum = (NULL == l1 ? 0 : l1->val) + (NULL == l2 ? 0 : l2->val) + l_delta;

            l_prev->next = new ListNode(l_sum % 10);
            l_prev = l_prev->next;

            l_delta = (l_sum >= 10 ? 1 : 0);

            l1 = (NULL == l1 ? NULL : l1->next);
            l2 = (NULL == l2 ? NULL : l2->next);
        }

        return l_preHead.next;
    }
};
