#include <iostream>
using namespace std;
int main() {
    int A[5] = {2,4,6,8,10};
    int *p;
    p = A; // we don't use & when pointing to an array
    cout<<"Accessing the array directly:"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"Accessing the array using pointers:"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl; //we don't use * while accessing array
    }
    return 0;
}
