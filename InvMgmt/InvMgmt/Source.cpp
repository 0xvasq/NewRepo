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
			cout << "the item is: " << name[i] << endl;
			cout << "the item quantity is: " << quantity[i] << endl;
		}
	}
	else { cout << "try again" << endl; }
};





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
		}
	}

	while (a != 5);

	return 0;
};