#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
	vector<int> temp{ 1,2,3,4,5,6,7,8 };
	vector<int>::iterator it = temp.begin();
	cout << *it << endl;
	return 0;
}