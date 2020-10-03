#pragma once
#include <iostream>
#include <string>
using namespace std;

class _13Practice
{
public:
	
	//NON MEMBER FUNCTIONS (FRIEND FUNCTIONS)

	friend _13Practice operator/(const _13Practice&, const _13Practice&);
	//Non-Member operator overloader
	//Return value of class object

	friend  bool operator==(const _13Practice&, const _13Practice&);
	//Non-member function
	//return value of bool

	friend ostream& operator<<(ostream&, const _13Practice&);
	//Overload for operator << must return ostream& and be a non-memberfunction

	friend istream& operator>>(istream&, const _13Practice&);
	//Overload for operator  >> must return istream& and be a non-memberfunction

	friend _13Practice operator++(_13Practice&);
	//Pre-increment operator ++ for friend function, takes one parameter

	friend _13Practice operator--(_13Practice&,int);
	//Post-increment operator ++ for friend function, takes two parameters

	

	//MEMBER FUNCTIONS

	_13Practice operator+(const _13Practice& ) const;
	//operator function going to return a value of the class object
	//overload the + operator
	//return an object

	_13Practice operator-(const _13Practice& ) const;
	//operator function going to return a value of the class object
	//overload the - operator
	//return an object

	int operator*(const _13Practice&) const;
	//operator function going to return a value of the class object
	//overload the * operator
	//return an int //can return an object if you choose to just change return type

	_13Practice operator--(); 
	//Pre-increment of member function takes no parameters

	_13Practice operator++(int);
	//Post-increment of member function takes one parameter

	//Constructors


	_13Practice(int);
	//parameterized constructor

	_13Practice();
	//default constructor


private:

	int num;
	//made public so it can be accessed outside of class definitions


};

