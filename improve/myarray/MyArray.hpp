#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray{
public:
    MyArray(int capacity){
        m_capacity = capacity;//容量
        m_size = 0;           //大小
        pAddress = new T[m_capacity];
    }
    //这一步是调用对象时，函数中会拷贝一个对象需要进行的操作
    MyArray(const MyArray &arr){
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
        //deep copy
        pAddress = new T[arr.m_capacity];
        //将arr中的数据copy过来
        for (int i = 0; i<arr.m_size; i++){
            pAddress[i] = arr.pAddress[i];
        }
    }
    //operator = 防止浅拷贝,通过返回引用实现可链式编程a = b = c
    //这一步是赋值时需要的操作
    MyArray& operator=(const MyArray &arr){
        //先判断原来堆区是否有数据，如果有先释放
        if(pAddress != NULL){
            delete[] pAddress;
            pAddress = NULL;
            m_capacity = 0;
            m_size = 0;
        }
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
        //deep copy
        pAddress = new T[arr.m_capacity];
        for (int i = 0; i<arr.m_size; i++){
          pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    //尾插法
    void Push_back(const T & val){
        if(m_size == m_capacity){
            cout << "full" << endl;
            return;
        }
        pAddress[m_size] = val;
        m_size++;
    }
    //尾删法
    void Pop_back(){
        if(m_size == 0){
            cout << "empty" << endl;
            return;
        }
        m_size--;
    }

    //通过下标访问数组中的元素
    T& operator[](int index){
        if (index >= m_size){
            cout << "error" << endl;
            return pAddress[m_size];
        }
        return pAddress[index];
    }

    int getCapacity(){
        return m_capacity;
    }

    int getSize(){
        return m_size;
    }

    ~MyArray(){
        if (pAddress != NULL){
            delete[] pAddress;
            pAddress = NULL;
        }
    }

private:
    T* pAddress;//指向一个堆空间，这个空间存储真正的数据
    int m_capacity;//数组容量
    int m_size;//数组大小
};