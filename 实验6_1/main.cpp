#include "storage.h"

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

	return 0;
}