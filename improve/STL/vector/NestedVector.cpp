#include<iostream>
#include<string>
#include<vector>
using namespace std;

//容器嵌套容器

void test1(){
    vector<vector<int>> v;
    //创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
    //将小容器插入到大容器中 实现二维数组
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    //通过大容器遍历所有数据
    for(vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++){
        for(vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++){
            cout << *it2 << " ";
        }
        cout << endl;
    }
}

int main(){
    test1();
    system("pause");
    return 0;
}