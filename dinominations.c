#include<stdio.h>
int main()
{
	int amount,numbnotes,count=0,i;
	int dinominations[10] = {2000,500,200,100,50,20,10,5,2,1};
	printf("enter the amount :");
	scanf("%d",&amount);
	
	for(i=0;i<10;i++)
	{
		numbnotes = amount/dinominations[i];
		if(numbnotes)
		{
			amount = amount%dinominations[i];
			printf("%d * %d = %d\n",numbnotes,dinominations[i],numbnotes*dinominations[i]);
			count = count + 1;
		}
	}
	printf("total number of dinominations are = %d",count);
}

/*#include<stdio.h>
int main()
{
	int amount,numbnotes,count=0,i;
	int dinominations[10] = {2000,500,200,100,50,20,10,5,2,1};
	printf("enter the amount you want :");
	scanf("%d",&amount);
	
	for(i=0;i<10;i++)
	{
		//c = c++;
		numbnotes = amount/dinominations[i];
		
		//amount = amount%dinominations[i];
		//printf("%d * %d = %d\n",numbnotes,dinominations[i],numbnotes*dinominations[i]);
		if(numbnotes)
		{
			amount = amount%dinominations[i];
		
			printf("%d * %d = %d\n",numbnotes,dinominations[i],numbnotes*dinominations[i]);
			count = count + numbnotes;
			
		}
		
	}
	//printf("total is completed");
	printf("total number of dinominations = %d",count);
}*/
