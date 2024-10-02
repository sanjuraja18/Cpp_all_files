#include <iostream>
using namespace std;
int main(){
    // WAP to print unique value 
    int arr[5], j=0;
    cout<<"Enter any number"<<"\n";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout<<"this is unique number"<<"\n";// 6 4 5 4 5
    for(int i=0; i<5; i++)
    {
        for( j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(i==j)//
        {
            cout<< arr[j]<<"\t";
        }
    }
}