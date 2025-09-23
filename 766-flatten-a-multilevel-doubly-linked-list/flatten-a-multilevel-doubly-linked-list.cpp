/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) 
            return nullptr;
        
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->child != nullptr) {
                Node* nextNode = temp->next;
                Node* childTail = temp->child;
                while (childTail->next != nullptr) {
                    childTail = childTail->next;
                }
                if (nextNode != nullptr) {
                    childTail->next = nextNode;
                    nextNode->prev = childTail;
                }
                temp->next = temp->child;
                temp->child->prev = temp;
                temp->child = nullptr;
            }
            temp = temp->next;
        }
        return head;
    }
};



