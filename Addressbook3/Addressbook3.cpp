#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define MAX_ADDRESS 200			// �ִ� �ο� 200���� ����

#pragma warning(disable:4996)

using namespace std;


struct Person {

	int age;
	char name[10];
	char address[20];

};

int Address_Num = 0;


Person AddList[MAX_ADDRESS];


int main()
{


	int num = 0;
	

	while (1) {

		printf("----------�ּҷ�--------\n");
		printf("1. ������ �߰�\n");
		printf("2. ������ ����\n");
		printf("3. ������ ��ȸ\n");
		printf("4. ����\n");
		printf("-----------------------\n");
		printf("��ȣ �Է� : ");
		scanf_s("%d", &num);


		if (num == 1) {


			printf("�̸� : \n");
			scanf("%s",AddList[Address_Num].name);
			
			printf("���� : \n");
			scanf("%d", &AddList[Address_Num].age);
			
			printf("�ּ� : \n");
			scanf("%s",AddList[Address_Num].address);
			
			
			
			printf(" \n �ּҷ��� �߰��Ǿ����ϴ�. \n");


			Address_Num++;

		}
		else if (num == 2) {
			int delete_num;
			printf("������ ��ȣ�� �Է����ּ��� : ");
			scanf("%d \n", &delete_num);


			printf("%d���� �����Ǿ����ϴ�. \n");


		}
		else if (num == 3) {



			for (int i = 0; i < Address_Num; i++) {
			
				printf("[%d] �̸� : %s ���� : %d, �ּ� : %s \n",i+1, AddList[i].name, AddList[i].age, AddList[i].address );
			
			}

		}
		else if (num == 4) {

			printf("���α׷� ����");

			break;
		}
		else {
			printf(" �ٽ� �Է����ּ���. ");
			break;
		}
	}

	return 0;
}