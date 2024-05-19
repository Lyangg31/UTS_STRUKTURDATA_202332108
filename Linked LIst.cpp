#include <iostream>
using namespace std;
struct Node {
    int data;       
    Node* next; 
    Node(int val) : data(val), next(NULL) {}
};
void tambah(Node*& head, int new_data) {
    Node* new_node = new Node(new_data);
    if (!head) {
        head = new_node;
        return;
    }
    Node* last = head;
    while (last->next) {
        last = last->next;
    }
    last->next = new_node; 
}
void cetak(Node* node) {
    while (node) {
        std::cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main() {
    Node* head = NULL;
    tambah(head, 17);
    tambah(head, 5);
    tambah(head, 7);
    tambah(head, 28);
    cout << "Membuat Linked List: ";
    cetak(head);
    
    return 0;
}
