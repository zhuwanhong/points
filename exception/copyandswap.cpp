#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A {
public:
	A() {
	}

	A& operator++() {
		/* Increment something */;
		return *this;
	}

};

void increment_a(vector<A>& a_vec) {
	/*
	for (auto& a : a_vec) {
		++a;
	}
	*/
	//Above code is not strong guarantee, below is the right way.
	vector<A> temp(a_vec);
	for (auto& a : a_vec) {
		++a;
	}
	swap(a_vec, temp);

}

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
	int* intp;
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
