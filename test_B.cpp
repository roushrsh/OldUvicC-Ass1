#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "string_set.h"

using namespace std;

int main() {
	string_set string_set0;
	int n;

	char a[10];
	strcpy(a,"eddd");
	cout << "adding \"" << a << "\"" << endl;
	string_set0.add(a);

	char x[10];
	strcpy(x,"e");
	cout << "adding \"" << x << "\"" << endl;
	string_set0.add(x);

	char R[10];
	strcpy(R,"g");
	cout << "adding \"" << R << "\"" << endl;
	string_set0.add(R);

	char t[10];
	strcpy(t,"d");
	cout << "adding \"" << t << "\"" << endl;
	string_set0.add(t);

	char v[10];
	strcpy(v,"dededsse");
	cout << "adding \"" << v << "\"" << endl;
	string_set0.add(v);

	char c[10];
	strcpy(c,"ed");
	cout << "adding \"" << c << "\"" << endl;
	string_set0.add(c);

	char b[10];
	strcpy(b,"edd");
	cout << "adding \"" << b << "\"" << endl;
	string_set0.add(b);


	char y[10];
	strcpy(y,"f");
	cout << "adding \"" << y << "\"" << endl;
	string_set0.add(y);

	char z[10];
	strcpy(z,"df");
	cout << "adding \"" << z << "\"" << endl;
	string_set0.add(z);


	cout << "\nremove/check \"" << z << "\"" << endl;
	string_set0.remove(z);
	n = string_set0.contains(z);
	cout << "\tcontains(\"" << z << "\") returns " << n << endl;

	cout << "\nremove/check \"" << y << "\"" << endl;
	string_set0.remove(y);
	n = string_set0.contains(y);
	cout << "\tcontains(\"" << y << "\") returns " << n << endl;

	cout << "\nremove/check \"" << x << "\"" << endl;
	string_set0.remove(x);
	n = string_set0.contains(x);
	cout << "\tcontains(\"" << x << "\") returns " << n << endl;


	cout << "\nremove \"" << x << "\" again" << endl;
	try {
		string_set0.remove(x);
	} catch (not_found_exception) {
		cout << "\tcaught not_found_exception" << endl;
	}
}
