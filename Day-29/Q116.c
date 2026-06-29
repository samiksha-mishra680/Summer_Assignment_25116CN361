// WAP to create Inventory Management system

#include <stdio.h>
#include <windows.h>

struct Inventory
{
    int product_id;
    char product_name[50];
    int quantity;
    float price;
};

int main()
{
    struct Inventory p[100];
    int n = 0;
    int choice, i, id, found;
    int qty;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf ("\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf ("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf ("\n");
        Sleep (2000);

        switch(choice)
        {
            case 1:

                printf("Enter Product ID: ");
                scanf("%d", &p[n].product_id);

                printf("Enter Product Name: ");
                scanf("%s", p[n].product_name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);
                printf ("\n");

                n++;
                printf("Product Added Successfully!\n");
                printf ("\n");
                Sleep (2000);
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Products Available!\n");
                    Sleep (2000);
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        printf("\nProduct ID   : %d", p[i].product_id);
                        printf("\nProduct Name : %s", p[i].product_name);
                        printf("\nQuantity     : %d", p[i].quantity);
                        printf("\nPrice        : %.2f\n", p[i].price);
                        Sleep (2000);
                    }
                }
                break;

            case 3:

                found = 0;
                printf("Enter Product ID: ");
                scanf("%d", &id);
                printf ("\n");
                Sleep (2000);

                for(i = 0; i < n; i++)
                {
                    if(p[i].product_id == id)
                    {
                        found = 1;

                        printf("\nProduct ID   : %d", p[i].product_id);
                        printf("\nProduct Name : %s", p[i].product_name);
                        printf("\nQuantity     : %d", p[i].quantity);
                        printf("\nPrice        : %.2f\n", p[i].price);

                        printf ("\n");
                        Sleep (2000);

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product Not Found!\n");
                    Sleep (2000);
                }

                break;

            case 4:

                found = 0;
                printf("Enter Product ID: ");
                scanf("%d", &id);
                printf ("\n");
                Sleep (2000);

                for(i = 0; i < n; i++)
                {
                    if(p[i].product_id == id)
                    {
                        found = 1;

                        printf("Enter New Quantity: ");
                        scanf("%d", &qty);
                        p[i].quantity = qty;

                        printf("Enter New Price: ");
                        scanf("%f", &p[i].price);
                        printf ("\n");

                        printf("Product Updated Successfully!\n");
                        printf ("\n");
                        Sleep (2000);
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product Not Found!\n");
                    Sleep (2000);
                }

                break;

            case 5:

                found = 0;
                printf("Enter Product ID: ");
                scanf("%d", &id);
                printf ("\n");
                Sleep (2000);

                for(i = 0; i < n; i++)
                {
                    if(p[i].product_id == id)
                    {
                        found = 1;

                        for(int j = i; j < n - 1; j++)
                        {
                            p[j] = p[j + 1];
                        }

                        n--;

                        printf("Product Deleted Successfully!\n");
                        Sleep (2000);
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Product Not Found!\n");
                    Sleep (2000);
                }

                break;

            case 6:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}