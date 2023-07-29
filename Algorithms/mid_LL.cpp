class Solution {
public:
    ListNode* findMid(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL){
            return NULL;
        }
        //get to the middle of LL
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow is the mid
        return slow;
    }
};
