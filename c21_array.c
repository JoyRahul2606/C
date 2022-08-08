//main()
//{
//	int i[7]={5,2,9,1,6};
//	i[1]=22;
//	i[5]=50;
//	i[6]=150;
//	i[7]=510;
//	
//	printf("%d\n",i);
//	printf("%d\n",i[0]);
//	printf("%d\n",i[3]);
//	int f;
//	for(f=0;f<5;f++)
//	{
//		printf("%d\t",i[f]);
//	}
//	printf("\n\n");
//	for(f=0;f<=sizeof(i)/4;f++)
//	{
//		printf("%d\t",i[f]);
//	}
//}




























main()
{
	int arr[5]={};
	int i;
	for(i=0;i<5;i++)
	{
		printf("the value of arr %d \n",i);
		scanf("%d",&arr[i]);
	}
	printf("\nthe value of array is\n");
	for(i=0;i<5;i++)
	{
		printf("the value of arr %d \n",arr[i]);
	}
}

