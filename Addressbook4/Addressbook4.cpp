#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#define MAX_ADDRESS 200			// �ִ� �ο� 200���� ����

#pragma warning(disable:4996)

using namespace std;


struct Person {

/*
	int age;
	char name[10];
	char address[20];
	*/
	//char name[10];
	string name,mail,phone_num,rank;

	string phone_type = "�޴���";
	string home_num = "";
	string fax = "";
	string company_name = "����Ʈķ��(��)";
	string company_address = "��⵵ ������ �д籸 �Ǳ��� 228���� 17 �Ǳ����캥ó�븮2 �̷��ص� 2�� (���� 633)";


	const char* name = name.c_str();

};

int Address_Num = 0;

Person AddList[MAX_ADDRESS];


int main()
{

	int num = 0;

	while (1) {

		printf("---------- �ּҷ� ----------\n");
		printf("1. ������ �߰�\n");
		printf("2. ������ ����\n");
		printf("3. ������ ����\n");
		printf("4. ������ �˻�\n");
		printf("5. ������ ��ȸ\n");
		printf("6. ���� �����\n");
		printf("7. ����\n");
		printf("---------------------------\n");
		printf("��ȣ �Է� : ");
		scanf_s("%d", &num);


		if (num == 1)
		{

			printf("�̸� : ");
			scanf("%s", AddList[Address_Num].name);

			printf("���� : ");
			scanf("%s", AddList[Address_Num].mail);

			printf("�ڵ��� ��ȣ : ");
			scanf("%s", AddList[Address_Num].phone_num);

			printf("���� : ");
			scanf("%s", AddList[Address_Num].rank);


			printf(" \n �ּҷ��� �߰��Ǿ����ϴ�. \n\n");


			Address_Num++;

		}
		else if (num == 2)
		{

			const char* name;	// ������ �̸� ����

			printf("������ �̸��� �Է����ּ��� : ");
			scanf("%s", &name);

			for (int i = 0; i < Address_Num; i++) {
				if (strcmp(AddList[i].name, name) == 0) {
					// char[]�� �񱳴� strcmp�Լ� ���

					/*
					AddList[i].age = AddList[i + 1].age;
					strcpy(AddList[i].name, AddList[i + 1].name);
					strcpy(AddList[i].address, AddList[i + 1].address);

					*/
					printf(" �ּҷ��� �����Ǿ����ϴ�. \n");


				}
			};

			Address_Num--;
		}/*
		else if (num == 3)
		{

			char name[10]; // �˻��� ���ϴ� ����̸� ����
			char temp[20];	// �ּ� �Է�
			int cmd = 0;
			int temp_age;	// ���� �Է�

			printf(" ������ ����� �̸� : ");
			scanf("%s", &name);

			for (int i = 0; i < Address_Num; i++) {

				if (strcmp(AddList[i].name, name) == 0) {
					// char[]�� �񱳴� strcmp�Լ� ���

					printf("[%d] �̸� : %s, ���� : %d, �ּ� : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);

					printf("���� ����� �Է����ּ���. (1. ���� 2. �ּ�) \n");
					scanf("%d", &cmd);

					if (cmd == 1) {

						printf("���� ���� : ");
						scanf("%d", &temp_age);
						AddList[i].age = temp_age;

					}
					else if (cmd == 2) {

						printf("���� �ּ� : ");
						scanf("%s", &temp);
						strcpy(AddList[i].address, temp);


					}

				}
			}
		}
		else if (num == 4)
		{

			char name[10];	// �˻��� ���ϴ� ����̸� ����

			printf("�˻� �̸� : ");
			scanf("%s", &name);

			for (int i = 0; i < Address_Num; i++) {
				if (strcmp(AddList[i].name, name) == 0) {
					// char[]�� �񱳴� strcmp�Լ� ���

					printf("[%d] �̸� : %s, ���� : %d, �ּ� : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);

				}
				else {

					printf(" \n �˻� ����� �����ϴ�.\n\n");

				}
			}

		}
		else if (num == 5)
		{

			printf("\n =============== ��ü ����Ʈ ============== \n\n");

			for (int i = 0; i < Address_Num; i++) {

				printf("[%d] �̸� : %s, ���� : %d, �ּ� : %s \n", i + 1, AddList[i].name, AddList[i].age, AddList[i].address);

			}
			printf("\n");
		}
		else if (num == 6) {

			// ���� �ҷ�����, ���� �����ϱ�
			int cmd = 0;

			if (cmd = 1) {


			}
			else if (cmd = 2) {


			}

			ofstream fout;		// ���� ��� ��ü ����

			fout.open("a.text");

	

			for (int i = 0; i < Address_Num; i++) {

				fout << i + 1 << '\t' << AddList[i].name << '\t' << AddList[i].age << "\t" << AddList[i].address;
				fout << endl;

			}
			printf("\n");

			fout.close(); // ������ �ݽ��ϴ�.

			printf("\n ������ ����Ǿ����ϴ�. \n");


		}*/
		else if (num == 7) {

			printf("���α׷� ����");

			break;
		}
		else {
			printf("\n �ٽ� �Է����ּ���. \n\n");

		}
	}


	return 0;
}

// ���� ����� �߰�
// ���̿��� �ּҷ� ���� -> ����ü ���� string ��ȯ