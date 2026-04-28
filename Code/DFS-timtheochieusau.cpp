#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int n, v, s;
int cx[101];

void init() {
    freopen("DT1.txt", "r", stdin);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        cx[i] = 0;
    }
    cout << "So dinh: " << n << "\n";
    cout << "Ma tran ke cua do thi:" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
void DFS(int u) {
    cout << u << " "; 
    cx[u] = 1;
    for (int v = 1; v <= n; v++) {
        if (a[u][v] == 1 && cx[v] == 0) {
            DFS(v);
        }
    }
}
int main() {
    init(); 
    s = 1; 
    cout << "Duyet theo chieu sau bat dau tu dinh: " << s << "\n";
    DFS(s); 
    return 0;
}
