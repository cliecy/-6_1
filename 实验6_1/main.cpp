#include "storage.h"
#include"SearchandTraverse.h"
int main() {
	BiTree T;

	int choice = 1;
	while (0 != choice) {
		cout << "��ѡ���ܣ�1.¼�� 0.�˳�" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			if (CreateBiTree(T))
				cout << "�����������ɹ�!" << endl;
			break;

		case 0:
			break;

		default:
			cout << "�������" << endl;
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