#include<stdio.h>

void reverse(char *);               
int my_strlen(const char *);

int main()
{
    char str[30];                           
   
    printf("Enter a string : ");
    scanf("%[^\n]",str);

    reverse(str);                  
  
    printf("Reversed string is: %s\n",str);   
}

int my_strlen(const char *str)            
{
    int count = 0;                      
    while(*str++)
    {
	    count++;  
    }
    return count;
}

void reverse(char *str)           
{
    int i, temp, length = 0;                
    length = my_strlen(str);
    for(i = 0; i < length; i++)             
    {
	    temp = str[length - 1];             
	    str[length - 1] = str[i];
	    str[i] = temp;
	    length--;
    }
}
