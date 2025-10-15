#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int numbers[] = {6, 2, 9, 0, 4, 7, 1, 5, 3, 8};

    int size = sizeof(numbers) / sizeof(int);
    int temp;
    bool swap = false;

    for (int j = 0; j < size; j++)
    {
        swap = false;
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                swap = true;
            }
        }

        // Print process after each step
        printf("{");
        for (int k = 0; k < size; k++)
        {
            printf("%d", numbers[k]);
            if (k < size - 1)
                printf(", ");
        }
        printf("}\n");

        if (!swap)
            break;
    }
    return 0;
}