# Warehouse Inventory Management System

## About the Project
The Warehouse Inventory Management System is a C++ project developed to manage products stored in a warehouse. It uses a **Doubly Linked List** to store and manage product details.
The system allows users to add products, view inventory, search for products, and delete products using a simple menu-driven interface.

## Features

### Basic Features
- **Add Product:** Add a product with its ID, name, and quantity.
- **Display Inventory:** View all products in forward order.
- **Backward Display:** View products in reverse order.
- **Search Product:** Find a product using its ID.
- **Delete Product:** Remove a product from the inventory.

### Inventory Management Features
- **Stock Tracking:** Keep track of the quantity of each product.
- **Product Identification:** Use a unique product ID to identify products.
- **Inventory Checking:** View the available products and their quantities.
- **Stock Updates:** The program can be extended to increase or decrease product quantities.
- **Low Stock Alert:** A future improvement could notify the user when product quantity falls below a fixed limit.
- **Duplicate ID Checking:** A future improvement could prevent two products from having the same ID.

## Data Structure Used
**Doubly Linked List**

Each node stores:
- Product ID
- Product name
- Product quantity
- Pointer to the previous node
- Pointer to the next node

This structure allows the inventory to be displayed in both forward and backward directions.

## Technologies Used
- C++
- Structures and pointers
- Dynamic memory allocation
- Doubly Linked List
- Functions


## Applications
- Small warehouse management
- Shop product records
- Basic stock management
- Learning data structures through a practical example

## Conclusion
This project demonstrates how a doubly linked list can be used to manage warehouse inventory. It provides basic operations for storing, viewing, searching, and deleting product records. It also provides a starting point for developing a more advanced inventory management system.

## Language
C++
