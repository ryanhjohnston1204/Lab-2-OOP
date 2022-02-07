#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

BankAccount::BankAccount(string first, string last, double bal, double intr) {
	firstName = first;
	lastName = last;
	balance = bal;
	interest = intr;

}

string BankAccount::getFirst() {
	return firstName;
}

string BankAccount::getLast() {
	return lastName;
}

double BankAccount::getBalance() {
	return balance;
}

double BankAccount::getInterest() {
	return interest;
}

void BankAccount::setFirst(string first) {
	firstName = first;
}

void BankAccount::setLast(string last) {
	lastName = last;
}

void BankAccount::setBalance(double bal) {
	balance = bal;
}

void BankAccount::setInterest(double intr) {
	interest = intr;
}

void BankAccount::start() {
	cout << "There are the initialized values with the constructor." << endl
		<< "The name on the account is " << firstName << " " << lastName << endl
		<< "The balance on the account is " << balance << " and interest is " << interest << endl;
}

void BankAccount::input() {
	cout << "What is the name on your account" << endl;
	cin >> firstName >> lastName;
	cout << "What is the balance on the account" << endl;
	cin >> balance;
	cout << "What is the interest rate on the account" << endl;
	cin >> interest;

}

void BankAccount::runProgram() {
	start();
	input();
	cout << "The name of the account is " << firstName << " " << lastName << endl;
	cout << "The balance on the account is " << balance << " and the interset is " << interest << endl;
}
