#include <iostream>
using namespace std;
int main(){
    int num=0, modify=0;
    cout<<"Enter any number for reverce number";
    cin>>num;

    do
    {
        modify= num%10 +modify*10 ;
        num = num/10;
    } while (num!=0);
    cout<<modify;
}