#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


char str[20] = "";

void encode();
void decode();
void menu();

int random[20];
int save;

void main() {
	printf("-----------------------------------------\n\n");
	printf("      암호화 프로그램\n");
	printf("                    made by 동건\n\n");
	printf("-----------------------------------------\n");
	printf("암호화 하고 싶은 문자를 입력해주세요 : ");
	fgets(str, sizeof(str), stdin);
	menu();

}

void menu() {
	int sel;
	system("cls");
	printf("-----------------------------------------\n\n");
	printf("           문자열 : %s \n\n", str);
	printf("-----------------------------------------\n\n");
	printf("1. 암호화 \n");
	printf("2. 복호화 \n");
	printf("3. 종료\n\n");
	printf("-----------------------------------------\n");
	printf("입력해주세요 : ");
	scanf("%d", &sel);
	while (1) {
		switch (sel) {
		case 1:
			encode();
			break;
		case 2:
			decode();
			break;
		case 3:
			printf("프로그램을 종료합니다.");
			exit(1);
			break;
		} 
	}
	
	
}

void encode() {
	int i;
	for (i = 0; i < strlen(str) - 1; i++) {
		random[i] = rand() % 30 + 1;
	}
	save = strlen(str) - 1;

	for (i = 0; i < save; i++) {
		str[i] = str[i] - random[i];
	}
	printf("\n:: 암호화 완료 ::\n\n");
	system("pause");
	system("cls");
	menu();
}

void decode() {
	int i;
	for (i = 0; i < save; i++) {
		str[i] = str[i] + random[i];
	}
	printf("\n:: 복호화 완료 ::\n\n");
	system("pause");
	system("cls");
	menu();
}
