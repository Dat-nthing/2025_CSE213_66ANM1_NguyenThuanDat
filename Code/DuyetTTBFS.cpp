#include <bits/stdc++.h>
using namespace std;

const char ginp[] = "DT.INP";
int a[101][101];  // Adjacency matrix for the graph
int n, s;
int cx[101];  // Array to mark the visited vertices

// Function to initialize the graph and read input
void init() {
    freopen(ginp, "r", stdin);
    // Read the number of vertices
    cin >> n;
    
    // Read the adjacency matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Initialize the visited array
    for (int i = 1; i <= n; i++) {
        cx[i] = 0;
    }

    // Output the number of vertices and the adjacency matrix
    cout << "So dinh: " << n << "\n";
    cout << "Ma tran ke cua do thi:" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

// Depth First Search (DFS) function
void DFS(int u) {
    cout << u << " ";  // Print the current vertex
    cx[u] = 1;  // Mark the vertex u as visited

    // Explore all adjacent vertices of u
    for (int v = 1; v <= n; v++) {
        if (a[u][v] == 1 && cx[v] == 0) {
            DFS(v);  // Recurse if v is not visited
        }
    }
}

int main() {
    init();  // Initialize the graph and input
    s = 1;   // Start DFS from vertex 1
    cout << "Duyet theo chieu sau bat dau tu dinh: " << s << "\n";
    DFS(s);  // Perform DFS starting from vertex s
    return 0;
}

