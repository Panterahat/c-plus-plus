#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {2, 3, 4, 5, 4, 3, 2, 6, 7};
    int sz = sizeof(numbers) / sizeof(int);
    cout<<"size is "<<sz<<endl;
    for (int i = 0; i < sz; i++)
    {
        int count = 0;
        for (int j = 0; j < sz; j++)
        {
            if ((numbers[i] == numbers[j])&&(i!=j))
            {
                count++;
            }
           
        }
     if(count==0){
                cout<<numbers[i]<<" is a unique number"<<endl;
            }
    }
    return 0;
}