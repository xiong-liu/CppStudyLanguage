#pragma once
#include <iostream>
#include <string>
using namespace std;

class base {
public:
  string name() { return basename; }
  virtual void print(ostream &os) { os << "���ǻ���" << std::endl; }
  virtual void test();

private:
  string basename;
};

void base::test() { std::cout << "�������ү" << std::endl; }
class derived : public base {
public:
  virtual void print(ostream &os) { os << "����������" << std::endl; }

private:
  int i;
};

class HasPtr {
public:
  HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
  ~HasPtr() { delete ps; }
  std::string *get_ps() { return ps; }

private:
  string *ps;
  int i;
};