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
void Delete_Contact(struct inf *add, int *flag)
{
	string del;
	int tmp;
	cout << "��������Ҫɾ������ϵ��" << endl;
	cin >> del;
	for (size_t i = 0; i < *flag; i++)
	{
		if (add[i].name == del)
		{
			cout << "ɾ���ɹ�" << endl;
			tmp = i;
			for (size_t j = tmp; j < *flag; j++)
			{
				add[j] = add[j + 1];
			}
			*flag--;
			return;
		}
	}
	cout << "���޴���" << endl;
}