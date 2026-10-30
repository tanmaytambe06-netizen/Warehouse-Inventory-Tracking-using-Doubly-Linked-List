

## 1. About the Project

The Minimum-Cost Fire Alarm Network is a C++ project developed to design a cost-effective network connecting buildings on a college campus. It represents campus buildings as vertices and possible cable connections as weighted edges in an undirected graph. The weight of each edge represents the installation cost of that connection.

The project uses **Prim's Minimum Spanning Tree (MST) Algorithm** to select connections that link all campus buildings with the minimum possible total installation cost. A menu-driven interface is not required for this implementation; the program calculates and displays the selected connections and the total cost.

## 2. Features

### Basic Features

- **Campus Building Representation:** Represent six campus locations using vertices A, B, C, D, E, and F.
- **Connection Cost Representation:** Store installation costs between buildings in an adjacency matrix.
- **Minimum Spanning Tree:** Apply Prim's algorithm to find a minimum-cost network.
- **Selected Connection Display:** Display each connection included in the minimum spanning tree.
- **Total Cost Calculation:** Calculate and display the total installation cost.
- **Fixed Starting Vertex:** Begin the algorithm from vertex A (Main Building).

### Fire Alarm Network Features

- **Building Connectivity:** Connect all six campus buildings through the selected network.
- **Cost Optimization:** Choose the lowest-cost connections while ensuring all buildings are connected.
- **Cycle Avoidance:** Add an edge only when it connects an included vertex to a vertex not yet included in the MST.
- **Efficient Network Design:** Use exactly V - 1 edges to connect V vertices in the minimum spanning tree.
- **Expandable Model:** Additional buildings and connection costs can be added by updating the graph representation.

## 3. Algorithm Used — Prim's Minimum Spanning Tree (MST)

Prim's algorithm is a greedy algorithm used to find a Minimum Spanning Tree in a connected, weighted, undirected graph.

### Graph Representation

Each vertex represents a campus building:

| Vertex | Campus building |
|---|---|
| A | Main Building |
| B | Computer Department |
| C | Mechanical Department |
| D | Electrical Department |
| E | Library |
| F | Administration Building |

The possible connections and their assumed installation costs are:

| Connection | Cost (₹ thousand) |
|---|---:|
| A - B | 4 |
| A - C | 3 |
| A - D | 7 |
| B - C | 2 |
| B - D | 5 |
| B - E | 6 |
| C - D | 4 |
| C - E | 8 |
| C - F | 9 |
| D - E | 3 |
| D - F | 6 |
| E - F | 5 |

### Working of Prim's Algorithm

1. Start from vertex A.
2. Select the minimum-cost edge connecting a visited vertex to an unvisited vertex.
3. Add the selected edge to the Minimum Spanning Tree.
4. Mark the newly connected vertex as visited.
5. Repeat until all vertices are included.

### Selected Minimum-Cost Connections

| Step | Selected connection | Cost (₹ thousand) |
|---|---|---:|
| 1 | A - C | 3 |
| 2 | C - B | 2 |
| 3 | C - D | 4 |
| 4 | D - E | 3 |
| 5 | E - F | 5 |
| | **Total** | **17** |

Therefore, the minimum installation cost for the given graph is **₹17,000**.

## 4. Technologies Used

- C++
- Graph data structure
- Adjacency matrix
- Prim's Minimum Spanning Tree algorithm
- Greedy algorithm
- Arrays
- Loops and conditional statements
- Functions and standard input/output

## 5. Applications

- Planning a campus fire alarm communication network.
- Estimating a low-cost cable connection layout for buildings.
- Demonstrating graph representation and minimum spanning trees.
- Understanding greedy algorithms and graph optimization.
- Educational mini-projects in Data Structures and Algorithms (DSA).

## 6. Conclusion

The Minimum-Cost Fire Alarm Network project demonstrates how Prim's algorithm can be used to connect multiple campus buildings at minimum total installation cost. The graph contains six vertices representing campus buildings and weighted edges representing possible connections and their installation costs.

The algorithm selects five connections—A-C, C-B, C-D, D-E, and E-F—with a total cost of **₹17,000**. This project demonstrates the practical use of graphs, adjacency matrices, greedy algorithms, and Minimum Spanning Trees in C++.

*Note: The costs used in this project are assumed values for academic demonstration. A real fire alarm installation must also comply with applicable fire safety standards and account for system supervision, redundancy, reliability, and approved installation requirements.*

## 7. Language

C++
