// one dimension array

#include <iostream>
using namespace std;
int main(){
    //datatype arrayname[size];//single dimension array
    int ram[5];
    cout<<"Enter 5 values\n";
    for(int i=0; i<=4; i++)
    {
        cin>>ram[i];
    }
    cout<<"\n data stored in array\n";
    for(int i=0; i<=4; i++)
    {
        cout<<ram[i]<<"\t";
    }

    //WAP to display only Even no in array
    int arr[5];
    for(int i=0; i<=4; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n data stored in arrat\n";
    for(int i=0; i<=4; i++)
    {
        if(arr[i]%2 ==0){
            cout<<i<<"\t";
        }
    }
   
}
