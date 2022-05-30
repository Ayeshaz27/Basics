#include<iostream>
using namespace std;//LIBRARY
int main()
{
	int channel,accNo,customerCode,basicServiceConnection,additionalChannel;//declaration 
	float residentialCustomerBill,businessCustomerBill;//decimal values declarations
	char customerType,r,R,b,B;
	
	cout<<"enter account no.: ";
	cin>>accNo;//input account number
	cout<<"enter customer code: ";
	cin>>customerCode;//input customer code
	cout<<"which type of customer you are: ";
	cin>>customerType;//input 'r' or 'R' for residential and 'b' or 'B' for business customer
	
	if((customerType=='r')|(customerType=='R'))
	{
		cout<<"enter no. of premium channels you use: ";
		cin>>channel;//input no. of channels
		residentialCustomerBill=(channel*7.50)+20.0+4.5;//bill processing fee(4.5) and basic service fee(20) is added
		cout<<"Account no: "<<accNo<<" have total bill : "<<residentialCustomerBill<<endl;
	}
	else if((customerType=='b')|(customerType=='B'))
	{
		cout<<"enter no. of premium channels you use: ";
		cin>>channel;//input no. of channels
		cout<<"enter no. of basic service connections: ";
		cin>>basicServiceConnection;//input servive connection no.
		if(basicServiceConnection<=10&&basicServiceConnection>0)//for no. between be between 0 to 10 
		{
			businessCustomerBill=(channel*50)+15.0+(basicServiceConnection*75);
			cout<<"Account no: "<<accNo<<" have total bill : "<<businessCustomerBill<<endl;
		}
		else if(basicServiceConnection>10)//for no. of service connection greater than 10 
		{
			additionalChannel=basicServiceConnection-10;//calculations for no. greater thn 10
			businessCustomerBill=(channel*50)+15.0+((10*75)+(additionalChannel*5));
			cout<<"Account no: "<<accNo<<" have total bill : "<<businessCustomerBill<<endl;
		}
		
		
	}
    else
	cout<<"Error";//if user enter any other than 'b' ,'B' ,'r' and 'R' error will occur
	
	
	
}
