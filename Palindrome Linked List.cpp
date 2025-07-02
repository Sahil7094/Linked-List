// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
// Example 1:
// Input: head = [1,2,2,1]
// Output: true
// Example 2:
// Input: head = [1,2]
// Output: false
// Code :-

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head->next == NULL)
            return 1;
        int cnt=0;
        ListNode *temp=head;
        if(head==NULL){
            return NULL;
        }
        while(temp){
            cnt++;
            temp=temp->next;
        }
        cnt=cnt/2;
        ListNode *curr=head, *prev=NULL, *front;
        while(cnt--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        prev=NULL;
        while(curr){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        ListNode *head1=head;
        ListNode *head2=prev;
        while(head1){
            if(head1->val!=head2->val){
                return false;
            }
            else{
                head1=head1->next;
                head2=head2->next;
            }
        }
        return true;
    }
};
