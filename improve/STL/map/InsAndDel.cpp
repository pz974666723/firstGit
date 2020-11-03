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
    //插入
	map<int, int> m;
	//第一种插入方式
	m.insert(pair<int, int>(1, 10));
	//第二种插入方式
	m.insert(make_pair(2, 20));
	//第三种插入方式
	m.insert(map<int, int>::value_type(3, 30));
	//第四种插入方式(不建议插入，因为插错了数据他会自动创建，但可以通过[]访问)
	m[4] = 40;
    
    printMap(m);
    m.erase(m.begin());
    printMap(m);//按照key删除
    m.erase(3);//删除一个不存在的数就啥都不做
    printMap(m);
    m.erase(m.begin(), m.end());
    printMap(m);
    m.clear();
    printMap(m);
}

int main(){
    test1();
    return 0;
}