#include <iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 5, 6};
    int s;
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        if(arr[i+1]-arr[i]>1){
            cout<<arr[i]+1;
            break;
        }
    }
    
}