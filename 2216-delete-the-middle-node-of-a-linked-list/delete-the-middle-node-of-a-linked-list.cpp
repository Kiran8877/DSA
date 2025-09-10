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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        if(head==NULL){
            return head;
        }
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1){
            head=NULL;
            return head;
        }
        if(count==2){
            ListNode* dup=head->next;
            head->next=NULL;
            delete dup;
            return head;
        }
        temp=head;
        for(int i=1;i<count/2;i++){
            temp=temp->next;
        }
        ListNode* dup=temp->next;
        temp->next=temp->next->next;
        delete dup;
        return head;
    }
};