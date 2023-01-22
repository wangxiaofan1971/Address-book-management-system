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
void Show_Contact(struct inf *add, int flag)
{
	if (flag > 0)
	{
		for (size_t i = 0; i < flag; i++)
			{
				if (add[i].sex=1)
				{
					cout << "姓名：" << add[i].name << "\t\t性别：男" << "\t\t年龄：" << add[i].old << "\t\t电话：" << add[i].number << "\t\t地址：" << add[i].address << endl;
				}
				else
				{
					cout << "姓名：" << add[i].name << "\t\t性别：女" << "\t\t年龄：" << add[i].old << "\t\t电话：" << add[i].number << "\t\t地址：" << add[i].address << endl;
				}
			}
	}
	else
	{
		cout << "当前记录为空" << endl;
	}
}