#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

//Initializer of values, if quantity or item price is 0, values will be 0
Invoice::Invoice(string p_num, string p_desc, int q_tty, int pp_item) {
	partNum = p_num;
	partDesc = p_desc;
	quantity = q_tty;
	pricePerItem = pp_item;
	
	if (q_tty < 0) {
		q_tty = 0;
	}

	if (pp_item < 0) {
		pp_item = 0;
	}
}

//Retrieves private data members of class Invoice
string Invoice::getNum() { return partNum; }
string Invoice::getDesc() { return partDesc; }
int Invoice::getQuant() { return quantity; }
int Invoice::getItem() { return pricePerItem; }

//Sets and/or manipulates private data members
void Invoice::setNum(string p_num) { 
	partNum = p_num; 
}
void Invoice::setDesc(string p_desc) { 
	partDesc = p_desc; 
}
void Invoice::setQuant(int q_tty) { 
	quantity = q_tty;

	if (q_tty < 0) {
		q_tty = 0;
	}
}
void Invoice::setItem(int pp_item) { 
	pricePerItem = pp_item;

	if (pp_item < 0) {
		pp_item = 0;
	}
}

//quantity multiplied by price per item, returns product
int Invoice::getInvoiceAmount(int q_tty, int pp_item) {
	return q_tty * pp_item;
}


void Invoice::initialInput() {
	cout << "The initial part number is " << getNum() << endl
		<< "The initial part description is " << getDesc() << endl
		<< "The initial quantity of requested part is " << getQuant() << endl
		<< "The initial price of requested part is " << getItem() << endl
		<< "The current invoice cost is " << getInvoiceAmount(getQuant(), getItem()) << endl
		<< " " << endl;
}

void Invoice::inputData() {
	initialInput();
	inputString();
	inputInt();
}

void Invoice::inputString() {
	cout << "Enter a new part number: ";
	cin >> partNum;
	cout << "Enter a new part description: ";
	cin >> partDesc;
}

void Invoice::inputInt() {
	cout << "Enter the new desired quantity: ";
	cin >> quantity;
	cout << "Enter the new price: ";
	cin >> pricePerItem;
}

void Invoice::outputData() {
	inputData();
	setNum(partNum), setDesc(partDesc), setQuant(quantity), setItem(pricePerItem);
	cout << "The new part number " << getNum() << endl
		<< "The new part description " << getDesc() << endl
		<< "The new quantity of requested part " << getQuant() << endl
		<< "The new price of requested part " << getItem() << endl
		<< "The new invoice cost " << getInvoiceAmount(getQuant(), getItem()) << endl;
}