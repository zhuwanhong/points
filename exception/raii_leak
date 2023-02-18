#include <iostream>

using namespace std;

class A {
public:
	A() {
		throw 1; //Now intp is leaked, so no basic guarantee. Without this line, ~raii() will be called
	}
};

class raii {
public:
	raii() {
		intp = new int;
		ap = new A();
	}

	~raii() {
		cout << "Destructing raii object..." << endl;
		delete intp;
		delete ap;
	}

private:
	int* intp; //The right way is to use unique_ptr
	A* ap;

};

int main() {
	try {
		raii r;
	}
	catch (...) {
		cout << "Exception happened" << endl;
		return 1;
	}
	cout << "No exception happened" << endl;
	return 0;
}
