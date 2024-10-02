//WAP to print the table of any number
#include <iostream>
using namespace std;
int main (){
    int number;
   cout <<"Enter a number";
   cin >> number;
   int i=1;

    do{
        cout << number <<" x "<< i <<"=" <<number*i<<"\n";
        i++;
        
    }while (i<=10);
    
    
    
    
}