#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	string firstName, lastName;
	double balance, interest;
public:
	BankAccount(string first, string last, double bal, double intr);
	
	string getFirst(), getLast();
	double getBalance(), getInterest();

	void setFirst(string first), setLast(string last);
	void setBalance(double bal), setInterest(double intr);

	void start(), input(), runProgram();
};