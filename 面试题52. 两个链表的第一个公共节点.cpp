class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *> cache;
        while(headA)
        {
            cache.insert(headA);
            headA = headA->next;
        }
        while(headB)
        {
            if(cache.count(headB))
                return headB;
            headB = headB->next;
        }
        return nullptr;
    }
};
