/*
排序案例
案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
*/
#include <list>
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    Person(string name, int age, int height){
        m_name = name;
        m_age = age;
        m_height = height;
    }
    string m_name;
    int m_age, m_height;
};

void creatPerson(list<Person> &L){
    cout << "number of people: " << endl;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string name;
        int age, height;
        cin >> name >> age >> height;
        Person p(name, age, height);
        L.push_back(p);
    }
}

bool ComparePerson(Person& p1, Person& p2) {
    //先比较年龄，后比较身高
	if (p1.m_age == p2.m_age) {
        //年龄相同，按身高排序
		return p1.m_height  > p2.m_height;
	}
	else
	{
		return  p1.m_age < p2.m_age;
	}

}

void mySort(list<Person> &L){
    //自定义数据类型排序必须指定规则，函数重载
    L.sort(ComparePerson);
}

int main(){
    list<Person> L;
    creatPerson(L);
    mySort(L);
    cout << "sort :" << endl;;
    for(list<Person>::iterator it=L.begin(); it!=L.end(); it++){
        cout << it->m_name << " ";
        cout << it->m_age << " ";
        cout << it->m_height << endl;
    }
    return 0;
}