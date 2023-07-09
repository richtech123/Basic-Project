#include <iostream>
using namespace std;

int main()
{
	string firstName;
	string secondName;
	string schllName;
    string schllNamea;	
	int indexNum;
	int code;
	int x;
	int year;
	cout<<"WELCOME TO BECE CHECKER\n"<<"Enter the ten digit code on the checker card to allow access\n";
	cin>>code;
	cout<<"Enter your first name\n";
	cin>>firstName;
	cout<<"Enter your second name\n";
	cin>>secondName;
	cout<<"Enter your index number \n";
	cin>>indexNum;
	cout<<"Enter Year\n";
	cin>>year;
	cout<<"Enter School Name\n";
	cin>>schllName>>schllNamea;
	cout<<"Review And Confirm Informations\n";
	cout<<"Name: "<<firstName<< secondName<<endl;
	cout<<"Index Number: "<<indexNum<<endl;
	cout<<"School: "<<schllName<< schllNamea<<endl;
	cout<<"Year: "<<year;
	cout<<"\n";
	cout<<"Press 1 to confirm details\n";
	cin>>x;
	cout<<"\n";
	cout<<"                 RESULTS";
	cout<<"\n";
	
	cout<<"Name: "<<firstName<< secondName<<"          Year: "<<year<<endl;
	cout<<"School:"<<schllName<< schllNamea<<"    Index Number: "<<indexNum;
	cout<<"\n";
	
	cout<<"|English Language   |1  |Pass  |"<<endl;
	cout<<"|Social Studies     |1  |Pass  |"<<endl;
	cout<<"|Integrated Science |1  |Pass  |"<<endl;
	cout<<"|Mathematics        |1  |Pass  |"<<endl;
	cout<<"|I.C.T              |1  |Pass  |"<<endl;
	cout<<"|B.D.T              |1  |Pass  |"<<endl;
	cout<<"|R.M.E              |1  |Pass  |"<<endl;
	cout<<"|French             |1  |Pass  |"<<endl;
	cout<<"|Twi                |1  |Pass  |"<<endl;
	
	return 0;
}
	