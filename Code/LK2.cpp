#include <iostream>
using namespace std;
int n, m, dem, kq[10], dd[10];
void khoitao(){ 
    cout <<"Nhap n= "; cin >> n;
    cout <<"Nhap m= "; cin >> m;
    for (int i=1; i<=n; i++) dd[i]=0;
    dem=0;
}
void xuat(){ 
    dem++; cout <<dem <<". ";
    for (int j=1; j<=m; j++)
    cout<< kq[j]<<" ";
    cout << endl;
}
void Try(int i)
{
   for (int j=1; j<=n; j++)
   if (dd[j]==0){
      kq[i]=j;
      dd[j]=1;
   if (i==m) xuat();
   else Try(i+1);
       dd[j]=0;
    }
}
int main()
{ khoitao(); Try(1); }
