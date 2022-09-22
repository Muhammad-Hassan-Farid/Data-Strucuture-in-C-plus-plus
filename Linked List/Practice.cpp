#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main()
{
	p:
	system("cls");
	int a,b,ch;
	float x,y,z;
	char c;
	
	cout<<" \t\t\t Advance Calculator "<<endl;
	cout<<"\n\n Press 1 for Addition. ";
	cout<<"\n Press 2 for Subtraction.";
	cout<<"\n Press 3 for Multiplication.";
	cout<<"\n Press 4 for Division.";
	cout<<"\n Press 5 for Modulus.";
	cout<<"\n Press 6 for Square Root.";
	cout<<"\n Press 7 for Power.";
	cout<<"\n Press 8 for sin,cos and tan";
	cout<<"\n Press 9 for Log.";
	cout<<"\n Press 10 for Exit.";
	
	cout<<"\n\n\n Enter your Choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
				cout<<"\n\n\t";
				cout<<"\n Enter the values: ";
				cin>>x>>c;
				while(c=='+')
				{
					cin>>y;
					x+=y; // x=x+y
					cin>>c;
				}
			cout<<"\n\n\t Your Answere is: "<<x;
			break;
			}
		
		case 2: 
		   {
			    cout<<"\n\n\t";
			    cout<<"\n Enter the values: ";
			    cin>>x>>c;
			    while(c=='-')
			    {
			    cin>>y;
			    x-=y; // x=x-y
		        }
			    cout<<"Your Answere is: "<<x;
			    break;
		   }   
		
		case 3:
			{
				cout<<"\n\n\t";
				cout<<"\n Enter the values: ";
				cin>>x>>c;
				while(c=='*')
				{
					cin>>y;
					x*=y; // x=x*y
					cin>>c;
				}
			cout<<"\n\n\t Your Answere is: "<<x;
			break;	
				
			}
		case 4:
			{
				
				cout<<"\n\n\t";
				cout<<"\n Enter the values: ";
				cin>>x>>c;
				while(c=='/')
				{
					cin>>y;
					x/=y; // x=x/y
					cin>>c;
				}
			cout<<"\n\n\t Your Answere is: "<<x;
			break;	
				
			}
		case 5:
			{
				/* As Modulus do not work on floating values so we will
				use integers values as we declare a and b */
				cout<<"\n\n\t";
				cout<<"\n Enter the values: ";
				cin>>a>>c;          
				while(c=='%')
				{
					cin>>b;
					a%=b; // a=a+b
					cin>>c;
				}
			cout<<"\n\n\t Your Answere is: "<<a;
			break;	
				
			}
		case 6:
			{
				cout<<"\n\n\t";
				cout<<"Enter the value:";
				cin>>x;
				cout<<"\tThe Answere is: "<<sqrt(x);
			    break;
			}
		case 7:
		    {
		    	cout<<"\n\nEnter the value:";
		    	cin>>x;
		    	cout<<"Enter the Power:";
		    	cin>>y;
		    	cout<<"\n\nThe Answere is :"<<pow(x,y);
		    	break;
		    	
			}
		case 8:
		    {
		    	system("cls");
		    	cout<<"\n Press 1 for Cos.";
		    	cout<<"\n Press 2 for Sin.";
		    	cout<<"\n Press 3 for Tan.";
		    	cout<<"\n\n";
		    	cout<<"Enter your choice:";
		    	cin>>a;
		    	if(a==1)
		    	{ 
		    	    cout<<"\n\nEnter the value:";
		    	    cin>>z;
 		    		cout<<"\n\nThe Answere is:"<<cos(z);
				}
				else if (a==2)
				{
					cout<<"\n\nEnter the value:";
		    	    cin>>z;
 		    		cout<<"\n\nThe Answere is:"<<sin(z);
				}
		    	else if(a==3)
		    	{
		    		cout<<"\n\nEnter the value:";
		    	    cin>>z;
 		    		cout<<"\n\nYour Answere is:"<<tan(z);
				}
				else 
				{
					cout<<"Your Entered a wrong(!) Number.... Please Try Again.";
				}
				break;
		    	
				}
		case 9:
		{
			cout<<"\n Enter the Value:";
			cin>>z;
			cout<<"The Answere is: "<<log(z);
			break;
			}	
		case 10:
			{
				exit(0);
			}
			
		default :
			{
				cout<<"You Entered a Wrong(!) Number ..... Please Try Again";
			}
			
	}
	getch();
	goto p;
	return 0;
}
