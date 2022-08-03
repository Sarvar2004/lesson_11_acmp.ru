#include <stdio.h>

int main()
{
    int m,k=1,x;
    scanf("%d",&m);
	do
		{
		scanf("%d",&x);
		if (x>m){
		    m=x;k=1;
		}
		else if(x==m){
		    k++;
		}
	}while(x);
	printf("%d",k);
	

    return 0;
}
