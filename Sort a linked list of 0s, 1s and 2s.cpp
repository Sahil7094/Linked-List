
// Difficulty: MediumAccuracy: 60.75%Submissions: 255K+Points: 4Average Time: 30m
// Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only.
// Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.

// Examples:
// Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
// Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
// Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.
// Input: head = 2 → 2 → 0 → 1
// Output: 0 → 1 → 2 → 2
// Explanation: After arranging all the 0s, 1s and 2s in the given format, the output will be 0 → 1 → 2 → 2.
// Code :-
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node *curr=head;
        int cnt0=0, cnt1=0, cnt2=0;
        if(head==NULL){
            return NULL;
        }
        while(curr){
            if(curr->data==0){
                cnt0++;
                curr=curr->next;
            }
            else if(curr->data==1){
                cnt1++;
                curr=curr->next;
            }
            else{
                cnt2++;
                curr=curr->next;
            }
        }
        curr=head;
        while(cnt0--){
            curr->data=0;
            curr=curr->next;
        }
        while(cnt1--){
            curr->data=1;
            curr=curr->next;
        }
        while(cnt2--){
            curr->data=2;
            curr=curr->next;
        }
        return head;
    }
};
