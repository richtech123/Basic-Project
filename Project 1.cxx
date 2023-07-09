 #include <iostream>
using namespace std;

int main()
{
	int x;
	int first,second,area,volume;
	double y;
	y = 3.14;
	cout<<"Hello there,I'm Rich_Tech Calculator 0.01"<<endl;
	cout<<"Press 1 to find area of circle"<<endl;
	cout<<"Press 2 to find volume of circle\n";
	cin>>x;
	if(x==1)
		{
		cout<<"Enter the radius of the circle"<<endl<<"radius=";
	cin>>first;
	cout<<"Area of circle="<<(first * first) * y<<endl<<"Thanks for using Rich_Tech calculator 0.01";
	}
		else if(x==2)
	{
		cout<<"Enter the radius"<<endl<<"radius=";
		cin>>first;
		cout<<"Enter height"<<endl<<"height=";
		cin>>second;
		cout<<"Volume of cicle="<<((first * first) * y) * second<<endl<<"Thanks for using Rich_Tech calculator 0.01";
	}
	
	else
	{
		cout<<"Invalid entry";
	}
	return 0;
}

//Thi code was writen by Appau-Siaw Richmond Yeboah.(Rich_Tech World)
//Thi code was writen by Appau-Siaw Richmond Yeboah.(Rich_Tech World)