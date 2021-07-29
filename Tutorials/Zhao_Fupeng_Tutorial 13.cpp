#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> data = { 1,2,3 };
	data.push_back(12);
	cout << data[3] << endl;
	cout << data[data.size() - 1] << endl;
	data.pop_back();
	cout << data.size() << endl;
}