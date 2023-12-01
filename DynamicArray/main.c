#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Asize;
    printf("how many elements should our array have?\n");
    scanf("%d", &Asize);
   
    int* DynamicArray = (int*)malloc(sizeof(int) * Asize);

    for (int i = 0; i < Asize; i++)
    {
        printf("enter integers for an array  ");
        scanf("%d",&DynamicArray[i]);
        
    }
    printf("Elements of Dynamic array:\n");

    for (int i = 0; i < Asize; i++)
    {
        printf("%d\n",DynamicArray[i]);

    }

      return 0;
}