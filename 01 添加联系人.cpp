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
void Add_Contact(struct inf *add, int flag)
{
	string tmp;
	cout << "������������" << endl;
	cin >> add[flag].name;
	cout << "�������Ա�" << endl;
	cout << "1--��\n2--Ů" << endl;
	cin >> add[flag].sex;
	cout << "���������䣺" << endl;
	cin >> add[flag].old;
	cout << "��������ϵ�绰��" << endl;
	cin >> add[flag].number;
	cout << "�������ͥסַ��" << endl;
	cin >> add[flag].address;
	cout << "��ӳɹ�" << endl;
}