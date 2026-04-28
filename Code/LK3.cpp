#include <iostream>
using namespace std;

int n, dem, x[20],kq[20],dd[20],cp,cpmin=9999999;
int c[20][20];

void khoitao() {
	cp = 0;
    cout << "Nhap n= ";
    cin >> n;
    for(int i = 1;i<=n;i++)
    	for(int j =1;j<=n;j++){
    		cout << "c[" <<i<<"][" <<j<<"] = ";
    		cin >> c[i][j];
		}
    for (int i = 1; i <= n; i++)
        dd[i] = 0;
    dem = 0;
    x[1]=1;
    dd[1]=1;
    cout << "Ma tran chi phi:" << endl;
    for(int i =1;i<=n;i++){
    	for(int j=1;j<=n;j++)
    		cout << c[i][j] << " ";
    	cout << endl;
	}
    
}

void inkq() {  
	cout << "Hanh trinh toi uu la:" << endl;
    for (int j = 1; j <= n; j++)
        cout << kq[j] << "-->";
    cout << "1";
    cout << endl;
    cout << "Chi phi cua hanh trinh:" << cpmin;
    cout << endl;
}
void cn(){
	if(cp+c[x[n]][1]<cpmin){
		cpmin=cp+c[x[n]][1];
		for(int i=1;i<=n;i++)
			kq[i]=x[i];
	}
}

void Try(int i) {
    for (int j = 2; j <= n; j++)
        if (dd[j] == 0) {
            x[i] = j;
            cp=cp + c[x[i-1]][j];
            dd[j] = 1;
            if (i == n) 
                cn();
            else 
                Try(i + 1);
            dd[j] = 0;
            cp=cp - c[x[i-1]][j];
        }
}

int main() { 
    khoitao(); 
    Try(2);
    inkq();
}
