#include <iostream>
using namespace std;

int main()
{
	int first;
	int x = 1;
	int y = 2;
	int z = 3;
	string name;
	cout<<"Welcome to Rich_Tech dailer\n"<<":";
	cin>>first;
	if(first == 170)
	{
		cout<<"Press 1 to send money\n"<<"Press 2 to redraw money\n"<<"Press 3 to check balance\n";
	}
	else { cout<<"invalid input";}
	
	cin>>first;
	if(first == 1)
	{
		cout<<"Enter name of reciever\n";
		cin>>name;
		cout<<"Enter amount\n";
		cin>>first;
		cout<<"Your are sending Ghc"<<first<<" to "<<name<<", press 1 to confirm transaction\n";
		cin>>first;
		cout<<"Transaction saccessful\n"<<"Thanks for using Rich_Tech dailer";
	}
	
	else {cout<<"invalid entry";}
	return 0;
		

}