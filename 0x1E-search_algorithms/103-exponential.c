#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array of integers.
 * @array: A pointer to put in the array
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int binary_search(int *array, int left, int right, int value) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

/**
 * interpolation_search - exponential search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int exponential_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0)
        return -1;

    if (array[0] == value)
        return 0;

    int bound = 1;
    while (bound < size && array[bound] <= value)
        bound *= 2;

    int left = bound / 2;
    int right = (bound < size) ? bound : size - 1;

    return binary_search(array, left, right, value);
}
