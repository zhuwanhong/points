#include <iostream>
#include <string>
#include <vector>

using namespace std;

void update_int() {
	throw 1;
}

void update_string() {
	throw "string";
}

void update_other() {
	throw vector<int>();
}

int main() {
	cout << "What type to update?" << endl;
	string input;
	cin >> input;

	try {
		if (input == "int") {
			update_int();
		}
		else if (input == "string") {
			update_string();
		}
		else {
			update_other();
		}
	}
	catch (int i) {
		cout << "Hello int Exception" << endl;
		return 1;
	}
	catch (const char* s) {
	//catch (string s) {
		cout << "Hello string Exception" << endl;
		return 1;
	}
	catch (...) {
		cout << "Hello Other Exception" << endl;
		return 1;
	}
	return 0;
}
