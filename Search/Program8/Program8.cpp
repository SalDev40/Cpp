
////(Recursive sequential search) The sequential search algorithm given in
//this chapter is nonrecursive.Write and implement a recursive version of the
//sequential search algorithm.
//2. (Recursive binary search) The binary search algorithm given in this
//chapter is nonrecursive.Write and implement a recursive version of the
//binary search algorithm.Also, write a program to test your algorithm.


#include <iostream>
using namespace std;



int seqSearch(const int list[], int length, const int &item)
{
	//base case
	if (list[length - 1] == item || length == 0) {
		return length - 1;
	}
	else {
		//decrement length by one each recursive call until item is found or length is 0
		seqSearch(list, --length, item);
	}

}

int binarySearch(const int list[], int length, const int & item)
{
	//static so they update there positions through each recursion insteead of resetting
	static int first = 0; 
	static int last = length - 1;
	int mid = (first + last) / 2;

	//if found return location , if length <= 0 return -1
	if (list[mid] == item) {
		return mid;
	}
	else if (length <= 0) {
		return -1;
	}
	else if (list[mid] > item) {
		last = mid - 1; //move last to one below current mid
		binarySearch(list, (length / 2), item);
	}
	else {
		first = mid + 1; //move first to one above current mid
		binarySearch(list, (length / 2), item);
	}

} //end binarySearch

int main() {

	int bin_mark;
	int seq_mark;
	int length;

	int list[5] = { 1,2,3,4,5 };
	length = sizeof(list) / sizeof(list[0]); //find length

	bin_mark = binarySearch(list, length, 5); //calling function

	cout << "Binary Search" << endl;
	//if called function returned -1 item wasn't found
	if (bin_mark == -1) {
		cout << "Item not found" << endl;
	}
	else {
		cout << "Item found at position: " << bin_mark + 1 << endl;
	}
	

	cout << "\n\nSequential Search" << endl;
	seq_mark = seqSearch(list, length, 5); //calling function

	//if called function returned -1 item wasn't found
	if (seq_mark == -1) {
		cout << "Item not found" << endl;
	}
	else {
		cout << "Item found at position: " << seq_mark + 1 << endl;
	}




	system("pause");
	return 0;
}



