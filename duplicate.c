//program to remove duplicate elements from a string

#include <stdio.h>
 
int my_strlen(const char *str)            //finding length of string by incrementing string characters one by one     
{
    int count = 0;                      
    while(*str++)
    {
	    count++;  
    }
    return count-1;
}

int main()
{
  	char str[100];
  	int i, j, k;
 
  	printf("Enter any String :  ");
        scanf("%[^\n]",str);	

        int len = my_strlen(str); 	
  	for(i = 0; i < len; i++)          //loop through the string
  	{
  	for(j = i + 1; str[j]; )
  	{
  	     if(str[j] == str[i])         //if duplicate element is found, move next element to current position
	     {
  		for(k = j; str[k]; k++) 
		{
		    str[k] = str[k + 1];
		}
		len--;
 	     }
	     else
		j++;    
	}
	}
	printf("After Removing All Duplicates = %s", str);
  	return 0;
}
