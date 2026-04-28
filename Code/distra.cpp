#include <bits/stdc++.h>
using namespace std;

const char ginp[] = "DT3.txt";
int w[101][101];
int n,d[101],truoc[101],S[101];

void init() {
    freopen(ginp, "r", stdin);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> w[i][j];
        }
    }
    cout << "So dinh: " << n << "\n";
    cout << "Ma tran trong so cua do thi:" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << w[i][j] << " ";
        }
        cout << "\n";
    }
}
void distra(int s,int t){
	for(int v=1;v<=n;v++){
		d[v]=w[s][v];
		truoc[v]=s;
		S[v]=0;
	}
	d[s]=0;
	S[s]=1;
	while(S[t]!=1){
		int min = INT_MAX;
		int u;
		for(int v=1;v<=n;v++){
			if(S[v] == 0 && d[v] < min){
				min=d[v];
				u=v;
			}
		}
		S[u]=1;
		for(int v=1;v<=n;v++){
			if(S[v]==0 && d[v]>d[u]+w[u][v]){
				d[v]=d[u]+w[u][v];
				truoc[v]=u;
			}
		}
	}
	cout <<"Duong di ngan nhat tu " <<s <<" den "<<t<<" la:"<<endl;
	cout <<"Do dai:"<<d[t]<<endl;
	cout <<"Duong di la:"<<endl;
	cout << t;
	int p=t;
	while(truoc[p]!=s){
		cout << "<--" << truoc[p];
		p=truoc[p];
	}
	cout << "<--" << s;
}
int main(){
	init();
	distra(1,3);
    return 0;
}
