#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Do you want Exception?" << endl;
	string input;
	cin >> input;
	try {
		if (input == "int") {
			throw 1;
		}
		if (input == "string") {
			throw "string";
		}
		throw 4.3;
	}
	catch (int i) {
		cout << "Hello int Exception" << endl;
		return 1;
	}
	catch (string s) {
		cout << "Hello string Exception" << endl;
		return 1;
	}
	catch (...) {
		cout << "Hello Other Exception" << endl;
		return 1;
	}

	return 0;
}
