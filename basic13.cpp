#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char gender;
	int age;
	printf("請輸入性別，是男生請輸入b，女生請輸入g\n");
	scanf("%c",&gender);
	printf("請輸入年齡\n");
	scanf("%d",&age);

switch(gender){
	case 'B':
	case 'b':
	{
		if(age>=18){
			printf("在民國100年前可以結婚\n");
		}
		else{
			printf("在民國100年前不可結婚\n");
		}
		break;
	}
	case'G':
	case'g':{
		if(age>=16){
			printf("在民國100年前可以結婚\n");
		}
		else{
			printf("在民國100年前不可結婚\n");
		}
		break;
	}
	default:{
		printf("請輸入正確的代號");
		
	}
	
}
    system("pause"); 
	return 0;
}
