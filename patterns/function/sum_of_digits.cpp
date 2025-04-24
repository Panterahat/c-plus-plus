#include <iostream>
using namespace std;
int sum(int n){
    int sum=0;
    int temp=0;
    for (;0<n;){
       
        temp=n%10;
        sum=sum+temp;
         n=n/10;
    }
    return sum;
}
int main()
{sum(123456789);
    cout << "Sum of digits is: " << sum(123456789) << endl;


    
    return 0;
}