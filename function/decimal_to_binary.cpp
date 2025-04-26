#include <iostream>
#include <cmath>

using namespace std;
int decimal_to_binary(int n)
{int remainder=0,binary=0,i=0,cross;
     for(;n>0;){
        remainder=n%2;
        n=n/2;
        cross=pow(10,i);
        binary=binary+remainder*cross;
        i++;

    }
    return binary;
}

int main()
{
cout<<"Decimal to binary is: "<<decimal_to_binary(42)<<endl;
    
    return 0;
}
