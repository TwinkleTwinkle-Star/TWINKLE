#include<stdio.h>
int main (void)
{
	int max ;
    int mark;
    printf("enter marks");
	scanf("%d",&mark);

	max=mark;

    while(mark>=0) {
	
        if (max<mark)
			max=mark;
      scanf("%d",&mark);
	
	}
	printf("max is %d",max);

	return 0;

}