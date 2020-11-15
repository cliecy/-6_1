#include "storage.h"

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

	return 0;
}