#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectagle
{
    int length;
    int breadth;
};

int main()
{
    Rectagle *p;
    p = new Rectagle;
    p->length = 15;
    p->breadth = 7;
    cout << p->length << endl;
    cout << p->breadth << endl;
    return 0;
}