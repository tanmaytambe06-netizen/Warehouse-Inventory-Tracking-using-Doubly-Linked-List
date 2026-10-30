#include <iostream>
using namespace std;

#define V 6
#define INF 999999

int main()
{
    
    int graph[V][V] = {
        {0, 4, 3, 7, 0, 0},
        {4, 0, 2, 5, 6, 0},
        {3, 2, 0, 4, 8, 9},
        {7, 5, 4, 0, 3, 6},
        {0, 6, 8, 3, 0, 5},
        {0, 0, 9, 6, 5, 0}
    };

    const char buildings[V] = {'A', 'B', 'C', 'D', 'E', 'F'};

    int parent[V];             
    int key[V];               
    bool visited[V] = {false}; 

    
    for (int i = 0; i < V; i++)
    {
        key[i] = INF;
    }

   
    key[0] = 0;
    parent[0] = -1;


    for (int count = 0; count < V - 1; count++)
    {
        
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

      
        visited[u] = true;

      
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
