#include <stdio.h>

struct Interval
{
    int st;
    int end;
};

struct Interval stack[100];
int top = -1;

void push(struct Interval x)
{
    stack[++top] = x;
}

struct Interval pop()
{
    return stack[top--];
}

void sortIntervals(struct Interval arr[], int n)
{
    struct Interval temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0 ; j < n - i - 1; j++)
        {
            if (arr[j].st > arr[j + 1].st)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergeIntervals(struct Interval arr[], int n)
{
    sortIntervals(arr, n);

    push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        //{{1,3},{2,4},{6,8},{9,10}} 
        // Overlapping Thai Tyare
        if (arr[i].st <= stack[top].end){

            if (arr[i].end > stack[top].end){ //(Ahiya Ek Vastu Jova Made Che K If Overlapping Is Occurring Then We Cannot Be Push Into Stack We Just Modife The)

                stack[top].end = arr[i].end;
            }
        }
        // Overlapping Na Hoi Tyare
        else{

            push(arr[i]);
        }
    }

    printf("\nMerged Intervals:\n");

    for (int i = 0; i <= top; i++)
    {
        printf("{%d,%d} ", stack[i].st, stack[i].end);
    }
}

int main()
{
    int n;

    printf("Enter Number Of Intervals : ");
    scanf("%d", &n);

    struct Interval arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Start And End Of Interval %d : ", i + 1);
        scanf("%d%d", &arr[i].st, &arr[i].end);
    }

    mergeIntervals(arr, n);

    return 0;
}