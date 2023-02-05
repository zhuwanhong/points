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

bool exception_basic(const string& input) {
	if (input == "int") {
		update_int();
	} else if (input == "string") {
		update_string();
	} else {
		update_other();
	}

	return true;
}

int main() {
	cout << "What exception do you want?" << endl;
	string input;
	cin >> input;
	try {
		exception_basic(input);
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
