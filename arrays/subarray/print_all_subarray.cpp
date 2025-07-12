#include<iostream>
using namespace std;
int main(){
int numbers[]={1,2,3,4,5,6,7,8};
int sz=sizeof(numbers)/sizeof(int);
for (int st=0;st<sz;st++){
    for (int end=st;end<sz;end++){
        for (int i=st;i<end;i++){
            cout<<numbers[i];

}
cout<<" ";

}
cout<<endl;}




    return 0;
}