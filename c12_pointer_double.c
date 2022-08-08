//what is double pointer?
//the pointer is a variable which stores the address of anther variable.
// and double pointer is address of pointer of variable.






//
//main()
//{
//	int a =1;
//	int *p;
//	int **pp;
//	
//	p	=&a;
//	pp	=&p;
//	printf("the address of a: %x\n",p);
//	printf("the address of p: %x\n",pp);
//	
//	printf("the stored value of p %d\n",*p);
//	printf("the stored value of pp %d\n",*pp);
//	
//		
//}
//
























main()
{
	int a[5] ={1,2,3,4,5};
	int *p=a;
	int i;
	
	printf("the value of elements \n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p+i));
	}
	
		
}















