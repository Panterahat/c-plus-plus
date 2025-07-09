#include <iostream>
using namespace std;
int reverse(int x){
    int temp=0;
    while (x != 0){
    temp=temp*10 + x%10;
    x=x/10;}
    return temp;
}
int main (){
    int x;
    cin>>x;
cout <<reverse(x)<<endl;
return 0;

}
