# Warehouse Inventory Management System

## 📌 Project Overview

The **Warehouse Inventory Management System** is a menu-driven C++ application developed using a **Doubly Linked List**. It helps manage warehouse products by allowing users to add, display, search, and delete product records.

Each product contains a product ID, product name, and quantity. The doubly linked list allows the inventory to be displayed in both forward and backward directions.

## ✨ Features

- **Add Product:** Insert a new product into the inventory.
- **Display Forward:** Display all products from first to last.
- **Display Backward:** Display all products from last to first.
- **Search Product:** Find a product using its ID.
- **Delete Product:** Remove a product using its ID.
- **Menu-Driven Interface:** Perform multiple operations until choosing Exit.
- **Dynamic Memory Allocation:** Create and delete nodes dynamically using `new` and `delete`.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Data Structure:** Doubly Linked List
- **Concepts:** Structures, pointers, dynamic memory allocation, functions, loops, and switch statements.
- **Header Files:** `iostream`, `string`


## 💻 Sample Output

```text
--- WAREHOUSE INVENTORY ---
1. Add product
2. Display forward
3. Display backward
4. Search product
5. Delete product
6. Exit
Enter choice: 1

Enter product ID: 101
Enter product name: Laptop
Enter quantity: 10
Product added!

--- WAREHOUSE INVENTORY ---
1. Add product
2. Display forward
3. Display backward
4. Search product
5. Delete product
6. Exit
Enter choice: 1

Enter product ID: 102
Enter product name: Mouse
Enter quantity: 25
Product added!

--- WAREHOUSE INVENTORY ---
1. Add product
2. Display forward
3. Display backward
4. Search product
5. Delete product
6. Exit
Enter choice: 2

Inventory (forward)
ID: 101  Name: Laptop  Qty: 10
ID: 102  Name: Mouse  Qty: 25

--- WAREHOUSE INVENTORY ---
1. Add product
2. Display forward
3. Display backward
4. Search product
5. Delete product
6. Exit
Enter choice: 3

Inventory (backward)
ID: 102  Name: Mouse  Qty: 25
ID: 101  Name: Laptop  Qty: 10

--- WAREHOUSE INVENTORY ---
1. Add product
2. Display forward
3. Display backward
4. Search product
5. Delete product
6. Exit
Enter choice: 4

Enter product ID: 101
Found! Name: Laptop, Qty: 10

--- WAREHOUSE INVENTORY ---
1. Add product
2. Display forward
3. Display backward
4. Search product
5. Delete product
6. Exit
Enter choice: 5

Enter product ID to delete: 102
Product deleted

--- WAREHOUSE INVENTORY ---
1. Add product
2. Display forward
3. Display backward
4. Search product
5. Delete product
6. Exit
Enter choice: 6
Bye!
```


## 🚀 Future Improvements

- Update product details and quantities.
- Prevent duplicate product IDs.
- Support product names containing spaces.
- Save inventory data to a file so it persists after the program exits.
- Add stock alerts and low-inventory notifications.

