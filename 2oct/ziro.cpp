#include <iostream>
using namespace std;
int main(){
    int arr[]={3, 0, 5, 0, 8};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"It's a squnce"<<"\n";
    int c=0;
    for(int i=0; i<s; i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<"\t";
            c++;
        }
        
    }
    while(c<s)
    {
        cout<<arr[c]
    }
}