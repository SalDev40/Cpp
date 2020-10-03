
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "bookType.h"

using namespace std;

int main() {

	bookType book; // class object
	

	//calling member functions
	book.setshowtitle();
	book.checktitle();
	book.setshowcopies();
	book.updatecopies();
	book.setshowpublisher();
	book.checkpublisher();
	book.setshowISBN();
	book.updateISBN();
	book.setshowprice();
	book.updateprice();
	book.setshowauthor();
	book.checkauthor();





	system("pause");
	return 0;
}