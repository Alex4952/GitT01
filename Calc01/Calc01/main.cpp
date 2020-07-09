#include <iostream>
#pragma warning (disable : 4996 6031)
using namespace std;

int add(int x, int y) {
	return x + y;
}

int main() {
	cout << "original_source" << endl;
	cout << "to test sync" << endl;
	cout << "to test push" << endl;

	cout << add(10, 3) << endl;
	return 0;
}