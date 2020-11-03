/*评委打分 
选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
1.创建五名选手，放到vector中
2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
3.sort算法对deque容器中分数排序，去除最高和最低分
4.deque容器遍历一遍，累加总分
5.获取平均分
*/
#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>
using namespace std;

class Person{
public:
    Person(string name, int score){
        m_name = name;
        m_score = score;
    }
    string m_name;
    int m_score;
};

//创建选手ABCDE
void creatPerson(vector<Person> &v){
    string nameSeed = "ABCDE";
    for(int i = 0; i<5; i++){
        string name = "player";
        name += nameSeed[i];
        int score = 0;
        Person p(name, score);
        v.push_back(p);
    }
}

//打分
void setScore(vector<Person> &v){
    //通过迭代器遍历
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++){
        deque<int> deq;
        for(int i=0; i<10; i++){
            int score;
            score = rand() %41 + 60;
            deq.push_back(score);
        }
        //看评委打分
        cout << it->m_name << " judge:" << endl;
        for(deque<int>::iterator itd=deq.begin(); itd != deq.end(); itd++){
            cout << *itd << " ";
        }
        cout << endl;
        sort(deq.begin(), deq.end());
        deq.pop_back();
        deq.pop_front();
        int sum = 0, score;
        //通过迭代器遍历
        for(deque<int>::iterator itd=deq.begin(); itd != deq.end(); itd++){
            sum += *itd;
        }
        score = sum/deq.size();
        it->m_score = score;
    }
}

int main(){
    //随机数种子
    srand((unsigned int)time(NULL));
    vector<Person> v;
    creatPerson(v);
    setScore(v);
    
    //通过迭代器遍历
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name: " << it->m_name << " score: " << it->m_score << endl;
	}
    return 0;
}