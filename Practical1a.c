#include <stdio.h>

int main()
{
    int arr[100];
    int i, size, num, pos,up,new_value;

    
    printf("Enter size of the array : ");
    scanf("%d", &size);

    printf("Enter elements in array :\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input new element and position to insert */
    printf("\nEnter element to insert : ");
    scanf("%d", &num);

    printf("\nEnter the element position : ");
    scanf("%d", &pos);

    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        /* Inserting new element*/ 
        /*and  incrementing size */
        arr[pos-1] = num;
        size++; 

        /* Print array after insert operation */
    
        printf("\nArray elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
/*FOR DELETING ELEMENTS*/

printf("\nEnter the position of element to be deleted : \n");
scanf("%d", &pos);

if (pos >= size+1)
printf("Can't be Deleted");
else
{
for (i = pos - 1; i < size -1; i++)
arr[i] = arr[i+1];

printf("\nArray after deleting element\n");

for (i = 0; i < size -1; i++)
printf("%d\n",arr[i]);
}

/*FOR UPDATION*/

printf("Enter the value to be updated: \n");
scanf("%d",&up);

printf("Enter the value you want to update it with: ");
scanf("%d",&new_value);

for(i=0;i<size; i++)
{
    if(up=arr[i])
    {
        up=new_value;
    }
}

printf("New updated array is : ");
for(i=0;i<size;i++){
    printf("%d",arr[i]);
}

    return 0 ;
}
