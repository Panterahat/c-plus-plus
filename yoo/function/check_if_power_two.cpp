#include <iostream>
using namespace std;
int check(int x){
int y = x-1;
if((x&y)==0){
cout<<"is a power of two"<<endl;
}
else{
    cout<<"is not a power of two"<<endl;

}
}
int main(){
check(8);
check(9);
check(2);
check(4);
check(16);
check(32);
check(64);
return 0;


}