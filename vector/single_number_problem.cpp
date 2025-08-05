#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>numbers={2,3,4,3,2,4,8,9,5,7,8,9,7};
int singlenumber=0;
for(int val:numbers){
singlenumber=singlenumber^val;
}
cout<<"the single number is= "<<singlenumber<<endl;



    return 0;
}