#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    Rectangle r = {10, 5};
    // accessing directly:
    cout << r.length << endl;
    cout << r.breadth << endl;
    // accessing using pointer:
    Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->breadth << endl;
    return 0;
}