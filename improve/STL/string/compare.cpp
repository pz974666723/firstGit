#include<iostream>
#include<string>
using namespace std;

void test01()
{

	string s1 = "hello";
	string s2 = "aello";

	int ret = s1.compare(s2);

	if (ret == 0) {
		cout << "s1 = s2" << endl;
	}
	else if (ret > 0)
	{
		cout << "s1 > s2" << endl;
	}
	else
	{
		cout << "s1 < s2" << endl;
	}

}

int main() {

	test01();

	//system("pause");

	return 0;
}
