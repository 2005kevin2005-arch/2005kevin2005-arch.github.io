//week14-3b SOIT106_ADVANCE_009
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while (n>0){
		printf("%d", n%10);
		n = n /10;
	}
	printf("\n");
}
