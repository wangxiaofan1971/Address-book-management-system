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
void Modify_Contact(struct inf *add, int flag)
{
	string modify;
	cout << "请输入您要修改的联系人" << endl;
	cin >> modify;
	for (size_t i = 0; i < flag; i++)
	{
		if (add[i].name == modify)
		{
			cout << "请输入姓名：" << endl;
			cin >> add[i].name;
			cout << "请输入性别：" << endl;
			cout << "1--男\n2--女" << endl;
			cin >> add[i].sex;
			cout << "请输入年龄：" << endl;
			cin >> add[i].old;
			cout << "请输入联系电话：" << endl;
			cin >> add[i].number;
			cout << "请输入家庭住址：" << endl;
			cin >> add[i].address;
			cout << "修改成功" << endl;
			return;
		}
	}
	cout << "查无此人" << endl;
}