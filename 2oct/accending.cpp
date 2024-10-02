#include <iostream>
using namespace std;
int main(){
    int arr[]={1, 4, 3, 5, 9};//1 3 4 5 9
    int s= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\n";
    }
    int tem;
    cout<<"\n sorted array is\n";
    for(int i=0; i<s; i++)
    {
        for(int j=i; j<s-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    }
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\n";
    }
}