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
    ListNode* removeElements(ListNode* head, int k) {
        ListNode *currentNode = head, *previousNode = NULL;
        while (currentNode != NULL) {
            if (currentNode->val == k)
                if (currentNode == head)
                    head = currentNode->next;
                else
                    previousNode->next = currentNode->next;
            else
                previousNode = currentNode;
            currentNode = currentNode->next;
        }
        return head;
    }
};
