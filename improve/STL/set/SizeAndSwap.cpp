#include <set>
#include<iostream>
using namespace std;

void printSet(set<int> & s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//大小
void test01()
{

	set<int> s1;
	
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	if (s1.empty())
	{
		cout << "s1 empty" << endl;
	}
	else
	{
		cout << "s1 not empty" << endl;
		cout << "s1 size:" << s1.size() << endl;
	}

}

//交换
void test02()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "before:" << endl;
	printSet(s1);
	printSet(s2);
	cout << endl;

	cout << "after:" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

int main() {

	test01();

	test02();

	return 0;
}