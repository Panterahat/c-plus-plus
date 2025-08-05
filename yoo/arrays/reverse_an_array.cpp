#include <iostream>
using namespace std;
int main(){
//input section
    int n;
    cout<<"enter the total number= ";
    cin>>n;
int numbers[n];
cout<<"enter the numbers"<<endl;
for(int i=0;i<n;i++){
cin>>numbers[i];
}
//create a temporary array
int reverse[n];
for(int i=0;i<n;i++){
reverse[n-i-1]=numbers[i];
}
//output of reversed array
cout<<"the reversed array"<<endl;
for(int i=0;i<n;i++){
cout<<reverse[i]<<",";
}

    return 0;
}