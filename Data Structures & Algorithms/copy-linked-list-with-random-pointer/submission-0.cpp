/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node* current = head;

        //prottek node er copy baniye taar pore insert korbo
        while(current){
            Node* copy_node = new Node(current->val);
            copy_node->next = current->next;
            current->next = copy_node;
            current = copy_node->next;
        }

        //random pointer er kaaj 
        current = head;
        while(current){
            if(current->random){
                current->next->random = current->random->next;
            }
            current = current->next->next;
        }

        //deep copy formation
        current = head;
        Node* copy_head = head->next;
        Node* temp = copy_head;
        while(current){
            if(current->next){
                current->next = current->next->next;
            }
            if(temp->next){
                temp->next = temp->next->next;
            }
            
            current = current->next;
            temp = temp->next;
        }

        return copy_head;

        
    }
};