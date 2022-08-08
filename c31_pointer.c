//pointer in c
//the pointer in c language is a variable which stores the address of another variable.








//int i=10;
//int* j=i&;

//main()
//{
//	int i=10;
//	printf("%d\n",i);
//	int *j=&i;
//	printf("%d\n",j);
//	printf("%d\n",*j);
//	
//}




























//main()
//{
//	int i=10;
//	printf("value %d\taddress %u",i,&i);
//	
//}












































//main()
//{
//	int a=10, b=20;
//	int *p1=&a, *p2=&b;
//	printf("a is %d and b is %d\n",a,b);
//	printf("p1 is %d and p2 is %d\n",*p1,*p2);
//	*p1=*p1+*p2;
//	*p2=*p1-*p2;
//	*p1=*p1-*p2;
//	printf("p1 is %d and p2 is %d\n",*p1,*p2);
//	printf("a is %d and b is %d\n",a,b);
//}






































//main()
//{
//	int a=10;
//	int *p1;
//	int **pp1;
//	p1=&a;
//	pp1=&p1;
//	printf("address of a %x\n",p1);
//	printf("address of p %x\n",pp1);
//	printf("value of a %d\n",*p1);
//	printf("value of p %d\n",**pp1);
//}






































//main()
//{
//	int a=10;
//	printf("size of pointer %d",sizeof(a));
//	int *p=&a;
//	printf("size of pointer %d",sizeof(*p));
//}











































main()
{
//	int a=10;
//	void *ptr = NULL;
	int *p= NULL;
	char *c= NULL;
	float *f= NULL;
	
//	printf("the pointer size is %d\n",sizeof(ptr));
	printf("the pointer size is %d\n",sizeof(*p));
	printf("the pointer size is %d\n",sizeof(*c));
	printf("the pointer size is %d\n",sizeof(*f));
	
	
	
}

