#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout<<"Accesing value of a directly: "<<a<<endl;
    cout<<"Accessing value of a using pointers: "<<*p;
    return 0;
}
