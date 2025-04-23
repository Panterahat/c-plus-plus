#include<iostream>
using namespace std;
int main(){ 
int n;
cout<<"Enter a number: ";
cin>>n;
int num = 1;
for (int i=0;i<n;i++){

    for(int j=0;j<n;j++){
        if(num%2==0){
        cout<<num<<" ";}
        else{
            cout<<"  ";
        }
        num++;
        
    }
    cout<<endl;
}



}
