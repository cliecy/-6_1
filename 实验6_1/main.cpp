#include "storage.h"
#include"SearchandTraverse.h"
int main() {
	BiTree T;

	int choice = 1;
	while (0 != choice) {
		cout << "请选择功能：1.录入 0.退出" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			if (CreateBiTree(T))
				cout << "二叉树创建成功!" << endl;
			break;

		case 0:
			break;

		default:
			cout << "输入错误！" << endl;
			break;
		}
	}
	TElemType father, mother;
	string b, x;
	father = CreatTElem();
	mother = CreatTElem();
	getline(cin, b);
	getline(cin, x);
	InsertBitree(T, father, mother, b);
	BiTNode k;
	k = Search(T, x);
	DeleteNode(T, k);
	return 0;
}