//void fun1();
//
//
//
//
//void fun1()
//{
//	printf("thi is my first method");
//}
//
//main()
//{
//	fun1();
//}





































//void sum(int i, int j)
//{
//	printf("total is %d",i+j);
//}
//main()
//{
//	sum(5,6);
//}









































//#include<stdio.h>
//int sum(int i, int j)
//{
//	return i+j;
//}
//
//int sum1(int i)
//{
//	return i*i;
//}
//
//main()
//{
//	printf("%d\n",sum(5,6));
//	printf("%d\n",sum1(2));
//}


































void change(int *num) 
{
	printf("before adding value inside function num = %d\n",*num);
	(*num)+=100;
	printf("after adding value inside function num = %d\n",*num);
}


int main()
{
	int x =100;
	printf("Before function x = %d\n",x);
	change(&x);
	printf("After function call x = %d \n",x);
	
}
