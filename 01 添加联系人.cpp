#include<iostream>
#include<string> 
using namespace std;
struct inf {
	string name;
	int sex;
	int old;
	string number;
	string address;
};//信息包括（姓名、性别、年龄、联系电话、家庭住址）
void Add_Contact(struct inf *add, int flag)
{
	string tmp;
	cout << "请输入姓名：" << endl;
	cin >> add[flag].name;
	cout << "请输入性别：" << endl;
	cout << "1--男\n2--女" << endl;
	cin >> add[flag].sex;
	cout << "请输入年龄：" << endl;
	cin >> add[flag].old;
	cout << "请输入联系电话：" << endl;
	cin >> add[flag].number;
	cout << "请输入家庭住址：" << endl;
	cin >> add[flag].address;
	cout << "添加成功" << endl;
}