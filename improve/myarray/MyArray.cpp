#include<iostream>
#include<string>
using namespace std;
#include "MyArray.hpp"

class Person {
public:
	Person() {} 
		Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printPersonArray(MyArray<Person>& personArr){
    for (int i = 0; i < personArr.getSize(); i++) {
		cout << "name：" << personArr[i].m_Name << " age： " << personArr[i].m_Age << endl;
	}
}

void test1(){
    MyArray<int> array1(10);
	for (int i = 0; i < 10; i++)
	{
		array1.Push_back(i);
	}
	cout << "print array1：" << endl;
	printIntArray(array1);
	cout << "array1 size：" << array1.getSize() << endl;
	cout << "array1 capacity：" << array1.getCapacity() << endl;

	cout << "--------------------------" << endl;
    MyArray<Person> array2(5);
    Person p1("mj", 30);
	Person p2("ai", 20);
	Person p3("kb", 18);
	Person p4("tm", 15);
	Person p5("vc", 24);
    array2.Push_back(p1);
    array2.Push_back(p2);
    array2.Push_back(p3);
    array2.Push_back(p4);
    array2.Push_back(p5);
    printPersonArray(array2);
    cout << "array2 size：" << array2.getSize() << endl;
	cout << "array2 capacity：" << array2.getCapacity() << endl;

}

int main(){
    test1();
    //system("pause");
    return 0;
}