//program to find maximum and minimum element in an array

#include <stdio.h>

int main()
{
	int arr[20];
	int i, max, min, n;

	printf("Enter the number of elements:");      //fetching n and n array elements from user
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(i = 0; i < n; i++)
        	scanf("%d",&arr[i]);

	max = arr[0];
	min = arr[0];

        for(i = 1; i < n; i++)                        //looping n times to find max and min
	{                                             //by comparing each element with one another
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	printf("Maximum element is: %d\n", max);
	printf("Minimum element is: %d\n", min);
}
