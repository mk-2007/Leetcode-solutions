struct Node {
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = nullptr;
    }
};
class MyLinkedList {
private:
    Node* head;
    int size;
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        Node* current = head;
        for(int i = 0 ; i < index; i++) current = current->next;
        return current->val;
    }
    
    void addAtHead(int val) {
        Node* newnode = new Node(val);
        if(head == nullptr) {
            head = newnode;
            size++;
            return;
        }
        newnode->next = head;
        head = newnode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newnode = new Node(val);
        if(head == nullptr){
            head = newnode;
            size++;
            return;
        }
        Node* current = head;
        while(current->next != nullptr) current = current->next;
        current->next = newnode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index <= 0) {
            addAtHead(val);
            return;
        }
        if(index > size) return;
        if(index == size){
            addAtTail(val);
            return;
        }
        Node* newnode = new Node(val);
        Node* current = head;
        for(int i = 0 ; i < index - 1; i++) current = current->next;
        newnode->next = current->next;
        current->next = newnode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr) return;
        if(index < 0 || index >= size) return;
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        } 
        Node* current = head;
        for(int i = 0 ; i < index - 1; i++){
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */