#include <iostream>

using namespace std;

int main()
{
    int a = 97, b = 141, c = 61, d = 1100001;
    int *p;
    p=&a;
    cout<<*p<<"=";
    p=&b;
    cout<<*p<<"=";
    p=&c;
    cout<<*p<<"=";
    p=&d;
    cout<<*p;
    return 0;
}
