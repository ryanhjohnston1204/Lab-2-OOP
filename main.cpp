#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main() {
	BankAccount obj("Ryan", "Johnston", 10000, 0.02);
	obj.runProgram();

	return 0;
}