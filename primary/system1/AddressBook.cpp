#include<iostream>
#include<string>
using namespace std;

#define MAX 1000//设置通讯录最大人数

//联系人结构体
struct contect{
    string name;
    int sex;//1.男  2.女
    int age;
    string phone;
    string addr;
};

//通讯录结构体
struct addressbook{
    contect arr[MAX];
    int size;//当前人数个数记录
};

//显示菜单界面
void showmenu(){
    cout << "* * *  " << "1.add contact\t" << "* * *" << endl;
    cout << "* * *  " << "2.show contact\t" << "* * *" << endl;
    cout << "* * *  " << "3.delete contact\t" << "* * *" << endl;
    cout << "* * *  " << "4.find contact\t" << "* * *" << endl;
    cout << "* * *  " << "5.edit contact\t" << "* * *" << endl;
    cout << "* * *  " << "6.clear contact\t" << "* * *" << endl;
    cout << "* * *  " << "0.exit    \t" << "* * *" << endl;
}

//添加联系人
void addcontect(addressbook *adb){
    //判断通讯录是否已满
    if (adb->size == MAX){
        cout << "there is no place" << endl;
        return;
    }
    else{
        cout << "contect name:" << endl;
        cin >> adb->arr[adb->size].name;

        cout << "contect sex:" << endl;
        cout << "1.men" << endl;
        cout << "2.women" << endl;
        while(1){
             cin >> adb->arr[adb->size].sex;
            if (adb->arr[adb->size].sex == 1 || adb->arr[adb->size].sex == 2){
                break;
            }
            else {
                cout << "wrong number, input again :" << endl;
            }
        }

        cout << "contect age:" << endl;
        cin >> adb->arr[adb->size].age;

        cout << "contect phone:" << endl;
        cin >> adb->arr[adb->size].phone;

        cout << "contect addr:" << endl;
        cin >> adb->arr[adb->size].addr;

        adb->size++;//更新通讯录现有人数
        cout << "size = " << adb->size << endl;
        cout << "add complete !" << endl;

        system("pause");
        system("cls");
    }
}

//显示联系人
void showcontect(addressbook *adb){
    if (adb->size == 0){
        cout << "NULL" << endl;
    }
    else{
        for (int i = 0; i < adb->size; i++){
            cout << "contect name:" << adb->arr[i].name << "\t";
            cout << "contect sex:" << (adb->arr[i].sex == 1 ? "men" : "women") << "\t";
            cout << "contect age:" << adb->arr[i].age << "\t";
            cout << "contect phone:" << adb->arr[i].phone << "\t";
            cout << "contect address:" << adb->arr[i].addr << endl;
        }
    }
    system("pause");
    system("cls");
}

//检测联系人，存在则返回位置（下标），不存在返回-1
int exist(addressbook *adb, string name){
    for (int i = 0; i < adb->size; i++){
        if (adb->arr[i].name == name){
            //cout << "i = " << i << endl;
            return i;
        }
    }
    //此处容易出错 -1不应该在else中返回
    return -1;
}

//删除联系人
void deletecontect(addressbook *adb){
    cout << "delete name:" << endl;
    string name;
    cin >> name;
    int result = exist(adb, name);
    //cout << adb << endl; //此处的adb为传输进来的地址指针，因此exist中传递的参数为adb和主函数中的&adb指向同一个地址
    if (result != -1){
        //删除方法：将i后的数据前移，并使size - 1
        for (int i = result; i < adb->size; i++){
            adb->arr[i] = adb->arr[i + 1];
            adb->size--;
        }
        cout << "successful delete !" << endl;
    }
    else{
        cout << "can not find !" << endl;
    }
    system("pause");
    system("cls");
}

//查找联系人
void findcontect(addressbook *adb){
    cout << "find name:" << endl;
    string name;
    cin >> name;
    int result = exist(adb, name);   
    if (result != -1){
        cout << "contect name:" << adb->arr[result].name << "\t";
        cout << "contect sex:" << (adb->arr[result].sex == 1 ? "men" : "women") << "\t";
        cout << "contect age:" << adb->arr[result].age << "\t";
        cout << "contect phone:" << adb->arr[result].phone << "\t";
        cout << "contect address:" << adb->arr[result].addr << endl; 
    }
    else{
        cout << "can not find !" << endl;
    }
    system("pause");
    system("cls");    
}

//修改联系人
void editcontect(addressbook *adb){
    cout << "edit name:" << endl;
    string name;
    cin >> name;
    int result = exist(adb, name);
    if (result != -1){
        cout << "star editing:" << endl;
        cout << "contect name:" << endl;
        cin >> adb->arr[result].name;

        cout << "contect sex:" << endl;
        cout << "1.men" << endl;
        cout << "2.women" << endl;
        while(1){
             cin >> adb->arr[result].sex;
            if (adb->arr[result].sex == 1 || adb->arr[result].sex == 2){
                break;
            }
            else {
                cout << "wrong number, input again :" << endl;
            }
        }

        cout << "contect age:" << endl;
        cin >> adb->arr[result].age;

        cout << "contect phone:" << endl;
        cin >> adb->arr[result].phone;

        cout << "contect addr:" << endl;
        cin >> adb->arr[result].addr;

        cout << "edit complete !" << endl;
    }
    else{
        cout << "can not find !" << endl;
    }

    system("pause");
    system("cls");
}

//清空联系人
void clearcontect(addressbook *adb){
    while(1){
        cout << "are you sure ?" << endl;
        cout << "1.yes" << endl;
        cout << "2.no" << endl;
        int result;
        cin >> result;
        if (result == 1){
            adb->size = 0;
            cout << "clear complete !" << endl;
            system("pause");
            system("cls");
            return;
        }
        else if (result == 2){
            cout << "clear fail !" << endl;
            system("pause");
            system("cls");
            return;
        }
    }

    
}

//主函数
int main(){
    addressbook adb;
    //初始化通讯录现有人数
    adb.size = 0;

    int select = 0;//设置用户选择参数
    //cout << &adb << endl;
    while(1){
        showmenu();
        cout << "please input your selection:" << endl;
        cin >> select;
        switch (select){
            case 1:
                addcontect(&adb);//利用地址传递,可修改实参
                break;
            case 2:
                showcontect(&adb);
                break;
            case 3:{
                //case语句中代码不能段数过多，需要通过{}来解决
                deletecontect(&adb);
            }                
                break;
            case 4:
                findcontect(&adb);
                break;
            case 5:
                editcontect(&adb);
                break;
            case 6:
                clearcontect(&adb);
                break;
            case 0:
                cout << "goodbye !" << endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        }
    }
    
    //system("pause");
    return 0;
}