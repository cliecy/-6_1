#include "storage.h"
#include"SearchandTraverse.h"
Status CreateBiTree(BiTree& T) { // ��������������봴��������
	cout << "�밴��������������Ϣ���������Ա����䣬����ÿ�����ݺ����#����(A#man#10#),�ս�����ÿո��������" << endl;
	string wast;
	string name, sex, age;
	getline(cin, wast);
	getline(cin, name, '#');
	getline(cin, sex, '#');
	getline(cin, age, '#');
	if (name == " ")
		T = NULL;
	else {
		if (!(T = new BiTNode))
			return ERROR;
		T->data.name = name;
		T->data.sex = sex;
		T->data.age = age;
		CreateBiTree(T->lchild); // ����������
		CreateBiTree(T->rchild); // ����������
	}
	return OK;
}



TElemType CreatTElem()
{
	TElemType x;
	string name, sex, age;
	getline(cin, name, '#');
	//cout << name << endl;
	getline(cin, sex, '#');
	//cout << sex << endl;
	getline(cin, age, '#');
	x.name = name; x.sex = sex; x.age = age;
	return x;
}
Status InsertBitree(BiTree& T, TElemType father, TElemType mother ,string b)  //����Ӧ���Ӳ�����˫��
{
	BiTNode *j, *F, *M;
	F = new BiTNode;
	M = new BiTNode;
	j = Search(T, b);//�ҵ������λ��//������д��search
	j->lchild = F; F->data = father;//���븸��
	j->rchild = M; M->data = mother;//����ĸ��
	F->lchild = F->rchild = NULL;
	M->lchild = M->rchild = NULL;
	return OK;
}
/*BiTNode k;
k = Search(T, string x);*/
Status DeleteNode(BiTree& T, BiTNode k)
{
	if (!k.lchild && !k.rchild)
		delete(&k);//��ΪҶ�ӽڵ㣬��ֱ��ɾ��
	else       //�����к��ӽڵ㣬������ɾ�����ӽڵ㣬��ɾ���ýڵ�
	{
		if(!k.lchild )DeleteNode(T, *k.lchild);
		if (!k.rchild)DeleteNode(T, *k.rchild);
		DeleteNode(T, k);
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


hi �Ҹ���һ��
��������Ҳ����һ��
*/