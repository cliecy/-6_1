#include "storage.h"

Status CreateBiTree(BiTree& T){ // ��������������봴��������
	cout << "�밴��������������Ϣ���������Ա����䣬ÿ����һ�������뻻�У��ս�����������ո�+���б�ʾ��" << endl;
	string wast;
	string name, sex, age;
	getline(cin, wast);//getline(cin,...)��һ�ֻ�ȡ��������ĺ���
	getline(cin, name,'#');
	cout << name << endl;
	getline(cin, sex,'#');
	cout << sex << endl;
	getline(cin, age,'#');
	cout << age << endl;

	if (name == " ")
		T = NULL;
	else {
		if(!(T = (BiTree)malloc(sizeof(BiTNode))))
			return ERROR;
		T->data.name = &name; // ���ɸ��ڵ�
		T->data.sex = &sex;
		T->data.age = &age;
		CreateBiTree(T->lchild); // ����������
		CreateBiTree(T->rchild); // ����������
	}
	return OK;
}



/*
��<string>�е�getline����������������ʽ��

istream& getline (istream & is, string& str, char delim);
istream& getline (istream && is, string& str, char delim);
istream& getline (istream & is, string& str);

istream& getline (istream&& is, string& str);
�÷����ϵ�һ�����ƣ����Ƕ�ȡ��istream����Ϊ����is���������ġ���ȡ���ַ���������string���͵�str�С�

�����ı�����

is    ����ʾһ��������������cin��

str   ��string���͵����ã������洢�������е�����Ϣ��

delim ��char���͵ı����������õĽض��ַ����ڲ��Զ������õ�����£�������\n��������ֹ���롣



*/