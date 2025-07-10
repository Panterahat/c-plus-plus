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
//sum
int sum=0;
for(int i=0;i<n;i++){
sum=sum+numbers[i];
}
cout<<"sum is= "<<sum<<endl;
//product
int product=1;
for(int i=0;i<n;i++){
product=product*numbers[i];
}
cout<<"product is= "<<product<<endl;

}