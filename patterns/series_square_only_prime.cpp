#include<iostream>
using namespace std;
int main(){ 
int n;
cout<<"Enter a number: ";
cin>>n;
int num = 1;
for (int i=0;i<n;i++){

    for(int j=0;j<n;j++){
        if (num <= 1) {
            cout << "  ";
        } else {
            int count = 0;
            for (int k = 1; k <= num; k++) {
                if (num % k == 0) {
                    count++;
                }
            }
    
            if (count == 2) {
                cout <<num<<" ";
            } else {
                cout <<"  ";
            }
        }
        num++;
        
    }
    cout<<endl;
}

}

