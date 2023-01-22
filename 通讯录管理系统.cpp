#include<iostream>
#include<string>
#include"head.h"
using namespace std;
struct inf {
	string name;
	int sex;
	int old;
	string number;
	string address;
};//信息包括（姓名、性别、年龄、联系电话、家庭住址）
int main()
{
	struct inf add[1000];//系统最多记录1000人
	int choose;
	int flag=0;
	while (true)
	{
		interface();
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			Add_Contact(add,flag);
			flag++;
		}break;
		case 2:
		{
			Show_Contact(add,flag);
		}break;
		case 3:
		{
			Delete_Contact(add, &flag);
		}break;
		case 4:
		{
			Find_Contact(add, flag);
		}break;
		case 5:
		{
			Modify_Contact(add, flag);
		}break;
		case 6:
		{
			Empty_Contact(add, &flag);
			flag = 0;
		}break;
		case 0:
			return 0;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}