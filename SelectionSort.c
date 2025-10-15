#include <stdio.h>

// Selection sort takes run time of O(n²) or Θ(n²)

int main(void)
{
    int numbers[] = {7, 2, 5, 9, 4, 1, 6, 3, 8, 0};

    int size = sizeof(numbers) / sizeof(int);

    for (int i = 0, leastindex, temp; i < size; i++)
    {
        leastindex = i;

        for (int n = i; n < size; n++)
        {
            if (numbers[n] < numbers[leastindex])
                leastindex = n;
        }

        temp = numbers[i];
        numbers[i] = numbers[leastindex];
        numbers[leastindex] = temp;

        // Print process after each step
        printf("{");
        for (int k = 0; k < size; k++)
        {
            printf("%d", numbers[k]);
            if (k < size - 1)
                printf(", ");
        }
        printf("}\n");
    }
    return 0;
}