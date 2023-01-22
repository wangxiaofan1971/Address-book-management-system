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
void Delete_Contact(struct inf *add, int *flag)
{
	string del;
	int tmp;
	cout << "请输入您要删除的联系人" << endl;
	cin >> del;
	for (size_t i = 0; i < *flag; i++)
	{
		if (add[i].name == del)
		{
			cout << "删除成功" << endl;
			tmp = i;
			for (size_t j = tmp; j < *flag; j++)
			{
				add[j] = add[j + 1];
			}
			*flag--;
			return;
		}
	}
	cout << "查无此人" << endl;
}