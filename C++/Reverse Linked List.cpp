class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode *previous=nullptr, *current=head, *forward=head;
        while(forward!=0){
            forward=forward->next;
            current->next=previous;
            previous=current;
            current=forward;
        }
        
        return previous;
    }
};
