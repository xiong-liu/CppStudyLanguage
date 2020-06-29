#include <deque>
#include <iostream>
#include <regex>
#include <stack>
#include <vector>
#include "function.h"
using namespace std;

void test1() {
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern);
	smatch results;
	string test_str = "recepit freind theif receive";
	if (regex_search(test_str, results, r))
		cout << results.str() << endl;
}

void test2() {
	regex r("([[:alnum:]]+)\\.(cpp|cxx|cc)$", regex::icase);
	string filenanme = "test.cpp";
	smatch results;
	if (regex_search(filenanme, results, r)) {
		cout << results.str(2) << endl;
	}
}


//匹配一个电话号码
void test3() {
	string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})";
	regex r(phone);
	smatch m;
	string s;
	while (getline(cin, s)) {
		for (sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it) {
			if (valid(*it))
				cout << "valid: " << it->str() << endl;
			else
				cout << "not valid: " << it->str() << endl;
		}
	}
}

//匹配一个电话号码
void test4(){
	string fmt = "$2.$5.$7";
	string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})";
	regex r(phone);
	string number = "(908) 555-1800";
	cout << regex_replace(number, r, fmt) << endl;
}