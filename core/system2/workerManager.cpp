#include "workerManager.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"

//构造函数
WorkerManager::WorkerManager(){
	//1.文件不存在时
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if(!ifs.is_open()){
		cout << "no such file" << endl;
		this->m_EmpNum = 0;//初始化原来记录的人数
		m_EmpArray = NULL;//初始化数组指针
		m_FisEmpty = 1;//初始化文件是否为空
		ifs.close();
		return;
	}
	//2.文件存在但数据为空
	char ch;
	ifs >> ch;
	if(ifs.eof()){
		cout << "empty file" <<endl;
		this->m_EmpNum = 0;//初始化原来记录的人数
		m_EmpArray = NULL;//初始化数组指针
		m_FisEmpty = 1;//初始化文件是否为空
		ifs.close();
		return;
	}
	//3.文件存在且不为空
	int num = get_FNum();
	cout << "Number of people in file: " << num << endl;
	m_FisEmpty = 0;
	m_EmpNum = num;
	//先开辟空间
	m_EmpArray = new Worker* [m_EmpNum];
	//存入数据
	init_Emp();
}

//展示菜单
void WorkerManager::show_Menu(){
    cout << "*****************************************" << endl;
	cout << "*************   Welcome！" << endl;
	cout << "*************  0.quit " << endl;
	cout << "*************  1.add  " << endl;
	cout << "*************  2.show  " << endl;
	cout << "*************  3.delete " << endl;
	cout << "*************  4.change " << endl;
	cout << "*************  5.find  " << endl;
	cout << "*************  6.sort  " << endl;
	cout << "*************  7.clear  " << endl;
	cout << "****************************************" << endl;
	cout << endl;
}

//退出程序
void WorkerManager::myexit(){
	cout << "goodbye" << endl;
	system("pause");
	exit(0);
}

//添加员工
void WorkerManager::Add_Emp(){
	cout << "input add number: " << endl;
	int addNum = 0; //记录新增人数
	cin >> addNum;
	//添加
	if (addNum > 0){
		//计算新空间大小
		int newSize = m_EmpNum + addNum;//新空间人数 = 原来记录的人数 + 新增人数

		//开辟新空间（动态大小，尝试通过链表实现）
		Worker** newSpace = new Worker* [newSize];//中括号表示数组
		//将原来空间下的数据，拷贝到新空间下
		if (m_EmpArray != NULL){//若二级指针m_EmpArray为空，说明数组不存在
			for (int i =0; i<m_EmpNum; i++){
				newSpace[i] = m_EmpArray[i];
			}
		}
		//添加新数据
		for(int i = 0; i < addNum; i++){
			int id, dSelsect;
			string name;
			cout << "input " << i+1 << " id" << endl;
			cin >> id;
			int ex = isExist(id);
			if (ex!=-1){
				cout << "ID already exists" << endl;
				return;
			}
			//newSpace[i+m_EmpNum]->m_Id = id;
			cout << "input " << i+1 << " name" << endl;
			cin >> name;
			//newSpace[i+m_EmpNum]->m_Name = name;
			cout << "chose job:" << endl;
			cout << "1.employee" << endl;
			cout << "2.manager" << endl;
			cout << "3.boss" << endl;
			cin >> dSelsect;
			//岗位选择
			Worker* worker = NULL;
			switch(dSelsect){
				case 1:
					worker = new Employee(id, name, 1);
					break;
				case 2:
					worker = new Manager(id, name, 2);
					break;
				case 3:
					worker = new Boss(id, name, 3);
					break;
				default:
					cout << "error" << endl;
					system("pause");
					system("cls");
					i = addNum;
					return;
			} 
			//将创建的员工添加到数组中
			newSpace[i+m_EmpNum] = worker;
		}
		//释放原有空间
		delete[] m_EmpArray;
		//更改新空间指向
		m_EmpArray = newSpace;
		//更新新职工人数
		m_EmpNum = newSize;
		//注意：由于这里是浅拷贝，不能用delete释放newSpace和newSize
		cout << "you have add " << addNum << " worker" << endl;
		//调用保存
		SaveFile();
		//更新文件不为空
		m_FisEmpty = false;
	}
	else {
		cout << "error" << endl;
	}
	//按任意键后清屏
	system("pause");
	system("cls");
}

