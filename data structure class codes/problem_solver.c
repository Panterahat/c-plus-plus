#include <stdio.h>

int main()
{
    int problems, totalSolved = 0;

    printf("Enter problem number = ");
    scanf("%d", &problems);

    for (int i = 0; i < problems; i++)
    {
        printf("Enter problem solvers for %dth problem:\n", i + 1);

        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            int x;
            scanf("%d", &x);
            if (x == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            totalSolved++;
        }
    }

    printf("Total problems you can solve = %d\n", totalSolved);

    return 0;
}
