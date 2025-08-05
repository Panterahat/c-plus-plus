#include<iostream>
using namespace std;
int main(){
int numbers[] = {1, 2, 3, -4, 5, -6, -7, -8};
    int sz = sizeof(numbers) / sizeof(int);
int m,n;
int find=3;
for(int i=0;i<sz;i++){
m=numbers[i];
for(int j=i+1;j<sz;j++){
n=numbers[j];
if(m+n==find){
    cout<<m<<"and "<<n<<"are pair sum numbers"<<endl;
}
}
}



    return 0;
}