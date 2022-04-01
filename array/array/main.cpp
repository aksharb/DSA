#include <iostream>
#include <stdio.h> //for C code
using namespace std;
int main()
{
    int A[10] = {2,4,6,8,10,12};
    for(int x:A) ///for each loop
    {
        cout<<x<<endl;
    }
    return 0;
}
