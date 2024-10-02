#include <iostream>
using namespace std;
int main(){
    int num=1;
   
   
    do
    {
        if(num%2==0){
       cout<< num<<"\t";
       }
       num++;
    
       
    } while (num<=10); 
    cout <<"\n \n";

    do
    {
        if(num%2 == 0){
       cout<< num<<"\t";
       }
       else{
            cout <<num;
       }
       num++;
    
       
    } while (num<=10); 

    
}