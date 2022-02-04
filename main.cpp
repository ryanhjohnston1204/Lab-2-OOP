#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main() {
	Invoice e("0001", "woop", 10, 2);
	e.outputData();
	
	return 0;
}