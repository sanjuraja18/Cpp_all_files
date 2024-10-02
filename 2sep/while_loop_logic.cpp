
/* 
LAST_SUNDAY_WEAKEND

My weakness went very well because I and my brother planned to watch a web series 
and we watched all the parts of the web series. The story of the web series was very interesting 
because in this web series there was
 information about the mission of Indian Row. And I got all the information which I did not know.
*/

/*  

I and my friend planned to make a website in which all the information is mentioned. 
So that the user can use that website for his work and if the user needs someone else's website 
then he will get the link right away which will save his time and his work will also be done quickly. That's it
*/
//WAP to count a number of digit
#include <iostream>
using namespace std;
int main(){
    int num, count, sum =0;
    cout <<"Enter any number"<<"\n";
    cin >>num;

    while (num > 0)
    {
        sum = sum + num%10;
        count++;
        num = num/10;
    }
    cout<<count;
    
}