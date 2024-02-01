#include <stdio.h>

main()
{
	int i = 0 , n;
	
	printf("Enter any number: ");
    scanf("%d", &n);
      
   	while ( n != 0){	
    	n = n / 10;
    	i++;
	}
	
	 printf("Total digits: %d", i);
	   
}
