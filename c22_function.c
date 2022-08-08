void show(int);

void show(int age)
{
	printf("this is c function %d",age);
}


int qube(int num1)
{
	return num1 *num1*num1;
}

main()
{
 show(20);		
 printf("\n%d",qube(2));
}

