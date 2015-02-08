#include <iostream>
#include "Person.h"
using namespace std;

int main(){

	Person eric("eric", 29);
	Person jenn("Jenn", 29);

	cout << eric.toString() << " :: Memory Location is at " << &eric 
<< endl;

	cout << jenn.toString() << " :: Memory Location is at " << &jenn 
<< endl;


	return 0;
}

