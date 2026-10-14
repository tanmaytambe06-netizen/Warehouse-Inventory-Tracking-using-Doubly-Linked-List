#include <iostream>
#include <string>
using namespace std;

struct Node {
    int id;
    string name;
    int qty;
    Node *prev;
    Node *next;
};

Node *head = NULL;

void addProduct() {
    Node *n = new Node;
    cout << "Enter product ID: ";
    cin >> n->id;
    cout << "Enter product name: ";
    cin >> n->name;
    cout << "Enter quantity: ";
    cin >> n->qty;
    n->prev = n->next = NULL;

    if (head == NULL) {
        head = n;
    } else {
        Node *t = head;
        while (t->next != NULL)
            t = t->next;
        t->next = n;
        n->prev = t;
    }
    cout << "Product added!\n";
}

void showForward() {
    if (head == NULL) {
        cout << "Warehouse is empty\n";
        return;
    }
    cout << "\nInventory (forward)\n";
    for (Node *t = head; t != NULL; t = t->next)
        cout << "ID: " << t->id << "  Name: " << t->name << "  Qty: " << t->qty << endl;
}

void showBackward() {
    if (head == NULL) {
        cout << "Warehouse is empty\n";
        return;
    }
    Node *t = head;
    while (t->next != NULL)
        t = t->next;

    cout << "\nInventory (backward)\n";
    while (t != NULL) {
        cout << "ID: " << t->id << "  Name: " << t->name << "  Qty: " << t->qty << endl;
        t = t->prev;
    }
}

Node* findProduct(int id) {
    Node *t = head;
    while (t != NULL && t->id != id)
        t = t->next;
    return t;
}

void searchProduct() {
    int id;
    cout << "Enter product ID: ";
    cin >> id;

    Node *t = findProduct(id);
    if (t == NULL) {
        cout << "Product not found\n";
    } else {
        cout << "Found! Name: " << t->name << ", Qty: " << t->qty << endl;
    }
}

void deleteProduct() {
    int id;
    cout << "Enter product ID to delete: ";
    cin >> id;

    Node *t = findProduct(id);
    if (t == NULL) {
        cout << "Product not found\n";
        return;
    }

    if (t->prev != NULL)
        t->prev->next = t->next;
    else
        head = t->next;

    if (t->next != NULL)
        t->next->prev = t->prev;

    delete t;
    cout << "Product deleted\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- WAREHOUSE INVENTORY ---\n";
        cout << "1. Add product\n";
        cout << "2. Display forward\n";
        cout << "3. Display backward\n";
        cout << "4. Search product\n";
        cout << "5. Delete product\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addProduct(); break;
            case 2: showForward(); break;
            case 3: showBackward(); break;
            case 4: searchProduct(); break;
            case 5: deleteProduct(); break;
            case 6: cout << "Bye!\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (choice != 6);

    return 0;
}