//保存文件
void WorkerManager::SaveFile(){
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//写文件
	//写入数据
	for (int i = 0; i<m_EmpNum; i++){
		ofs << m_EmpArray[i]->m_Id << " "
			<< m_EmpArray[i]->m_Name << " "
			<< m_EmpArray[i]->m_DeptId <<endl; 
	}
	ofs.close();
}

//统计文件中人数
int WorkerManager::get_FNum(){
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	int id,dId,num = 0;
	string name;
	while (ifs >> id&&ifs >> name&&ifs >>dId){//由于前面保存文件中通过空格" "隔开的因此可以进行如此判断
		num++;
	}
	return num;
};

//初始化员工
void WorkerManager::init_Emp(){
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	int id,dId;
	string name;
	int i = 0;
	while (ifs >> id&&ifs >> name&&ifs >>dId){//将文件中三个数据分别写到变量id,name,dId中
		Worker* worker = NULL;
		if (dId == 1){
			worker = new Employee(id,name,dId);
		}
		if (dId == 2){
			worker = new Manager(id,name,dId);
		}
		if (dId == 3){
			worker = new Boss(id,name,dId);
		}
		m_EmpArray[i] = worker;
		i++;
	}
	ifs.close();
}

//显示职工
void WorkerManager::show_Emp(){
	//判断文件是否存在
	if (m_FisEmpty){
		cout << "no date" << endl;	
	}
	else{
		for(int i = 0; i<m_EmpNum; i++){
			m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

//判断职工存在(存在返回职工在数组中位置，不存在返回-1)
int WorkerManager::isExist(int id){
	int index = -1;
	for (int i = 0;i<m_EmpNum; i++){
		if(m_EmpArray[i]->m_Id == id){
			index = i;
			break;
		}
	}
	return index;
}

//删除职工
void WorkerManager::del_Emp(){
	if (m_FisEmpty){
		cout << "no data" << endl;
	}
	else{
		cout << "id you wanna delete: " << endl;
		int id;
		cin >> id;
		int index = isExist(id);
		if (index != -1){
			for(int i = index; i< m_EmpNum - 1;i++){
				m_EmpArray[i] = m_EmpArray[i+1];
			}
			m_EmpNum--;
			//数据同步跟新到文件
			SaveFile();
			cout << "delete successful" << endl;
		}
		else{
			cout << "can not find" << endl;
		}

	}
	system("pause");
	system("cls");
	
}

//修改职工
void WorkerManager::mod_Emp(){
	if (m_FisEmpty){
		cout << "no data" << endl;
	}
	else{
		cout << "input modified id: " << endl;
		int id;
		cin >> id;
		int ret = isExist(id);
		if ( ret != -1 ){
			delete m_EmpArray[ret];
			int newId = 0, dSelect = 0;
			string newname;
			cout << "find it and input new information:" << endl;
			cout << "new id:" << endl;
			cin >> newId;
			cout << "new name:" << endl;
			cin >> newname;
			cout << "chose job:" << endl;
			cout << "1.employee" << endl;
			cout << "2.manager" << endl;
			cout << "3.boss" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch(dSelect){
				case 1:
					worker = new Employee(newId, newname, 1);
					break;
				case 2:
					worker = new Manager(newId, newname, 2);
					break;
				case 3:
					worker = new Boss(newId, newname, 3);
					break;
				default:
					break;
			} 
			m_EmpArray[ret] = worker;
			cout << "modify successful" << endl;
			SaveFile();
		}
		else {
			cout << "cant find" << endl;
		}
	}
	system("pause");
	system("cls");
}

//查找职工
void WorkerManager::find_Emp(){
	if(m_FisEmpty){
		cout << "no data" << endl;
	}
	else{
		cout << "input way to find:" << endl;
		cout << "1.by ID" << endl;
		cout << "2.by name" << endl;
		int findWay;
		cin >> findWay;
		 
		if (findWay == 1){
			//编号查找
			int id;
			cout << "ID you want find:" << endl;
			cin >> id;
			int ex = isExist(id);
			if(ex!=-1){
				cout << "find successful" << endl;
				m_EmpArray[ex]->showInfo();
			}
			else{
				cout << "can not find" << endl;
			}
		}
		else if (findWay == 2){
			//姓名查找
			string name;
			cout << "name you want find:" << endl;
			cin >> name;
			bool flag = 0;
			for (int i = 0;i<m_EmpNum; i++){
				if(m_EmpArray[i]->m_Name == name){
					cout << "find successful" << endl;
					m_EmpArray[i]->showInfo();
					flag = 1;
					break;
				}
			}
			if (flag == 0){
				cout << "can not find" << endl;
			}
		}
		else{
			cout << "error" << endl;
		}
	}
	system("pause");
	system("cls");
}

//排序
void WorkerManager::sort_Emp(){
	if(m_FisEmpty){
		cout << "no data" << endl;
		system("pause");
		system("cls");
		return;
	}
	else{
		cout << "input way of sort:" << endl;
		cout << "1.rise" << endl;
		cout << "2.drop" << endl;
		int select;
		cin >> select;
		if (select == 1){
			//升序
			int min = 0;
			for(int i = 0;i<m_EmpNum-1;i++){
				for(int j = i+1;j<m_EmpNum;j++){
					if(m_EmpArray[min]->m_Id > m_EmpArray[j]->m_Id){
						min = j;
					}
				}
				if (i != min){
					Worker *temp = m_EmpArray[i];
					m_EmpArray[i] = m_EmpArray[min];
					m_EmpArray[min] = temp;
				}
			}
		}
		else if (select == 2){
			//降序
			int max = 0;
			for(int i = 0;i<m_EmpNum-1;i++){
				for(int j = 1+1;j<m_EmpNum;j++){
					if(m_EmpArray[max]->m_Id < m_EmpArray[j]->m_Id){
						max = j;
					}
				}
				if (i != max){
					Worker *temp = m_EmpArray[i];
					m_EmpArray[i] = m_EmpArray[max];
					m_EmpArray[max] = temp;
				}
			}
		}
		else{
			cout << "error" << endl;
			system("pause");
			system("cls");
			return;
		}
		cout << "sort successful" << endl;
		SaveFile();
		show_Emp();
		return;
	}
}

//清空
void WorkerManager::clean_Emp(){
	cout << "are you sure ?" << endl;
	cout << "1.yes" << endl;
	cout << "2.no" << endl;
	int select = 0;
	cin >> select;
	if (select == 1){
		//文件操作：打开ios::trunc如果文件存在则删除并重新创建
		ofstream ofs;
		ofs.open(FILENAME,ios::trunc);
		//维护数组指针
		if(m_EmpArray != NULL){
			for (int i=0;i<m_EmpNum;i++){
				if (m_EmpArray[i] != NULL){
					//释放指针数组内每一项所存的堆区数据
					delete m_EmpArray[i];
					m_EmpArray[i] = NULL;
				}
			}
			m_EmpNum = 0;
			//释放在堆区的指针数组
			delete[] m_EmpArray;
			m_EmpArray = NULL;
			m_FisEmpty = 1;
		}
		cout << "clean successful" << endl;
		system("pause");
		system("cls");
		return;
	}
	else if (select == 2){
		cout << "clean fail" << endl;
		system("pause");
		system("cls");
		return;
	}
	else{
		cout << "error" << endl;
		system("pause");
		system("cls");
		return;
	}
}

//析构函数
WorkerManager::~WorkerManager(){
	//运行结束后释放堆区数据，对于这个程序，释放堆区数据是在程序结束时释放，因此可以让不写
	//但需要养成一个好的习惯
	if (m_EmpArray != NULL){
		delete[] m_EmpArray;//删除指针数组
		m_EmpArray = NULL;
	}
}