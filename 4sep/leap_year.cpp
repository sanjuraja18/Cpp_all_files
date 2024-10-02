#include <iostream>
using namespace std;
int main(){
    int year ;
    cout<<"Enter a year findout that which year is leap year or not ..";
    cin >> year;
    if (year%4 == 0 && year%100!=0 || year%400==0){
        cout<<"this year leap year";
    }
    else{
        cout <<"this is not leap year";

    }
    return 0;
}