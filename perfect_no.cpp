#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter an integer");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
if(sum==n)
printf("given no is perfect no");
else{
	printf("not a perfect no");
}
    return 0;
}
