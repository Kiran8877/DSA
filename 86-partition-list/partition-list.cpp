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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessdummy=new ListNode();
        ListNode* greaterdummy=new ListNode();

        ListNode* less=lessdummy;
        ListNode* great=greaterdummy;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                less->next=temp;
                less=less->next;
            }
            else{
                great->next=temp;
                great=great->next;
            }
            temp=temp->next;
        }
        great->next = nullptr;              
        less->next = greaterdummy->next;
        return lessdummy->next;

    }
};