#include<stdio.h>
#include<time.h>
int main(int argc, char const *argv[])
{
	int i,j,n,temp,s;
	FILE *p,*q;
	clock_t st,end;
	double cpu_time;
	p=fopen(argv[1],"r");
	q=fopen(argv[2],"w+");
	if(p==NULL)
	{	printf("File can't be open\n");
		return 0;
	}
	fscanf(p,"%d",&s);
	int a[s],b[s];
	for(i=0;i<s;i++)
	{	fscanf(p,"%d ",&n);
		a[i]=n;
		b[i]=n;
	}

	//bubble sort
	st=clock();
	for(i=0;i<s;i++)
	{
		for(j=0;j<s-1-i;j++)
		{
			if(a[j]<a[j+1])
			{	n=a[j];
			a[j]=a[j+1];
			a[j+1]=n;	
			}
		}
	}
	end=clock();
	cpu_time=((double)(end-st))/CLOCKS_PER_SEC;
	
	for(i=0;i<s;i++)
		fprintf(q,"%d\n",b[i]);
	
	printf("cpu time for bubble sort is %f",cpu_time);
	return 0;
}