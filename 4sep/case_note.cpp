#include<iostream>
using namespace std;
int main(){
	int amount ;
	cout<<"enter the amount   ";
	cin>>amount;
	if(amount<=100000){
		cout<<"2000 notes are "<<amount/2000;
		amount=amount%100000;
			cout<<endl;
	}if(amount<=50000){
		cout<<"500 notes are "<<amount/500;
		amount =amount%50000;
			cout<<endl;
	}if(amount<=20000){
		cout<<"200 notes are "<<amount/200;
		amount=amount%20000;
		cout<<endl;
		}if(amount<=10000){
		cout<<"100 notes are "<<amount/100;
		amount=amount%10000;
			cout<<endl;
	}if(amount<5000){
		cout<<"50 notes are "<<amount/50;
		amount=amount%5000;
			cout<<endl;
	}if(amount<2000){
		cout<<"20 notes are "<<amount/20;
		amount=amount%2000;
			cout<<endl;
	}if(amount<1000){
		cout<<"10 notes are "<<amount/10;
		amount=amount%1000;
			cout<<endl;
	}if(amount<500){
		cout<<"5 notes are "<<amount/5;
		amount=amount%500;
			cout<<endl;
	}if(amount<10){
		cout<<"2 notes are "<<amount/2;
		amount=amount%10;
			cout<<endl;
	}if(amount<5){
		cout<<"1 notes are "<<amount/1;
		amount=amount%5;
		cout<<endl;
	}
	return 0;
}