#include <queue>
#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01() {

	//创建队列
	queue<Person> q;

	//准备数据
	Person p1("tang", 30);
	Person p2("sun", 1000);
	Person p3("zhu", 900);
	Person p4("sha", 800);

	//向队列中添加元素  入队操作
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
    cout << "size:" << q.size() << endl;
	//队列不提供迭代器，更不支持随机访问	
	while (!q.empty()) {
		//输出队头元素
		cout << "front-- name: " << q.front().m_Name 
              << "  age: "<< q.front().m_Age << endl;
        
		cout << "back-- name: " << q.back().m_Name  
              << "  age: " << q.back().m_Age << endl;
        
		cout << endl;
		//弹出队头元素
		q.pop();
	}

	cout << "size:" << q.size() << endl;
}

int main() {

	test01();

	return 0;
}