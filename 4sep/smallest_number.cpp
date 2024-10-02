#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3=0;
    cout <<"Enter a number"<<"\n";
    cin>>num1>>num2>>num3;
    if (num1<num2||num1<num3){
        cout <<"this is smallest number"<<num1;
    }
    else if (num2<num1||num2<num3){
        cout <<"this is smallest number"<<num2;
    }
    else if (num3<num1||num3<num2){
        cout <<"this is smallest number"<<num3;
    }
    return 0;

}