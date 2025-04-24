#include <iostream>
using namespace std;
double sum_of_1_to_n(int n)
{
    double sum =0;
    for (int i=1; i <= n; i++)
    {sum=sum +i;}
    return sum;}
int main(){
// sum_of_1_to_n(5);
    cout << "Sum of 1 to 5 is: " << sum_of_1_to_n(10) << endl;


    
    return 0;
}