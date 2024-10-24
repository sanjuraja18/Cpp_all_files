#include <iostream>
using namespace std;
//Passing array as a parameter in a functions

void arr(int a[], int s){
    for(int i=0; i<s; i++){
        cout<<a[i]<<"\t";
    }
}


int main(){
int x[]={2,3,5,4,6};
int s =sizeof(x)/sizeof(x[0]);
arr(x,s);
}