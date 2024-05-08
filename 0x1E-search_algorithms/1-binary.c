#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array of integer
 * @size: size of the array
 * @value: search target
 *
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
    int start = 0;
    int end = size - 1;
    int mid;
    size_t i;
    
    while (start <= end)
    {
        mid = (start + end) / 2;
        printf("Searching in array: ");
        for (i = start; i <= (size_t)end; i++)
        {
            printf("%d", array[i]);
            if (i < (size_t)end)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }   
    return (-1);
}
