#include <iostream>
using namespace std;
int main(){
    int number1 = 0;
    int number2 = 0;

    cout <<"Enter the first number"<<"\n";
    cin >>number1;
    cout <<"Enter the scound number" <<"\n";
    cin >> number2;

   
    cout <<"press 1 for add"<<"\n"
         <<"press 2 for sub"<<"\n"
         <<"press 3 for mult"<<"\n"
         <<"press 4 for div"<<"\n";

          int perform;
    cin >> perform;

    switch (perform)
    {
    case 1:
    {
        cout <<"add = "<<number1 + number2;
        break;
    } 
    case 2:
    {
        cout <<"sub = "<<number1 - number2;
        break;
    }
    case 3:
    {
        cout <<"mult = "<<number1 * number2;
        break;
    }
    case 4:
    {
        cout <<"div = "<<number1 / number2;
        break;
    }
    default:
    {
        cout <<"invelid";
        break;
    }
    }
    return 0;

}