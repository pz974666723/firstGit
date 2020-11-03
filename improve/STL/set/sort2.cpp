#include <set>
#include <string>
#include<iostream>
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

class comparePerson{
public:
    bool operator()(const Person &p1, const Person &p2){
        return p1.m_age > p2.m_age;
    }
};

void test1(){
    set<Person, comparePerson> s;
    Person p1("AA", 12);
    Person p2("BB", 14);
    Person p3("CC", 15);
    Person p4("DD", 13);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for(set<Person, comparePerson>::iterator it=s.begin(); it!=s.end(); it++){
        cout << it->m_name << " " << it->m_age << endl;
    }
    
}

int main(){
    test1();
    return 0;
}