#include <stdio.h>
#include <stdlib.h>
#define size 10
int arr[size];
void init()
{
    int i;
    for(i=0;i<size;i++)
    {
        arr[i]=-1;
    }
}
void insert(int n)
{
    int key;
    key = n % size;
    if(arr[key]==-1)
    {
        arr[key]=n;
    }
    else
    {
        printf("Collision Occurs!!!Already an element is present in that location\n");
        printf("%d cannot be inserted\n",n);
    }
}
void delete(int n)
{
    int key;
    key = n % size;
    if (arr[key]==n)
    {
        arr[key]=-1;
    }
    else
    {
        printf("%d is not present in the hash table\n",n);
    }
}
void print()
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}

void search(int n)
{
    int key;
    key = n % size;
    if(arr[key]==n)
    {
        printf("%d is present at arr[%d]\n",n,key);
    }
    else
    {
        printf("%d is not present in the hash table\n",n);
    }
}
int main()
{
    init();
    while(1)
    {
        int ch,n;
        printf("\n1.Insertion\n2.Deletion\n3.Print the values present\n4.Search the value\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d",&n);
                insert(n);
                break;
            case 2:
                printf("Enter the value to delete: ");
                scanf("%d",&n);
                delete(n);
                break;
            case 3:
                print();
                break;
            case 4:
                printf("Enter the element to search: ");
                scanf("%d",&n);
                search(n);
                break;
            case 5:
                printf("Program ends !!!");
                exit(0);
            default:
                printf("Wrong Option");
                break;
        }
    }
}
