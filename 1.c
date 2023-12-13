/*
Q.1 Write a program to add, subtract, and multiply two 2D arrays of the same size.

output:-----

Enter the row :3
Enter the column :3
Enter the values:1
2
3
4
5
6
7
8
9
3
6
5
34
7
8
9
1
2
Addition Value:
        4       8       8
        38      12      14
        16      9       11
subtract Value:
        -2      -4      -2
        -30     -2      -2
        -2      7       7
multi Value:
        3       12      15
        136     35      48
        63      8       18
        
        
*/
#include<stdio.h>
int main()
{
  int r,c,a[10][10],i,j,b[10][10],t[10][10];
  printf("Enter the row :");
  scanf("%d",&r);
  printf("Enter the column :");
  scanf("%d",&c);
  printf("Enter the values:");
  
  
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      t[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("Addition Value:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("\t%d",t[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      t[i][j]=a[i][j]-b[i][j];
    }
  }
  printf("subtract Value:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("\t%d",t[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      t[i][j]=a[i][j]*b[i][j];
    }
  }
  printf("multi Value:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("\t%d",t[i][j]);
    }
    printf("\n");
  }
 
}
