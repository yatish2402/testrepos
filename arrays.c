#include<stdio.h> 
#define MAX 50 
void create(int [], int); 
void display(int [], int); 
void insert(int [], int*, int, int); 
void delete(int [], int*, int ); 
int main() 
{ 
  int a[MAX], done=0, n=0, choice, pos, ele; 
   while(!done) 
{ 
    printf("\n1.create\t2.display\t3.insert\n4.delete\t5.exit\n"); 
    printf("enter your choice\n"); 
    scanf("%d", &choice); 
    switch(choice) 
{ 
      case 1: printf("enter the no. of array elements\n"); 
              scanf("%d", &n); 
              create(a,n); 
               break; 
      case 2: display(a,n); 
              break; 
      case 3: insert(a,&n,pos,ele); 
              break; 
      case 4: printf("enter the position of the elements\n"); 
              scanf("%d", &pos); 
              delete(a,&n,pos); 
              break; 
      case 5: done=1; 
              break; 
     default: printf("invalid choice\n");
        }
     }
 return 0;
} 
void create(int a[], int n) 
{
    int i=0; 
    printf("enter the array elements\n"); 
    for (i=0;i<n;i++) 
   { 
      scanf("%d", &a[i]); 
   } 
} 
void display(int a[], int n) 
{ 
    int i; 
    if(n==0) 
   { 
      printf("the array is empty\n"); 
      return; 
    } 
    else 
   { 
      printf("the array elements are\n"); 
      for(i=0;i<n;i++) 
     {
       printf("%d\t", a[i]); 
     } 
  } 
} 
void insert( int a[], int *n, int pos, int ele) 
{ 
    int i=0; 
    printf("enter the position of elements\n"); 
    scanf("%d", &pos); 
    printf("enter the elements\n");
    scanf("%d", &ele); 
    if(*n>=MAX) 
    {
      printf("Insertion is not possible array is full"); 
      return;
    }
    else if(*n==0)
   {
      printf("The array is empty, elements cannot be inserted\n"); 
      return; 
   } 
    else if(pos*n) 
  { 
      printf("Invalid position\n"); 
      return; 
   } 
     else 
    { for(i=*n-1;i>=pos;i--) 
      { 
        a[i+1]=a[i]; 
       } 
        a[pos]=ele; 
        (*n)++; 
       } 
    }
void delete(int a[], int *n, int pos) 
{ 
    int i=0; 
    if(*n==0) 
  { 
     printf("the array is empty, elements cannot be deleted\n"); 
      return; 
   } 
    else if(pos<0|| pos>*n-1) 
   {
      printf("invalid position\n"); 
      return; 
    } 
    else 
    {
      for(i=pos;i<*n;i++) 
    { 
      a[i]=a[i+1]; 
    } 
     (*n)--; 
   } 
}


