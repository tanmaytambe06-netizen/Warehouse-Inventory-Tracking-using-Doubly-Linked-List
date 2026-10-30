#include <iostream>
using namespace std;

#define V 6
#define INF 999999

int main()
{
    // Adjacency matrix representing installation costs (in thousand rupees).
    // 0 means there is no direct connection between two buildings.
    int graph[V][V] = {
        {0, 4, 3, 7, 0, 0},
        {4, 0, 2, 5, 6, 0},
        {3, 2, 0, 4, 8, 9},
        {7, 5, 4, 0, 3, 6},
        {0, 6, 8, 3, 0, 5},
        {0, 0, 9, 6, 5, 0}
    };

    const char buildings[V] = {'A', 'B', 'C', 'D', 'E', 'F'};

    int parent[V];             // Stores the MST parent of each vertex.
    int key[V];                // Minimum known cost to connect each vertex.
    bool visited[V] = {false}; // True if the vertex is already in the MST.

    // Initialize all key values to infinity.
    for (int i = 0; i < V; i++)
    {
        key[i] = INF;
    }

    // Start Prim's algorithm from building A (vertex 0).
    key[0] = 0;
    parent[0] = -1;

    // An MST with V vertices contains exactly V - 1 edges.
    for (int count = 0; count < V - 1; count++)
    {
        // Find the unvisited vertex with the smallest key value.
        int minKey = INF;
        int u = -1;

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && key[v] < minKey)
            {
                minKey = key[v];
                u = v;
            }
        }

        // Mark the selected vertex as included in the MST.
        visited[u] = true;

        // Update key and parent values of adjacent unvisited vertices.
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] != 0 &&
                !visited[v] &&
                graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    // Display the Minimum Spanning Tree and its total cost.
    int totalCost = 0;

    cout << "Minimum Cost Fire Alarm Network\n";
    cout << "Selected Connections:\n\n";

    for (int i = 1; i < V; i++)
    {
        int cost = graph[i][parent[i]];

        cout << buildings[parent[i]] << " - " << buildings[i]
             << " : " << cost << " thousand rupees\n";

        totalCost += cost;
    }

    cout << "\nTotal Minimum Installation Cost = "
         << totalCost << " thousand rupees\n";

    cout << "Total Minimum Installation Cost = Rs. "
         << totalCost * 1000 << '\n';

    return 0;
}
