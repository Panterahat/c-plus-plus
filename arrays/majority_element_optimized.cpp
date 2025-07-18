#include<iostream>
#include <algorithm>
using namespace std;
int main(){
 int numbers[] = {1,1 ,1,1,2,1, 2, 2,2};
    int sz = sizeof(numbers) / sizeof(int);
    int min = sz / 2;
    int count=1;
    sort(numbers, numbers + sz);
    int maj=numbers[0];
    for(int i=1;i<sz;i++){
        if(maj==numbers[i]){
           count ++;            
        }
        else{
            count=1;
            maj=numbers[i];
        }
        if(count>min){
             cout<<maj;
             break;}
             
        }
        if(!(count>min)){
                cout<<"no majority element";
             }
        return 0;
    }