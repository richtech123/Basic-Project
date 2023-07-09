#include <iostream>
using namespace std;

int main()
{
	int first,second,sum,difference,product;
	float divide;
	cout<<"Enter two numbers"<<"\n";
	cin>>first>>second;
	
	sum = first + second;
	difference = first - second;
	product = first * second;
	divide = first /(float) second;
	
	cout<<"Sum ="<<sum<<"\n";
	cout<<"Difference ="<<difference<<"\n";
	cout<<"Product ="<<product<<"\n";
	cout<<"Divide="<<divide<<"\n";
	return 0;
}

//This code was writen by Appau-Siaw Richmond Yeboah