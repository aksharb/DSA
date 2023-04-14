#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r;
    cout<<"Lenght of Rectangle= "<<p->length<<endl;
    cout<<"Breadth of Rectangle= "<<p->breadth;
    return 0;
}
