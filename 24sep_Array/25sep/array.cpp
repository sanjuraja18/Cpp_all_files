#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,1,4,65,35,65};
    int len=sizeof(arr)//sizeof(arr[0]);
    cout<<len<<"\n";

     char ch[]="sanju";//1 bite extra leta hai...
    int len2=sizeof(ch)/sizeof(ch[0]);
    cout<<len2;

    /*int s[3]={10,20,30};
    cout <<s[0]<<"\n";
    cout <<s[1]<<"\n";
    cout <<s[2]<<"\n";
    cout <<s[3]<<"\n";//drawback*/

    /*int arr[]={10, 32, 44, 54};
    cout<<*arr<<"\n";//pointer 0 index pr rhata hai..
    cout<<*(arr+2)<<"\n";
    cout <<arr[2]<<"\n";
    cout<<2[arr]<<"\n";
    cout<<-2[arr]<<"\n";
    cout <<arr[-2]<<"\n";// it's garbage//drawback of array*/

    


}