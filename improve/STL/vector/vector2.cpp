#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//vector中存放自定义数据类型

class Person{
public:
    Person(string name, int age){
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

void myPrint(Person p){
    cout << p.m_name << "  " << p.m_age << endl;
}

void test1(){
    Person p1("a", 10);
    Person p2("b", 20);
    Person p3("c", 30);
    Person p4("d", 40);

    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it).m_name << "  " << it->m_age << endl;
    }
    cout << "==============" << endl;
    for_each(v.begin(), v.end(), myPrint);

}

void test02() {

	vector<Person*> v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		Person * p = (*it);
		cout << "Name:" << p->m_name << " Age:" << (*it)->m_age << endl;
	}
}

int main(){
    test1();
    test02();
    //system("pause");
    return 0;
}