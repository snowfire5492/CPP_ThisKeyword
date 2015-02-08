/*
 * Person.h
 *
 *  Created on: Apr 19, 2019
 *      Author: snowf
 */

#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>
using namespace std;


class Person {

private:
	string name;
	int age;
public:
	Person();
	Person(string name);
	Person(string name, int age);
	string toString();
};

#endif /* PERSON_H_ */

