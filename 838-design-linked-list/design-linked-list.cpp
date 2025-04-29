class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    int size;

    MyLinkedList() {
        head = new Node(0);  // Dummy head node
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        Node* curr = head;
        for (int i = 0; i <= index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        Node* newNode = new Node(val);
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        size--;
    }
};
