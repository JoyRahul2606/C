//loop

//#include<stdio.h>
//main()
//{
//	int i;
//	for(i=1;i<5;i++)
//	{
//		printf("%d\n",i);	
//	}
//}









//#include<stdio.h>
//main()
//{
//	int i,j;
//	for(i=1;i<10;i++)
//	{
////		printf("%d\t",i);	
//		for(j=1;j<10;j++)	{		printf("%d  ",j);		}
//		printf("\n");
//	}
////		
//}


















//#include<stdio.h>
//main()
//{
//	int i,j;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\t",i);	
//		
//		for(j=1;j<=i;j++)	
//		{
//			printf("%d  ",j);
//		}
//			
//		printf("\n");
//	}
//}


































//#include<stdio.h>
//main()
//{
//	int i,j;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\t",i);	
//		
//		for(j=i;j<=10;j++)	
//		{
//			printf("%d  ",j);
//		}
//			
//		printf("\n");
//	}
//}


































#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);	
		
		for(j=1;j<=i;j++)
		{			
			printf("  ",j);		
		}
		printf("     ");
		for(j=i;j<=10;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}







