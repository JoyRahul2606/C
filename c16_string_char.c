//#include<stdio.h>
//main()
//{
//	char cc='abc';
//	printf("%c",cc);
//	
//	char cs[]="abc";
//	printf("\n%s",cs);
//	
//	char cs3[10]="abc";
//	printf("\n%s",cs3);
//	
//	char cs4[]={'a','b','c'};
//	printf("\n%s",cs4);
//	
//	char cs5[10]={'a','b','c'};
//	printf("\n%s",cs5);
//	
//}































//#include<stdio.h>
//main()
//{
//	char name[20];
//	printf("Enter your name");
//	scanf("%s",name);
//	printf("\n%s",name);
//
//}









































#include<stdio.h>
main()
{
	char name[20];
	printf("Enter your name");
	fgets(name,sizeof(name),stdin);
	
	printf("\nname:-");
	puts(name);

}

