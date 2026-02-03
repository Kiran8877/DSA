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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> fin;
        ListNode* temp=head;
        while(temp!=NULL){
            fin.push_back(temp->val);
            temp=temp->next;
        }
        swap(fin[k-1],fin[fin.size()-k]);
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->val=fin[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};