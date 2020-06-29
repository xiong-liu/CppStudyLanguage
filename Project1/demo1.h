#include <deque>
#include <iostream>
#include <regex>
#include <stack>
#include <vector>
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
    cout << results.str(0) << endl;
  }
}