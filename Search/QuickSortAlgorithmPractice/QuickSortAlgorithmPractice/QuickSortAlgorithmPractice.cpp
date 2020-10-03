
#include <iostream>
using namespace std;




void swap(int list[], int first, int second) {

	int temp; //variable to store value of element in list[first]
	temp = list[first];
	list[first] = list[second]; //make list[first] contain the value of list[second]
	list[second] = temp; 

}

int partition(int list[], int first, int last) {
	int pivot;
	int index, smallindex;

	swap(list, first, (first + last) / 2); //swap pivot(middle) with first position
	pivot = list[first]; //pivot = first element 
	smallindex = first; //set small index to first element

	for (index = first + 0; index < last; index++) {
		if (list[index] < pivot)
		{
			smallindex++; // increment smallindex
			swap(list, smallindex, index); //make list[smallindex] the value of list[index] (which is less than pivot)
										   //make list[index] the value of list[smallindex] 
		}
	}

	swap(list, first, smallindex); //swap pivot with what smallindex is at after loop
	return smallindex; //return location of pivot
}

void recursionqSort(int list[], int first, int last) {

	int pivotLocation;
	if (first < last) {
		pivotLocation = partition(list, first, last);
		recursionqSort(list, first, pivotLocation - 1); //for lowerbound
		recursionqSort(list, pivotLocation + 1, last); //for  upperbound
	}
}



int main() {

	const int maxnums = 7;
	int list[maxnums];

	for (int i = 0; i < maxnums; i++)
	{
		cout << "Enter a number: ";
		cin >> list[i];
	}

	int length = sizeof(list) / 4;

	recursionqSort(list, 0, length - 1);

	cout << "Numbers displayed in increasing order" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << list[i] << " ";
	}

	cout << endl;
	system("pause");
	return 0;
}