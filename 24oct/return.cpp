#include <iostream>
using namespace std;
void swp (int &a, int &b)//call by reference
{
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"Value of a = "<<a<<"\n";
  cout<<"Value of b = "<<b<<"\n";

}

int main(){
    int x,y;
    cout<<"Entre two number"<<"\n";
    cin>>x>>y;
    swp(x,y);
    cout<<"value of x = "<<x<<"\n";
    cout<<"value of y = "<<y<<"\n";
}