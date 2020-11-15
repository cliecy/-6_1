#include "storage.h"

Status CreateBiTree(BiTree& T){ // 按照先许次序输入创建二叉树
	cout << "请按照先序输入结点信息：姓名、性别、年龄，每输入一个数据请换行（空结点请用三个空格+换行表示）" << endl;
	string wast;
	string name, sex, age;
	getline(cin, wast);//getline(cin,...)是一种获取整行输入的函数
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
		T->data.name = &name; // 生成根节点
		T->data.sex = &sex;
		T->data.age = &age;
		CreateBiTree(T->lchild); // 构造左子树
		CreateBiTree(T->rchild); // 构造右子树
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



*/