/*
1
22
333
*/
#include <iostream>
using namespace std;
int main(){
    for(int c=1; c<=3; c++)
    {
        for(int r=1; r<=c; r++)
        {
            cout <<c;
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    //1
    //12
    //123
    
    for(int c=1; c<=3; c++)
    {
        for(int r=1; r<=c; r++)
        {
            cout <<r;
        }
        cout<<"\n";
    }
    
    //1
    //23
    //456
    cout<<"\n";
    int i=1;
    for(int r=1; r<=3; r++)
    {
        for(int c=1; c<=r; c++)
        {
            cout <<i;
             i++;
        }
       
        cout<<"\n";
    }
    cout<<"\n";

    //A
    //AB
    //ABC
    
    for(int c=65; c<=67; c++)
    {
        for(int r=65; r<=c; r++)
        {
            cout << char(c);
        }
        cout<<"\n";
    }
    //A
    //AB
    //ABC
    cout<<"\n";
    for(int c=65; c<=67; c++)
    {
        for(int r=65; r<=c; r++)
        {
            cout << char(r);
        }
        cout<<"\n";
    }

    //*** 
    //** 
    //*
    cout<<"\n";
    for(int c=1; c<=3; c++)
    {
        for(int r=3; r>=c; r--)
        {
            cout <<"*";
        }
        cout<<"\n";
    } 

    //  *
    // * *
   // * * *

   cout<<"\n";
    for(int c=1; c<=3; c++)
    {
        for(int s=3; s>c; s--)
        {
            cout <<" ";
        }
        for(int r=1; r<=c; r++){
            cout<<"* ";
        }
        cout<<"\n";
    } 

  return 0;
}
