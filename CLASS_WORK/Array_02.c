
// WAP to insert new element at specific position
#include <stdio.h>

int main()
{
    int size, i, n , pos;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter New Element and position:");
    scanf("%d%d",&n,&pos);
    if(pos<=0 || pos>size)
    {
        printf("Invalid Position");

    }

    // else{
    //     for(i=size;i>=pos;i--)
    //     {
    //         arr[i]=arr[i-1];
    //     }
    //     arr[pos-1]=n;
    //     size++;
    // }

    else{
        for(i=pos-1;i<size;i++)
        {
            arr[i]=arr[i+1];
        }
       
        size--;
    }



    printf("The array elements are:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
return 0;
}