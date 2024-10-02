/*
WAP to accept demonstrate which case with the help of given program.
if user enter 'R' then display aria of rectangle if user enter 'S' then display aria of square if user enter 'C'
then display aria of circle Otherwise invelid choice
*/
#include <iostream>
using namespace std;
int main(){
    char  choice;
    cout <<"Enter charector 'R' for aria of rectangle 'S' for aria of square 'C' for aria of circle";
    cin>>choice;
    switch (choice){
        case 'R':
        case 'r':
        cout<<"aria of rectangle";
        break;

        case 'S':
        case 's':
        cout<<"aria of square";
        break;

        case 'C':
        case 'c':
        cout <<"aria of circle";
        break;

       
        
        default:
            cout<<"Invelid choice";
            break;
        

    }
    return 0;
    
}