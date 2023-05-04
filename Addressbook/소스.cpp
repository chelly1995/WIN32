#include <iostream>
#include <vector>

using namespace std;

#define MAX_NUM 200

// 구조체 배열 사용
/*
struct addressList
{
	char name[10];
	string mail[20];
	string phonenum[10];
	string company_phonenum[10];

};
*/

// 사용자의 정보를 저장하는 구조체

typedef struct {

	string name, mail, phone_type, phonenum, company_phonenum, company_name, rank, company_address;

}User;


























































//int openFile(User* ptr, int *num);

void insert(User* ptr, int* num);
void deleted(User* ptr, int* num);
int search(User* ptr, int* num);
void printAll(User* ptr, int* num);



int main() {

	 int num;
	
	User user[MAX_NUM];	// 사용자 정보를 저장할 구조체 배열
	int person = 0;	// 저장된 user 수

	/*

	int row = 11;
	int col = 200;


	// 2차원 벡터
	// 최대 200건이라고 가정.

	vector<vector<string>> addressBook(col, vector<string>(row, " "));

	// 초기화 할당
	for (int i = 0; i < row; ++i) {			// 주어진 row만큼 반복
	
		for (int j = 0; j < col; j++) {
			
		}
	
	}

//	printf("%d",addressBook.size());
*/
	
// 주소록 

	printf(" ============= 주소록 ============= \n");
	printf("      1. 데이터 보기     \n");
	printf("      2. 데이터 입력     \n");
	printf("      3. 데이터 수정     \n");
	printf("      4. 데이터 삭제     \n");
	printf("      5. 데이터 검색     \n");
	printf("      6. 종       료     \n");
	printf(" ================================== \n");
	printf("         번호 선택 : ");
	scanf_s("%d",&num);


	switch (num) {
	
	case 1:
		
		printf("\n 1. 데이터 보기 \n");
		printAll(user,&person);

		break;

	case 2:

		printf("\n 2. 데이터 입력 \n");
		insert(user, &person);

		break;

	case 3:

		printf("\n 3. 데이터 수정 \n");
		//search(user, &person);
		
		break;

	case 4:

		printf("\n 4. 데이터 삭제 \n");
		deleted(user, &person);
		
		break;
	
	case 5:

		printf("\n 5. 데이터 검색 \n");
		search(user, &person);
		break;

	case 6:
		printf("\n 6. 종료 \n");
		//search(user, &person);
		break;


	}

	return 0;
}


void insert(User*ptr, int* num)
{
	if (*num < MAX_NUM) {
		printf(" 이름 : ");
		scanf_s("%s",ptr[*num].name);
		printf(" 폰 번호 : ");
		scanf_s("%s",ptr[*num].phonenum);


	}



}

void printAll(User* ptr, int* num) {

	int i = 0;
	if (*num > 0) {
	
		for (i = 0; i < *num; i++) {
		
			printf("이름 : %s",ptr[i].name);
			printf("폰 번호 : %s",ptr[i].phonenum);
		
		}
	
	
	}

}


void deleted(User* ptr, int* num)
{}


int search(User* ptr, int* num)
{}