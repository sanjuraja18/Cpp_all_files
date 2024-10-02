#include <iostream>
using namespace std;

int main(){
//Q.1 W.A..P to display only unique value in an array?
int arr[5] , j=0;
cout<<"enter any number"<<"\n";
for(int i=0; i<5; i++)
{
    cin>>arr[i];
}

for(int i=0; i<5; i++)
{
    for(j=0;j<i;j++)
    {
        if(arr[i]==arr[j])
        {
            break;
        }
    }
    if(i==j)
    {
        cout<<arr[j]<<"\t";
    }
}

}
