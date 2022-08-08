//writing in file
//fprintf()



//create new file 

//#include<stdio.h>
//main()
//{
//	FILE *fp;
//	fp = fopen("D:\\c\\c JAN 2022\\file1\\file1.txt","w");	//opening file
//	fprintf(fp,"hello this is my first file from Cii \n");	//writing data in file
//	fclose(fp);											//closing file
//}




































//#include<stdio.h>
//main()
//{
//	FILE *fptr;
//	int id;
//	char name[32];
//	float salary;
//	
//	fptr = fopen("D:\\c\\c JAN 2022\\file1\\file1.txt","w+");	//open for writing file
//	if(fptr==NULL)
//	{
//		printf("file does not exists \n");
//		return;
//	}
//	
//	printf("Enter the id\n");
//	scanf("%d",&id);
//	fprintf(fptr,"ID=%d\n",id);
//	
//	printf("Enter the name\n");
//	scanf("%s",name);
//	fprintf(fptr,"NAME=%S\n",name);
//	
//	printf("Enter the salary\n");
//	scanf("%f",&salary);
//	fprintf(fptr,"SALARY=%.2f\n",salary);
//	
//	fclose(fptr);											//closing file
//}





















//c fputc() and fgetc()
//writing file: fputc() function



//#include<stdio.h>
//main()
//{
//	FILE *fp;
//	fp=fopen("D:\\c\\c JAN 2022\\file1\\demo2.txt","w");
//	fputc('a',fp);											//writing single character into file
//	fclose(fp);
//}





































//reading file :fgetc()

//#include<stdio.h>
//#include<conio.h>
//main()
//{
//	FILE *fp;
//	char c;
//	fp=fopen("D:\\c\\c JAN 2022\\file1\\demo2.txt","r");
//	
//	while((c=fgetc(fp))!=EOF)
//	{
//		printf("%c",c);
//	}
//											//writing single character into file
//	fclose(fp);
//}

































//fputs() and fgets()

//writing file fputs() function

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	FILE *fp;
//	
//	fp=fopen("D:\\c\\c JAN 2022\\file1\\demo3.txt","w");
//	fputs("hello world",fp);										//writing single character into file
//	fclose(fp);
//}













