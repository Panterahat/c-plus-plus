#include <iostream>
using namespace std;
void reversearray(int array[],int size){
    int start=0;
    int end=size-1;
while(start<end){
swap(array[start],array[end]);
start++;
end--;

}
cout<<"the reversed array"<<endl;
for(int i=0;i<size;i++){
cout<<array[i]<<",";
}

}

int main(){
int array[]={1,3,5,7,9};
int sz=sizeof(array)/sizeof(int);
reversearray(array,sz);




}