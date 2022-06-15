#include<iostream>
#include<string.h>
using namespace std;
class bank{
	char name[50];
	long int accountnumber;
	float balance;
	public:
		bank()
		{
			balance=0;
		}
		void signup()
		{
			cout<<"enter your name:"<<endl;
			cin>>name;
			cout<<"enter the accountnumber:"<<endl;
			cin>>accountnumber;

        }
		void deposit(int b)
		{
		    if(b==accountnumber)
            {
			int a;
			cout<<"enter the amount to be deposit:"<<endl;
			cin>>a;;
			balance=balance+a;
			cout<<"your money is deposited:"<<endl;

            }
		}

		void withdrawn(int b)
		{
		    if(b==accountnumber)
            {
			int b;
			cout<<"please enter the amount of money to be withdraw:"<<endl;
			cin>>b;
			if(b<balance)
			{
				balance=balance-b;
				cout<<"Current Balance:"<<balance<<endl;

			}
			else{
				cout<<"you donot have insufficient balance:"<<endl;
			}
            }
		}
		void displayinfo(int b)
		{
		    if(b==accountnumber)
            {
			cout<<"Name of account holder:"<<name<<endl;
			cout<<"Account number:"<<accountnumber<<endl;
			cout<<"your balance :"<<balance<<endl;
            }
		}
};

int main()
{
	bank a[5];
	int choice;
	while(1)
	{
		int t;
		system("cls");
		cout<<"---------Welcome To The Everest Bank------------"<<endl<<endl;
		cout<<"1.open your account"<<endl;
		cout<<"2.Deposit your money"<<endl;
		cout<<"3.Withdraw your money"<<endl;
		cout<<"4.Display account information"<<endl;
		cout<<"5.exit"<<endl;
		cout<<"-Enter your choice:"<<endl;
		cin>>choice;
		switch(choice)
	{
		case 1:
			for(int i=0;i<5;i++)
			{
				a[i].signup();
			}

				break;
			case 2:
			    long int b;
			    cout<<"enter your account number:"<<endl;
		        cin>>b;
			    for(int i=0;i<5;i++)
                {
                   a[i].deposit(b);
                }
			
				break;
			case 3:
			    long int c;
		        cout<<"enter your account number:"<<endl;
		        cin>>c;
			    for(int i=0;i<5;i++)
                {
                   a[i].withdrawn(c);
                }
				
				break;
			case 4:
			    long int d;
		        cout<<"enter your account number:"<<endl;
		        cin>>d;
			    for(int i=0;i<5;i++)
                {
                   a[i].displayinfo(d);
                }
			    break;
			case 5:
				exit(0);
				break;
			default:
			 cout<<"please enter the valid choice"<<endl;
			 break;
		}

	}
	return 0;
}