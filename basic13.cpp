#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char gender;
	int age;
	printf("�п�J�ʧO�A�O�k�ͽп�Jb�A�k�ͽп�Jg\n");
	scanf("%c",&gender);
	printf("�п�J�~��\n");
	scanf("%d",&age);

switch(gender){
	case 'B':
	case 'b':
	{
		if(age>=18){
			printf("�b����100�~�e�i�H���B\n");
		}
		else{
			printf("�b����100�~�e���i���B\n");
		}
		break;
	}
	case'G':
	case'g':{
		if(age>=16){
			printf("�b����100�~�e�i�H���B\n");
		}
		else{
			printf("�b����100�~�e���i���B\n");
		}
		break;
	}
	default:{
		printf("�п�J���T���N��");
		
	}
	
}
    system("pause"); 
	return 0;
}
