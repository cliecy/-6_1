#include "storage.h"
#include"SearchandTraverse.h"
Status CreateBiTree(BiTree& T) { // 按照相许次序输入创建二叉树
	cout << "请按照先序输入结点信息：姓名、性别、年龄，请在每个数据后加上#，如(A#man#10#),空结点请用空格代替数据" << endl;
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
		CreateBiTree(T->lchild); // 构造左子树
		CreateBiTree(T->rchild); // 构造右子树
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
Status InsertBitree(BiTree& T, TElemType father, TElemType mother ,string b)  //在相应孩子插入其双亲
{
	BiTNode *j, *F, *M;
	F = new BiTNode;
	M = new BiTNode;
	j = Search(T, b);//找到插入的位置//根据你写的search
	j->lchild = F; F->data = father;//插入父亲
	j->rchild = M; M->data = mother;//插入母亲
	F->lchild = F->rchild = NULL;
	M->lchild = M->rchild = NULL;
	return OK;
}
/*BiTNode k;
k = Search(T, string x);*/
Status DeleteNode(BiTree& T, BiTNode k)
{
	if (!k.lchild && !k.rchild)
		delete(&k);//若为叶子节点，则直接删除
	else       //若其有孩子节点，则需先删除孩子节点，再删除该节点
	{
		if(!k.lchild )DeleteNode(T, *k.lchild);
		if (!k.rchild)DeleteNode(T, *k.rchild);
		DeleteNode(T, k);
	}
	return OK;
}


/*
在<string>中的getline函数有四种重载形式：

istream& getline (istream & is, string& str, char delim);
istream& getline (istream && is, string& str, char delim);
istream& getline (istream & is, string& str);

istream& getline (istream&& is, string& str);
用法和上第一种类似，但是读取的istream是作为参数is传进函数的。读取的字符串保存在string类型的str中。

函数的变量：

is    ：表示一个输入流，例如cin。

str   ：string类型的引用，用来存储输入流中的流信息。

delim ：char类型的变量，所设置的截断字符；在不自定义设置的情况下，遇到’\n’，则终止输入。


hi 我改了一下
在联想上也改了一下
*/