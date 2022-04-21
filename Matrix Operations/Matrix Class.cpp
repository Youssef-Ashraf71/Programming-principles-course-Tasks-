#include <bits/stdc++.h>
#define ll long long
using namespace std;
void inp(vector<vector<ll>>&x){
      for(ll i=0;i<x.size();i++){
        for(ll j=0;j<x[i].size();j++){
            cin>>x[i][j];
         }
     }
}
class Matrix {
private:
          ll row , col;
    vector<vector<ll>>a,b;
public:
    Matrix(ll r, ll c){
        row=r; col=c;
         vector<vector<ll>>a(row),b(col);
        for(ll i=0;i<row;i++){
            a[i]=vector<ll>(col);  b[i]=vector<ll>(col);
        }
    }
    void SetData( vector<vector<ll>>&x,vector<vector<ll>>&y ){
        ll i,j;
             a=x; b=y;
    }
    void GetAdd(){
        ll i,j;
        cout<<"Addition :"<<endl;
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                cout<<a[i][j]+b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void GetSubtract(){
        ll i,j;
        cout<<"Subtraction :"<<endl;
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                cout<<a[i][j]-b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void GetMultiply(){
        ll i,j;
        if (row!=col){
            cout<<"Not Valid Input for multiplication of matrices\n";
        }
        else{
            cout<<"Multiplication :"<<endl;
            for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                    ll tmp=0;
                    for(int k=0;k<row;k++){
                        tmp+=a[i][k]*b[k][j];
                    }
                    cout<<tmp<<" ";
                }
                cout<<endl;
            }
        }
    }
};
int main()
{
    ll n,m,i,j;
    cout<<"Enter the Dimensions of the matrix nxm Respectively \n";
    cin>>n>>m;
    vector<vector<ll>>a(n),b(n);
    for(i=0;i<n;i++){
        a[i]=vector<ll>(m); b[i]=vector<ll>(m);
    }
    cout<<"Enter the Matrix A \n";
    inp(a);
    cout<<"Enter the Matrix B \n";
    inp(b);
    Matrix ob1(n,m);
    ob1.SetData(a,b);
    ob1.GetAdd();
    ob1.GetMultiply();
    ob1.GetSubtract();
    return 0;
}