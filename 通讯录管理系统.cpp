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
};//��Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ��
int main()
{
	struct inf add[1000];//ϵͳ����¼1000��
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