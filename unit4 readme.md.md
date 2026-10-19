# Parking Slot Management System

## 1. About the Project

The Parking Slot Management System is a C++ project developed to manage and organize parking slot numbers. It uses a **Binary Search Tree (BST)** to store and manage parking slot information. The system allows users to add parking slots, display slots level by level, and search for the level of a particular slot using a simple menu-driven interface.

## 2. Features

### Basic Features

- **Add Parking Slot:** Add a new parking slot using its unique slot number.
- **Display Parking Slots:** View all parking slots level by level.
- **Search Parking Slot:** Find a parking slot and identify its level in the tree.
- **Duplicate Slot Checking:** Prevent duplicate slot numbers from being inserted.
- **Input Validation:** Reject invalid menu inputs and non-positive slot numbers.
- **Exit System:** Close the application safely.

### Parking Management Features

- **Slot Organization:** Arrange parking slot numbers using a Binary Search Tree.
- **Slot Identification:** Use a unique slot number to identify each node.
- **Level Tracking:** Determine the level at which a particular slot is located.
- **Efficient Searching:** Use the BST structure to search for slot numbers.
- **Memory Management:** Release dynamically allocated memory when the program exits.
- **Future Improvements:** The system could be extended to track vehicle numbers, parking availability, entry and exit times, parking fees, and occupied or vacant slots.

## 3. Data Structure Used — Binary Search Tree (BST)

Each node stores:

- Parking slot number
- Pointer to the left child node
- Pointer to the right child node

In a Binary Search Tree, smaller slot numbers are stored in the left subtree, while larger slot numbers are stored in the right subtree.

This structure helps organize slot numbers and supports insertion, searching, and level-order traversal. A queue is used to display the tree level by level.

## 4. Technologies Used

- C++
- Structures and pointers
- Dynamic memory allocation
- Binary Search Tree
- Queue data structure
- Recursion
- Functions
- Menu-driven programming

## 5. Applications

- Basic parking slot organization
- Parking facility management demonstrations
- Learning tree-based data structures
- Understanding searching and insertion algorithms
- Educational mini-projects in Data Structures and Algorithms (DSA)

## 6. Conclusion

The Parking Slot Management System demonstrates how a Binary Search Tree can be used to organize parking slot numbers efficiently. It provides basic operations for inserting slots, displaying them level by level, and searching for a slot's level. The project also demonstrates the practical use of pointers, recursion, queues, and dynamic memory allocation in C++. It provides a foundation for developing a more advanced parking management system with real-time availability tracking, vehicle records, and parking fee calculation.

## 7. Language

C++
