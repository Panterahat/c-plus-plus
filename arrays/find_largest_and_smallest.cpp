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
//finding lowest
int lowest=numbers[0];
for(int i=0;i<n;i++){
   if(numbers[i]<lowest){
    lowest=numbers[i];
   }
}
cout<<"lowest value is= "<<lowest<<endl;

//finding highest
int highest=numbers[0];
for(int i=0;i<n;i++){
   if(numbers[i]>highest){
    highest=numbers[i];
   }
}
cout<<"highest value is= "<<highest<<endl;
    return 0;
}