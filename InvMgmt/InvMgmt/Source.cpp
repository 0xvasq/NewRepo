#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int m = 25;

class invItem {
protected:
	string name[m];
	int itemCode[m];
	int quantity[m];
	float price[m];
	int count;

public:
	void CNT(void);
	void getData(void);
	void showData(void);
	void removeItem(void);

};

void invItem::CNT(void) {
	count = 0;
};

void invItem::getData(void) {
	cout << "Please enter the item's name:";
	cin >> name[count];
	cout << "Please enter the Item's code";
	cin >> itemCode[count];
	cout << "Please enter item's quantity: ";
	cin >> quantity[count];
	cout << "Please enter price: ";
	cin >> price[count];
	count++;

};

void invItem::showData(void) {
	
	if (count > 0) {
		for (int i = 0; i < count; i++) {
			cout << "The item name is: " << name[i] << endl;
			cout << "The code name is: " << itemCode[i] << endl;
			cout << "The item quantity is: " << quantity[i] << endl;
			cout << "The item price is: " << price[i] << endl;
			cout << endl;
		}
	}
	else { cout << "try again" << endl; }
};

void invItem::removeItem(void) {
	int x;
	cout << "Please select item to remove: ";
	cin >> x;
	for (int i = 0; i < count; i++) {
		if (itemCode[i] == x) {
			for (int j = i; j < count - i; j++) {
				name[j] = name[j+1];
				quantity[j] = quantity[j+1];
				price[j] = price[j+1];
			}
			name[count - 1] = "";
			itemCode[count - 1] = 0;
			quantity[count - 1] = 0;
			price[count - 1] = 0;
			count--;
			cout << "The item with code " << x << " has been deleted." << endl;
			return;
		}
	}
	cout << "Item with item code " << x << " not found in inventory" << endl;
}



int main() {
	
	invItem s;
	s.CNT();
	int a;
	do {
		cout << "You will see a list of options, please act accordingly" << endl;
		cout << "Press 1: To display the current inventory." << endl;
		cout << "Press 2: To add an item." << endl;
		cout << "Press 3: To remove an item" << endl;


		cin >> a; 
		
		switch (a) {
		case 1: s.showData();
			break;
		case 2: s.getData();
			break;
		case 3: s.removeItem();
		}
	}

	while (a != 5);

	return 0;
};