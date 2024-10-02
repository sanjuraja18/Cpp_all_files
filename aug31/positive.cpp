//WAP a program to accept all positive number
#include <iostream>
using namespace std;
int main()
{
    int number =0;
    cout <<"Enter a number";
    cin >>number;
    number >= 0?cout<<"number is "<<number : cout<<"update number is "<< - number;
}