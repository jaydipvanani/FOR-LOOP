#include<stdio.h>

main()
{
	int i,n,factorial=1;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		
	factorial=factorial*i;
	}
		printf(" %d\n",factorial);
}
