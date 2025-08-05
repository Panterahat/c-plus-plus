#include<iostream>
using namespace std;
int main() {
int n,m;
cout<<"Enter numbers of row: ";
cin>>n;
cout<<"Enter numbers of column: ";
cin>>m;
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;}
    return 0;
    }