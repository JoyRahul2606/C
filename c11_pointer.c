//what is pointer?
//the pointer is a variable which stores the address of anther variable.






//main()
//{
//	int n1=5;
////	printf("%d",n1);
//	int *p;
//	p=&n1;
//	printf("%d",*p);
//	printf("\n var address %d",p);
//
//}
































main()
{
	int n1=5,n2=10;
	printf("the value of n1 is %d\n",n1);
	printf("the value of n2 is %d\n",n2);
	
	int *p1=&n1,*p2=&n2;
	
	printf("the value of p1 is %d\n",*p1);
	printf("the value of p2 is %d\n",*p2);
	
	*p1=*p1+*p2;//p1=5+10 p1=15
	*p2=*p1-*p2;//p2=15-10 p2=5
	*p1=*p1-*p2;//p1=15-5  p1=10

	printf("the value of p1 is %d\n",*p1);
	printf("the value of p2 is %d\n",*p2);
		
	
}


























