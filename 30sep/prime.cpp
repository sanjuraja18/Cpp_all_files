#include <iostream>
using namespace std;
int main(){
    int n, f;
    cout <<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the records the array"<<"\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nprime number is  ";
    for(int i=0; i<n; i++)
    {
        f=0;
        int k=arr[i]-1;
        while(k>0){
            if(arr[i]%k==0)
            {
                f=1;
                break;
            }
            k--;
        }
        if(f==0)
        cout<<arr[i]<<"\t";
    }

}