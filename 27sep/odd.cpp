#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=4; i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<"\t";
        }
    }
}