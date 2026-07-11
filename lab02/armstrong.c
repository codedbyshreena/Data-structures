#include <stdio.h>
#include <math.h>

void main() {
    int start, end, num, temp, remainder, n, result;

    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        result = 0;
        n = 0;
        int countTemp = num;
        while (countTemp != 0) {
            countTemp /= 10;
            n++;
        }
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }
        if (result == num) {
            printf("%d\n", num);
        }
    }
}
