#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

class bookType
{
public:

	void setshowtitle();
	void checktitle();
	void setshowcopies();
	int updatecopies();
	void setshowpublisher();
	void checkpublisher();
	void setshowISBN();
	int updateISBN();
	void setshowprice();
	int updateprice();
	void setshowauthor();
	void checkauthor();


private:

	string tit;
	string publ;
	string aut;
	int cop;
	double pri;
	int ISbn;
	int numauthors;
	
};

