#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
struct Account{
	string name;
	double balance;
};
void createaccount(unordered_map<int,Account>& accounts){
int  accnum;
string name;
double initialdeposit;

cout<<"Enter account number";
cin>>accnum;
 if(accounts.find(accnum)!=accounts.end()){
 	cout<<"Account already exists \n";
 	return;

 }
 cout<<"Enter Account holder name :";
 cin.ignore();
 getline(cin, name);

cout<<"Enter initial deposit:";
cin>> initialdeposit;

accounts[accnum]={name,initialdeposit};
cout<<"Account created sucessfullyyy:\n";


}

void deposit(unordered_map<int, Account>& accounts){
	
	int accnum;
	double amount;
	cout<<"Enter account number: ";
	cin>>accnum;
	if(accounts.find(accnum)==accounts.end()){
		cout<<"Account not found! \n";
		return;
	}
	cout<<"Enter Deposit amount: ";
	cin>>amount;
	accounts[accnum].balance +=amount;
	cout<<"Amount Deposited sucessfully! \n";
cout<<"Total Amount is "<<accounts[accnum].balance<<"\n";	
}
void withdraw(unordered_map<int, Account>& accounts) {
    int accnum;
    double amount;

    cout << "Enter account number: ";
    cin >> accnum;

    if (accounts.find(accnum) == accounts.end()) {
        cout << "Account not found!\n";
        return;
    }

    cout << "Enter withdraw amount: ";
    cin >> amount;

    if (accounts[accnum].balance < amount) {
        cout << "Insufficient balance!\n";
        return;
    }

    accounts[accnum].balance -= amount;
    cout << "Amount withdrawn successfully! \n";
    	cout<<"Remaining Balance:"<<accounts[accnum].balance<<"\n";
}

void cheakbalance(const unordered_map<int,Account>& accounts){
	int accnum;
	cout<<"Enter account number:";
	cin>>accnum;
	if(accounts.find(accnum)==accounts.end()){
		cout<<"Account not found: \n";
		return;
	}
	const Account& account =accounts.at(accnum);
	cout<<"Account Holder:"<<account.name<<"\n";
	cout<<"Balance:"<<account.balance<<"\n";
	
}
void deleteaccount(unordered_map<int,Account>& accounts){
	int accnum;
	cout<<"Enter account number to delete:";
	cin>>accnum;
	if(accounts.find(accnum) == accounts.end()){
		cout<<"Account not found:";
		return;
	}
	accounts.erase(accnum);
	cout<<"Account Deleted sucessfully:\n";
}
void changename(unordered_map<int,Account>& accounts){
	int accnum;
	string newname;
	cout<<"Enter account number:";
	cin>>accnum;
	if(accounts.find(accnum)==accounts.end()){
		cout<<"Account not found:\n";
		return;
	}
	cout<<"Enter new holder name:";
	cin.ignore();
	getline(cin,newname);
	
	accounts[accnum].name=newname;
	cout<<"Account holder name updated sucessfully\n";
	
}
void viewaccount(const unordered_map<int,Account>& account){
	cout<<"\nAll Accounts:";
	for(const auto& entry : account){
		cout<<"Account Number ;"<<entry.first
		<<"|Account Holder :"<<entry.second.name
		<<"|Balance:"<<entry.second.balance<<"\n";
	}
}
int main(){
unordered_map<int,Account> accounts;
int choice;
cout<<"Welcome\n";
do{
	cout<<"\n.    Menu    :\n";
	cout<<"\n1.Create Account:\n";
	cout<<"2.Deposite:\n";
	cout<<"3.Withdraw:\n";
	cout<<"4.Cheak Balance: \n";
	cout<<"5.Delete Account\n";
	cout<<"6.Change Holder Name:\n";
	cout<<"7.View All Account:\n";
	cout<<"8.Exist\n";
	cout<<"Enter your choice:";
	cin>>choice;
	switch(choice){
		case 1:
			createaccount(accounts);
			break;
			case 2:
				deposit(accounts);
				break;
				case 3:
					withdraw(accounts);
					break;
					case 4:
						cheakbalance(accounts);
						break;
						case 5:
							deleteaccount(accounts);
							break;
							case 6:
								changename(accounts);
								break;
								case 7:
									viewaccount(accounts);
									break;
									
							default:
								cout<<"Invalid Choice!Plz try again \n";
								
					
	}
	
}	
while(choice!=8);
return 0;
}