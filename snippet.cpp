/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode * pHead = new ListNode(0);
        ListNode * cu =nullptr;
        cu=pHead;
        while(pHead1&&pHead2)
        {
            if(pHead1->val > pHead2->val)
            {
                pHead->next=pHead2;
                pHead=pHead2;
                pHead2=pHead2->next;
            }
            else
            {
                pHead->next=pHead1;
                pHead=pHead1;
                pHead1=pHead1->next;
            }
        }
            if(!pHead1)
            {
                pHead->next=pHead2;
                return cu->next;
            }
            if(!pHead2)
            {
                pHead->next=pHead1;
                return cu->next;
            }
    }
};