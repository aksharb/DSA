#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main() {
    struct Rectangle r1 = {10, 15};
    cout<<"Lenght: "<<r1.length<<endl;
    cout<<"Breadth: "<<r1.breadth;
    return 0;
}
