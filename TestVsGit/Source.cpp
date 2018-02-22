#include <iostream>

using namespace std;

void greet(const char* name) {
	cout << "Hi " << name << "!\n";
}

int main() {
	greet("Adrian");
	system("pause");
	return 0;
}