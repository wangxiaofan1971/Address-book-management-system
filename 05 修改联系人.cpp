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
void Modify_Contact(struct inf *add, int flag)
{
	string modify;
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	cin >> modify;
	for (size_t i = 0; i < flag; i++)
	{
		if (add[i].name == modify)
		{
			cout << "������������" << endl;
			cin >> add[i].name;
			cout << "�������Ա�" << endl;
			cout << "1--��\n2--Ů" << endl;
			cin >> add[i].sex;
			cout << "���������䣺" << endl;
			cin >> add[i].old;
			cout << "��������ϵ�绰��" << endl;
			cin >> add[i].number;
			cout << "�������ͥסַ��" << endl;
			cin >> add[i].address;
			cout << "�޸ĳɹ�" << endl;
			return;
		}
	}
	cout << "���޴���" << endl;
}