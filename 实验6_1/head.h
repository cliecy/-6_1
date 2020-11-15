#pragma once
#ifndef  HEAD_H
#define HEAD_H

#include <iostream>
#include <stdlib.h>
#include <string>

#define Status int
#define OK 1
#define ERROR 0

using namespace std;

struct TElemType { // ������Ԫ��
	string* name;
	string* sex;
	string* age;
};

typedef struct BiTNode {
	TElemType data;
	struct BiTNode* lchild, * rchild; // ��  ��ĸ
}BiTNode, *BiTree;


#endif // ! HEAD_H
