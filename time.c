#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{ 
	clock_t start,end;
 	double cpu_time_used;
 	int i,j,k,n;
 	
 	n=0;
	start=clock();
	while(1)
	{
		for(j=0;j<n;j++)
		   	continue;
		end=clock();
		if((end-start)/CLOCKS_PER_SEC==1)
		break;
		n++;
	}
	printf("linear value of n=%d for time taken is 1 sec\n",n);
	
	n=0;
	start=clock();
	while(1)
	{
		for(i=0;i<n;i++)
		   for(j=0;j<n;j++)
		   	continue;
			n++;
			end=clock();
			if(((end-start)/CLOCKS_PER_SEC)>=1)
			break;
	}
	printf("Square value of n=%d for time taken is 1 sec\n",n);
	
	n=0;
	start=clock();
	while(1)
	{
		for(i=0;i<n;i++)
		   for(j=0;j<n;j++)
		   		for (k=0;k<n;k++)
		   			continue;
			n++;
			end=clock();
			if(((end-start)/CLOCKS_PER_SEC)>=1)
			break;
	}
	printf("Cube value of n=%d for time taken is 1 sec\n",n);

	n=0,i=0;
	start=clock();
	while(1)
	{
		i=pow(2,n);
		for(k=0;k<i;k++)
			continue;
		
		end=clock();
		if(((end-start)/CLOCKS_PER_SEC)>=1)
			break;
		n++;
	}
	printf("2^n value of n=%d for time taken is 1 sec\n",n);
	return 0;	
}
