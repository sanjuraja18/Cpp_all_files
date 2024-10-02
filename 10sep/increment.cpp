#include <iostream>
using namespace std;
int main(){
    int a=3;
    int b=4;
    int c=4;
    int d = --b;//3
    b = a++;//3
    a = ++d;//4
    c = d--;//4
    cout<<a<<b<<c<<d;
}