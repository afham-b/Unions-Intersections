#include "setops.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main () {
	list<int>::iterator i1;
	list<string>::iterator i2;

	// set1: 5 9 12 14 21 23 29 31 33 34 37
	list<int> set1;
	set1.push_back(5);
	set1.push_back(9);
	set1.push_back(12);
	set1.push_back(14);
	set1.push_back(21);
	set1.push_back(23);
	set1.push_back(29);
	set1.push_back(31);
	set1.push_back(33);
	set1.push_back(34);
	set1.push_back(37);

	// set2: 4 9 10 21 25 29 33 35 37
	list<int> set2;
	set2.push_back(4);
	set2.push_back(9);
	set2.push_back(10);
	set2.push_back(21);
	set2.push_back(25);
	set2.push_back(29);
	set2.push_back(33);
	set2.push_back(35);
	set2.push_back(37);

	// Intersection: 9 21 29 33 37
	list<int> intersect1 = list_intersect(set1, set2);
	for (i1 = intersect1.begin(); i1 != intersect1.end(); i1++)
		cout << ' ' << *i1;
	cout << '\n';

	// Union: 4 5 9 10 12 14 21 23 25 29 31 33 34 35 37
	list<int> union1 = list_union(set1, set2);
	for (i1 = union1.begin(); i1 != union1.end(); i1++)
		cout << ' ' << *i1;
	cout << '\n';

	// set3: bird dog giraffe zebra
	list<string> set3;
	set3.push_back("bird");
	set3.push_back("dog");
	set3.push_back("giraffe");
	set3.push_back("zebra");

	// set4: bird cat zebra 
	list<string> set4;
	set4.push_back("bird");
	set4.push_back("cat");
	set4.push_back("zebra");

	// Intersection: bird zebra
	list<string> intersect2 = list_intersect(set3, set4);
	for (i2 = intersect2.begin(); i2 != intersect2.end(); i2++)
		cout << ' ' << *i2;
	cout << '\n';

	// Union: bird cat dog giraffe zebra
	list<string> union2 = list_union(set3, set4);
	for (i2 = union2.begin(); i2 != union2.end(); i2++)
		cout << ' ' << *i2;
	cout << '\n';

#ifdef _MSC_VER
	system("pause");
#endif
	return 0;
}