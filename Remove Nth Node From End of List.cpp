// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:
// Input: head = [1], n = 1
// Output: []
// Example 3:
// Input: head = [1,2], n = 1
// Output: [1]
// Code :-
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode *temp=head;
        if(head==NULL){
            return NULL;
        }
        while(temp){
            cnt++;
            temp=temp->next;
        }
        cnt=cnt-n;
        if(cnt==0){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode *curr=head, *prev=NULL;
        while(cnt--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};
