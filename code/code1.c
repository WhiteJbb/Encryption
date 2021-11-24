#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

void menu();


void user();


void cry(char *str);

void key();

int k = 0;

void main()

{

	menu();

}

void menu()

{

	int i=0;

	system("cls");



	for(;;)

	{

		system("cls");

		printf(" \n\n\n\n\n\n ------ 암호화 프로그램 ------ \n");

		printf("§                              §\n");

		printf("§ 1. 메뉴                      §\n");

		printf("§                              §\n");

		printf("§ 2. 종료                      §\n");

		printf("§                              §\n");

		printf(" --------------------------------\n");

		printf("\n숫자 입력 : ");

		scanf("%d",&i);

		getchar();



		if(i<=2)

		{

			break;

		}

		else

		{

			continue;

		}

	}

	

	switch(i)

	{

	case 1:

		user();



	case 2:

		exit(0);

	}



}



void user()

{

	int i=0;
	

	char str[1000];

	system("cls");



	for(;;)

	{


		printf("1. 메세지 입력\n\n");

		printf("2. 암호화\n\n");

		printf("3. 복호화\n\n");

		printf("4. 메인메뉴\n");

		printf("\n숫자 입력 : ");

		scanf("%d",&i);



		if(i>4)

		{

			continue;

		}

			

		switch(i)

		{

		case 1:

			printf("메세지를 입력해 주십시오. \n");

			getchar();

			gets(str);

			break;

		case 2:

			cry(str);
			
            
			break;

		case 3:

			key(str);

			break;

		case 4:

			menu();

			break;

			}

	}

}



void cry(char *str)

{

	int i;

	srand((int)time(NULL));
	
	k = rand() % 60 + 1;
	

	while(str[i]!=NULL)

	{
		str[i]-=k;

		i++;

	}

    printf("\n암호화 완료 : %s \n", str);
    printf("\n사용된 키 : %d \n", k);
}



void key(char *str)

{

	int i=0;



	while(str[i]!=NULL)

	{

		str[i] += k;

		i++;

	}

	printf("\n복호화 완료 : %s \n", str);


}
