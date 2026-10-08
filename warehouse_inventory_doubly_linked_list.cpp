#include <iostream>
using namespace std;

struct Node
{
    int id;
    string name;
    int quantity;

    Node* prev;
    Node* next;
};

int main()
{
    Node *head = NULL, *temp, *newNode;
    int choice, id;

    do
    {
        cout << "\n===== WAREHOUSE INVENTORY =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Forward\n";
        cout << "3. Display Backward\n";
        cout << "4. Search Product\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        // Add Product
        if (choice == 1)
        {
            newNode = new Node();

            cout << "Enter Product ID: ";
            cin >> newNode->id;

            cout << "Enter Product Name: ";
            cin >> newNode->name;

            cout << "Enter Quantity: ";
            cin >> newNode->quantity;

            newNode->prev = NULL;
            newNode->next = NULL;

            if (head == NULL)
            {
                head = newNode;
            }
            else
            {
                temp = head;

                while (temp->next != NULL)
                {
                    temp = temp->next;
                }

                temp->next = newNode;
                newNode->prev = temp;
            }

            cout << "Product added successfully!\n";
        }

        // Display Forward
        else if (choice == 2)
        {
            if (head == NULL)
            {
                cout << "Warehouse is empty!\n";
            }
            else
            {
                temp = head;

                cout << "\n--- Inventory Forward ---\n";

                while (temp != NULL)
                {
                    cout << "ID: " << temp->id
                         << "  Name: " << temp->name
                         << "  Quantity: " << temp->quantity << endl;

                    temp = temp->next;
                }
            }
        }

        // Display Backward
        else if (choice == 3)
        {
            if (head == NULL)
            {
                cout << "Warehouse is empty!\n";
            }
            else
            {
                temp = head;

                while (temp->next != NULL)
                {
                    temp = temp->next;
                }

                cout << "\n--- Inventory Backward ---\n";

                while (temp != NULL)
                {
                    cout << "ID: " << temp->id
                         << "  Name: " << temp->name
                         << "  Quantity: " << temp->quantity << endl;

                    temp = temp->prev;
                }
            }
        }

        // Search Product
        else if (choice == 4)
        {
            cout << "Enter Product ID: ";
            cin >> id;

            temp = head;

            while (temp != NULL)
            {
                if (temp->id == id)
                {
                    cout << "Product Found!\n";
                    cout << "Name: " << temp->name << endl;
                    cout << "Quantity: " << temp->quantity << endl;
                    break;
                }

                temp = temp->next;
            }

            if (temp == NULL)
            {
                cout << "Product not found!\n";
            }
        }

        // Delete Product
        else if (choice == 5)
        {
            cout << "Enter Product ID to delete: ";
            cin >> id;

            temp = head;

            while (temp != NULL && temp->id != id)
            {
                temp = temp->next;
            }

            if (temp == NULL)
            {
                cout << "Product not found!\n";
            }
            else
            {
                if (temp->prev != NULL)
                    temp->prev->next = temp->next;
                else
                    head = temp->next;

                if (temp->next != NULL)
                    temp->next->prev = temp->prev;

                delete temp;

                cout << "Product deleted successfully!\n";
            }
        }

        else if (choice == 6)
        {
            cout << "Exiting program...\n";
        }

        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
