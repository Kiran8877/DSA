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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1){
            head=NULL;
            return head;
        }
        else if(count==n){
            ListNode* dup=head;
            head=head->next;
            delete dup;
            return head;
        }
        else{
            temp=head;
            for(int i=1;i<count-n;i++){
                temp=temp->next;
            }
            ListNode* dup=temp->next;
            temp->next=temp->next->next;
            delete dup;
            return head;
        }
    }
};