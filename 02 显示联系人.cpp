#include<iostream>
#include<string>
using namespace std;
struct inf {
	string name;
	int sex;
	int old;
	string number;
	string address;
};//��Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ��
void Show_Contact(struct inf *add, int flag)
{
	if (flag > 0)
	{
		for (size_t i = 0; i < flag; i++)
			{
				if (add[i].sex=1)
				{
					cout << "������" << add[i].name << "\t\t�Ա���" << "\t\t���䣺" << add[i].old << "\t\t�绰��" << add[i].number << "\t\t��ַ��" << add[i].address << endl;
				}
				else
				{
					cout << "������" << add[i].name << "\t\t�Ա�Ů" << "\t\t���䣺" << add[i].old << "\t\t�绰��" << add[i].number << "\t\t��ַ��" << add[i].address << endl;
				}
			}
	}
	else
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
}