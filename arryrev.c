#include <stdio.h>


void arryrev(int *ptr){
    for (int i = 0, j = 5;i<j; j--, i++)
    {
        int temp= *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", *(ptr + i));
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    arryrev(arr);

    return 0;
}
