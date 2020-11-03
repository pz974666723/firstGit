#include<iostream>
#include<map>
using namespace std;

void printMap(map<int,int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test1(){
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));

    map<int, int>::iterator pos = m.find(3);
    if(pos != m.end()){
        cout << "find key = " << pos->first << "  value = " << pos->second << endl;
    }
    else cout << "not find" << endl;

    int num = m.count(3);
    cout << num << endl;
}

int main(){
    test1();
    return 0;
}