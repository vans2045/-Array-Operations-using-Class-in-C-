#include"ArrayOps.h"

int main() {
	int n;
	int choice;
	int numb;
	cout << "Enter the size of array : " << endl;
	cin >> n;

	ArrayOps object(n);
	object.accept();

	do {
		cout << "----------MENU-----------" << endl;
		cout << "1.Display elements:" << endl;
		cout << "2.Find Minimum and Maximum Number in array : " << endl;
		cout << "3.Calculate sum and avrage of the numbers : " << endl;
		cout << "4.Search the array for any number : " << endl;
		cout << "5.Exit" << endl;
		cout << "Enter your choice :" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			object.display();
			break;
		case 2:
			object.findMinMax();
			break;
		case 3:
			object.calculateSumAvg();
		case 4:
			cout << "enter the elements you want to search :" << endl;
			cin >> numb;
			object.searchNumber(numb);
			break;
		case 5:
			cout << " _______Exiting the program _____" << endl;
			break;
		default:
			cout << "invalid choice";

		}
	} while (choice != 5);
	return 0;
}
