#include <iostream>
using namespace std;
int main(){
    int num=1,sum=0;
   
   
    do
    {
       sum = num+sum;
       num++;
    
       
    } while (num<=10); 
    cout<<sum;
    }