#include <iostream>
#include <vector>

using namespace std;

class A {
public:
	A(int c) : count(c) {
	}

	A& operator++() {
		++count;
		if (count > 2) {
			throw 1;
		}
		return *this;
	}

private:
	int count = 0;
};

void increment_a(vector<A>& a_vec) {
	/*
	for (auto& a : a_vec) {
		++a;
	}
	*/
	//Above code is not strong guarantee, below is the right way.
	vector<A> temp(a_vec);
	for (auto& a : temp) {
		++a;
	}
	swap(a_vec, temp);

}

int main() {
	vector<A> a_vec{ A(1), A(2), A(3) };
	try {
		increment_a(a_vec);
	}
	catch (...) {
		cout << "Exception happened" << endl;
		return 1;
	}
	cout << "No exception happened" << endl;
	return 0;
}
