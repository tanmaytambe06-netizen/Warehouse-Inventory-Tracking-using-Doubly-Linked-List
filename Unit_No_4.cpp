#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int slot;
    Node* left;
    Node* right;

    Node(int n) {
        slot = n;
        left = right = nullptr;
    }
};

Node* insertSlot(Node* root, int slot) {
    if (root == nullptr)
        return new Node(slot);

    if (slot < root->slot)
        root->left = insertSlot(root->left, slot);
    else if (slot > root->slot)
        root->right = insertSlot(root->right, slot);
    else
        cout << "Slot already exists!\n";

    return root;
}

void displayLevelOrder(Node* root) {
    if (root == nullptr) {
        cout << "No parking slots available.\n";
        return;
    }

    queue<Node*> q;
    q.push(root);
    int level = 1;

    while (!q.empty()) {
        int count = static_cast<int>(q.size());
        cout << "Level " << level << ": ";

        for (int i = 0; i < count; i++) {
            Node* current = q.front();
            q.pop();

            cout << current->slot << " ";

            if (current->left != nullptr)
                q.push(current->left);

            if (current->right != nullptr)
                q.push(current->right);
        }

        cout << '\n';
        level++;
    }
}

int findLevel(Node* root, int slot) {
    int level = 1;

    while (root != nullptr) {
        if (root->slot == slot)
            return level;

        if (slot < root->slot)
            root = root->left;
        else
            root = root->right;

        level++;
    }

    return -1;
}

void deleteTree(Node* root) {
    if (root == nullptr)
        return;

    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    int choice, slot, level;

    do {
        cout << "\n--- PARKING SLOT MANAGEMENT ---\n";
        cout << "1. Add parking slot\n";
        cout << "2. Display slots level by level\n";
        cout << "3. Find level of a slot\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter slot number: ";
                if (cin >> slot) {
                    if (slot <= 0) {
                        cout << "Slot number must be positive.\n";
                    } else {
                        root = insertSlot(root, slot);
                    }
                } else {
                    cout << "Invalid slot number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                break;

            case 2:
                displayLevelOrder(root);
                break;

            case 3:
                cout << "Enter slot number to search: ";
                if (cin >> slot) {
                    level = findLevel(root, slot);

                    if (level == -1)
                        cout << "Slot not found!\n";
                    else
                        cout << "Slot " << slot
                             << " is at level " << level << ".\n";
                } else {
                    cout << "Invalid slot number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                break;

            case 4:
                cout << "Exiting application...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    deleteTree(root);
    return 0;
}
