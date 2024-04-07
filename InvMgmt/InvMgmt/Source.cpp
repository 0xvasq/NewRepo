#include <iostream>
#include <vector>

using namespace std;


class invItem {
protected:
	string name;
	int quantity;
	float price; 

public: 
	invItem() {
		name = "N/a";
		quantity = 0;
		price = 0.0;
	};

	invItem(string _name, int _quantity, float _price);
	void showInv(void);

};

invItem::invItem(string _name, int _quantity, float _price) {
	name = _name;
	quantity = _quantity;
	price = _price;

};

void invItem::showInv() {

	cout << "The name: " << name << endl;
	cout << "The quantity: " << quantity << endl;
	cout << "The price: " << price << endl;
}

int main() {

	string _name;
	int _quantity;
	float _price;


	cout << "please enter name" << endl;
	cin >> _name;

	cout << "please enter the quantity" << endl;
	cin >> _quantity;

	cout << "Please enter the price" << endl;
	cin >> _price;

	invItem S(_name, _quantity, _price);
	S.showInv();

	return 0;
};