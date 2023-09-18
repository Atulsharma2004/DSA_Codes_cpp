//wap to input 5 subject marks and print total, subject marks is only 
//accepted when marks is 1 to 100
void main()
{
	int marks,sum=0,i;
	printf("enter 5 marks :");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&marks);
		sum=sum+marks;
	}
printf("total = %d",sum);
	
	
}
	
	
