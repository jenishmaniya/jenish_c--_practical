/*Array Of Object (Bank Management System) Requirements
(A/CNumber,A/CName,A/CType,A/CBranch,A/C Balance )Search Record By A/C Number.
*/
#include<iostream>
using namespace std;

class bank{
	private:
		int account;
		string name;
		string type;
		string branch;
		int balance;
	public:
	setdata(){
		cout << endl << endl << endl << "========================================================================================================================\t\t\t\t\t-: Bank Management System:-\n========================================================================================================================\n" << endl << endl;
		cout << "Enter your account number        :";
		cin >> this->account;
		cout << "Enter your name                  :";
		cin >> this->name;
		cout << "Enter the type of account        :";
		cin >> this->type;
		cout << "Enter the name of the branch     :";
		cin >> branch;
		cout << "Enter the balance                :";
		cin >> balance;
	}
	getdata(){
		cout << "========================================================================================================================\t\t\t\t\t-:YOUR ACCOUNT INFO ARE BELOW:-\n========================================================================================================================";
		cout << "YOUR ACCOUNT NO.                 :" << account << endl;
		cout << "YOUR NAME:                       :"<< name << endl;
		cout << "TYPE OF ACCOUNT                  :" << type << endl;
		cout << "NAME OF THE BRANCH               :" << branch << endl;
		cout << "YOUR BALANCE                     :" << balance << endl;
	}
	
};

int main (){
	bank b;
	b.setdata();
	b.getdata();
	
	return 0;
}

