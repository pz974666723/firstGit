#include<iostream>
#include<map>
#include<string>
using namespace std;

class Person{
public:
    Person(string name, int age){
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

class myCompare{
public:
    bool operator()(const Person &p1, const Person &p2){
        return p1.m_age > p2.m_age;
    }
};

void printMap(map<Person, Person, myCompare>&m)
{
	for (map<Person, Person, myCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
        cout << it->first.m_name << endl;
    }
}

void test1(){
    map<Person, Person, myCompare> m;
    Person f1("Tom", 32);
    Person f2("Paul", 33);
    Person f3("Roll", 30);
    Person s1("aa", 12);
    Person s2("dd", 15);
    Person s3("cc", 11);
    
    m.insert(make_pair(f1, s1));
    m.insert(make_pair(f2, s2));
    m.insert(make_pair(f3, s3));
    printMap(m);
}

int main(){
    test1();
    return 0;
}