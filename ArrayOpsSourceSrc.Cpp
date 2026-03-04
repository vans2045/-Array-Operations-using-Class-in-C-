#include"ArrayOps.h"

//constructor and deconstructor
ArrayOps::ArrayOps(int n) {
	size = n;
	arr = new int[size];
};
ArrayOps::~ArrayOps() {
	delete[] arr;
}

//Accept & display functions
void ArrayOps::accept() {
	cout << "enter your elements : " << size <<"\n Element : " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void ArrayOps::display() {
	cout << "Array Elements : " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

//Max & Min elemnts
void ArrayOps::findMinMax() {
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
	cout << "\n The max number in the array is : " << max << endl;
	cout << "\n The min number in the array is :" << min << endl;
}

//Sum & avg
void ArrayOps::calculateSumAvg() {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = +arr[i];
	}
	float avg = (float)sum / size;
	cout << "The sum of elements : " << sum << endl;
	cout << "Average of elements :" << avg << endl;
}

// finding an element
void ArrayOps::searchNumber(int numb) {
	bool logic = false;
	for (int i = 0; i < size; i++) {
		if (numb == arr[i]) {
			cout << "the Number:" << numb << "found at position :" << i + 1 << endl;
			logic = true;
			break;
		}
	}
	if (!logic) {
		cout << "number Not found" << endl;
	}
}
