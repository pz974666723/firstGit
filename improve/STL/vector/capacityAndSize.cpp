/*empty(); //判断容器是否为空
capacity(); //容器的容量
size(); //返回容器中元素的个数
resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
​ //如果容器变短，则末尾超出容器长度的元素被删除。
resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
​ //如果容器变短，则末尾超出容器长度的元素被删除
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printV(vector<int> &v){
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test1(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    printV(v1);

    if(v1.empty()){
        cout << "v1 empty" << endl;
    }
    else{
        cout << "v1 not empty" << endl;
        cout << "v1 capacity:" << v1.capacity() << endl;
        cout << "v1 size:" << v1.size() << endl;
    }
    //重新指定大小
    v1.resize(19, 2);
    printV(v1);//指定size比原来长，默认为0填充，上例为2填充
    cout << "v1 capacity:" << v1.capacity() << endl;
    v1.resize(5);
    printV(v1);///指定size比原来短，超出部分删除
    cout << "v1 capacity:" << v1.capacity() << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}