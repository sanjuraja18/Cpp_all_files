#include <iostream>
using namespace std;
int main(){
    char input, choice;
    cout <<"enter any char"<<"\n";
    cin >> input;
    cout <<"select 'v' for volwel/consonant and 'g' for gender"<<"\n";
    cin>>choice;
    switch (choice)
    {
    case 'v':
    case 'V':
        if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
        {
            cout <<"it is vowel";
        }
        else{
            cout <<"it is consonant";
        }
        break;

        case 'G':
        case 'g':
        
         if (input == 'm' || input =='M')
            {
              cout <<"Male";
            }
            else if(input == 'f' || input == 'F' )
            {
                cout <<"Female";
            }
            break;
            
            
        
    
    default:
    cout <<"Invalide choice";
        break;
    }

}