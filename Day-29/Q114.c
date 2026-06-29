// WAP to create menu-driven array operations system

#include <stdio.h>
#include <windows.h>

int main()
{
    int arr[100], n = 0;
    int choice, i, value, pos;

    do
    {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Update Element\n");
        printf("5. Delete Element\n");
        printf("6. Exit\n");
        printf ("\n");
        Sleep (2000);

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf ("\n");
        Sleep (2000);

        switch(choice)
        {
            case 1:
                printf("No. of elements: ");
                scanf("%d", &n);
                printf ("\n");

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                Sleep (2000);
                break;

            case 2:
                if(n == 0)
                {
                    printf("Array is empty!\n");
                    Sleep (2000);
                }
                
                else
                {
                    printf("Array Elements: ");
                    printf ("\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                    Sleep (2000);
                }
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &value);
                printf ("\n");
                Sleep (2000);

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        Sleep (2000);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Element not found!\n");
                    Sleep (2000);
                }
                break;

                case 4 :
                    printf ("Enter position to update : ");
                    scanf ("%d", &pos);
                    printf ("\n");
                    Sleep (2000);

                    if (pos >= 1 && pos <= n)
                    {
                       printf ("Enter new value : ");
                       scanf ("%d", &value);
                       printf ("\n");
                       Sleep (2000);
                       arr[pos-1] = value;
                       printf ("ELEMENT UPDATED SUCCESSFULLY !\n");
                       Sleep (2000);
                    }
                    else
                    {
                        printf ("INVALID POSITION !\n");
                        Sleep (2000);
                    }
                    break;

                case 5 :
                     printf ("Enter position to delete : ");
                     scanf ("%d", &pos);
                     printf ("\n");
                     Sleep (2000);

                     if (pos >= 1 && pos <= n)
                     {
                        for (i = pos-1; i < n-1; i++)
                        {
                            arr[i] = arr[i+1];
                        }
                        n--;
                        printf ("ELEMENT DELETED SUCCESSFULLY\n");
                        Sleep (2000);
                     }
                     else
                     {
                        printf ("INVALID POSITION !\n");
                        Sleep (2000);
                     }
                     break;

                case 6 :
                    printf ("THANK YOU !\n");
                    break;

                default :
                     printf ("INVALID CHOICE !\n");
        }

    }
    while (choice != 6);

    return 0;
}










































































