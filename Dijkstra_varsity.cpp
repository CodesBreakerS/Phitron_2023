#include<bits/stdc++.h>
#include<vector>
using namespace std;

// this method returns the shortest distance from the source node to all other nodes
// using BFS and a priority queue
vector<int> Dijkstra(int graph[6][6], int src) // adjacency matrix used is 6x6
{
    vector<int> dist(6, INT_MAX); // vector to store the minimum distance for each node
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // priority queue to store the node and its distance in ascending order
    pq.push({0, src}); // push the source node with distance 0
    dist[src] = 0; // set the source node distance to 0

    while(!pq.empty()) // loop until the queue is empty
    {
        int u = pq.top().second; // get the node with the minimum distance
        pq.pop(); // remove it from the queue
        for(int v = 0; v < 6; v++) // loop through all the adjacent nodes of u
        {
            if(graph[u][v] > 0 && dist[v] > dist[u] + graph[u][v]) // if there is an edge between u and v and the distance can be improved
            {
                dist[v] = dist[u] + graph[u][v]; // update the distance of v
                pq.push({dist[v], v}); // push v and its distance to the queue
            }
        }
    }
    return dist; // return the vector of distances
}

int main()
{
    int n; // number of nodes
    cout << "Enter the number of nodes: ";
    cin >> n; // read n from the input
    int graph[n][n]; // declare a n x n matrix
    cout << "Enter the adjacency matrix: \n";
    for(int i = 0; i < n; i++) // loop through the rows
    {
        for(int j = 0; j < n; j++) // loop through the columns
        {
            cin >> graph[i][j]; // read the weight of the edge from i to j
        }
    }
    int src; // source node
    cout << "Enter the source node: ";
    cin >> src; // read src from the input
    vector<int> dist = Dijkstra(graph,src); // call the Dijkstra method with source node as src
    cout<<"Vertex\t\tDistance from source"<<endl;
    for(int i = 0; i<n; i++)                      
    { //Printing
        char str=65+i; // Ascii values for printing A,B,C..
        cout<<str<<"\t\t\t"<<dist[i]<<endl;
    }
    return 0;	                        
}
