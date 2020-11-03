#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//vextor存放内置类型

void myPrint(int val){
    cout << val << endl;
}

void test1(){
    //创建容器
    vector<int> v;
    //插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //通过迭代器访问容器中的数据
    vector<int>::iterator itBegin = v.begin();//起始迭代器  指向容器中第一个元素
    vector<int>::iterator itEnd = v.end();//结束迭代器  指向容器中最后一个元素的下一个位置
    //第一种遍历方式：
	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}
    cout << "====================================" << endl;
    //第二种遍历方式
    for (vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    }
    cout << "====================================" << endl;
    //第三种遍历方式 STL中的遍历算法
    for_each(v.begin(), v.end(), myPrint);//源码的实现和第二种遍历方法类似
}

int main(){
    test1();
    //system("pause");
    return 0;
}