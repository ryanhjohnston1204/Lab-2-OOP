#pragma once
#include <iostream>
#include <string>
using namespace std;

//This class will be used in a hardware store to represent 
//an invoice for an item sold at the store.
class Invoice {
private:
	string partNum, partDesc, partDescTwo;
	int quantity, pricePerItem;
public:
	Invoice(string p_num, string p_desc, int q_tty, int pp_item);

	//Accessor functions (get)
	string getNum(), getDesc(), getDescTwo();
	int getQuant(), getItem();

	//Mutator functions (set)
	void setNum(string p_num), setDesc(string p_desc),
		setQuant(int q_tty), setItem(int pp_item);

	//Member function
	//multiplies the quantity by the price per item, then it 
	//returns the amount as in int value
	int getInvoiceAmount(int q_tty, int pp_item);
	void initialInput();
	void inputData(), inputString(), inputInt();
	void outputData();
};
