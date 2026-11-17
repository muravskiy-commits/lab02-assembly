#include <stdio.h>

int process_values(int start, int limit)
{
    int total = 0;

    if (start < limit) {
        for (int i = start; i < limit; i++) {
            total += 2;
        }
    } else {
        total = start - limit;
    }

    return total;
}

int main(void)
{
    int res = process_values(2, 6);
    printf("Result: %d\n", res);

    return 0;
}
