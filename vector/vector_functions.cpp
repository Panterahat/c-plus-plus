#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector initialization
    vector<int> vec = {2, 4, 5, 7};
    // vectoe for each loop
    for (int value : vec)
    {
        cout << value << endl;
    }
    // vector size
    cout << "size of vector vec= " << vec.size() << endl;
    //vector push back function
    vec.push_back(14);
     cout << "after pushback" <<endl;
      for (int value : vec)
    {
        cout << value << endl;
    }
    cout << "size of vector vec= " << vec.size() << endl;
     //vector pop back function
    vec.pop_back();
     cout << "after popback" <<endl;
      for (int value : vec)
    {
        cout << value << endl;
    }
    cout << "size of vector vec= " << vec.size() << endl;
//vector front back at function
cout << "first value= " << vec.front() << endl;
cout << "last value= " << vec.back() << endl;
cout << "value at 2nd= " << vec.at(1) << endl;





    return 0;
}