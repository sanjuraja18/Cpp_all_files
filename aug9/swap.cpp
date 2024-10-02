#include <iostream>
using namespace std ;
int main(){
    int a, b, t;
    char c;
    cout <<"enter 2 number "<<"\n";
     cin >> a,b;
    cout <<"enter 's' for swap and 'g ' for greater" ;
   

    switch (c)
    {
    case 'm':
        a = t;
        a = b;
        b = c;
        break;

    case 'g':
      if(a > b)
    {
      cout   << a <<"a grater  "; 
      break;
      } 
      else{
        cout <<b <<"b is grater ";
        break;
      }  
    
    default:
        break;
    }
}