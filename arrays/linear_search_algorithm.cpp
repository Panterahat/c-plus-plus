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
//finding index
int tofind;
    cout<<"enter the number to be found= ";
    cin>>tofind;
int index=-1;
for(int i=0;i<n;i++){
   if(numbers[i]==tofind){
    index =i;
    cout<<"index value is= "<<index<<endl;
  //  break;
   }
}if(index==-1){
     cout<<"targeted value not found";
}
    return 0;
}