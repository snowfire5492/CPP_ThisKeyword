/*
 * Person.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: snowf
 */
#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person() {
	age = 0;
	name = "undefined";
}

Person::Person(string name){
	age = 0;
	this->name = name;
}

Person::Person(string name, int age){
	this->age = age;
	this->name = name;

	cout << "Memory Location of object: " << this << endl;
}


string Person::toString(){

	stringstream ss;

	ss << "My name is " << name << " and I am " << age << " years 
old.";

	return ss.str();
}


