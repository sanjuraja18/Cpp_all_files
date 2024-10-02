/*

* * * *
*     *
*     * 
* * * *      

*/
#include <iostream>
using namespace std;
int main(){
    for(int c=1; c<=4; c++)
    {
        for(int r=1; r<=4; r++){
        if(c==1 || c==4  || r==1 || r==4){
        
            cout <<"* ";
        }
      
        else
        {
            cout<<"  ";
        }
        
        }

        cout<<"\n";
    }
}