#include <iostream>
using namespace std;
int main(){
    // even indexing print value
    int arr[5];
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    cout <<"\n reverse data enven number \n";
    for(int i=(0+2); i<=4; i=i+2){
        cout <<arr[i]<<"\t";
    }
    // odd indexing print value

    int odd[5];
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    cout <<"\n reverse data enven number \n";
    for(int i=(0+2); i<=4; i=i+2){
        if(i%2!=0){
        cout <<odd[i]<<"\t";
        }
    }
}