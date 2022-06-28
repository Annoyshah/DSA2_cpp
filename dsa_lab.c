#include <stdio.h>

void insert(int n, int num, int index, int list[]);

int main()
{
    int n, num, index;
    int array[n];
    printf("Enter elements of list: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter Number and index that is to be inserted\n");
    scanf("%d %d", &num, &index);
    insert(n, num, index, array);
}

void insert(int n, int num, int index, int list[])
{
    printf("Previous list:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    for (int i = n - 1; i >= index; i--)
    {
        list[i] = list[i - 1];
        list[index - 1] = num;
    }
}