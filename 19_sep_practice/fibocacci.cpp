//WAP to genrete fibonacci series
#include <iostream>
using namespace std;
int main(){
    int pre=0,curt=1;
    int num=0, term=0;
    cout <<"Ente term of  fibonacci series ";
    cin>>num;
    cout <<pre<<"\t"<<curt<<"\t";
    for(int i=0; i<=num; i++)
    {
        term=curt+pre;
        pre=curt;
        curt=term;
        cout<<term<<"\t";
    }
    cout <<"\nlast trem : "<<term;
    return 0;

}