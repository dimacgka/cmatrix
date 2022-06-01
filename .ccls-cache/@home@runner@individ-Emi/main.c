#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main(){
  
    int *a;
    int n, m;
    int sum = 0;
  
    printf("Введите количество строк: ");
    scanf("%d", &n);
    printf("\nВведите количество столбцов: ");
    scanf("%d", &m);
    
    a = (int*)malloc(n*m * sizeof(int));
  
    for (int i = 0; i<n; i++)     // цикл по строкам
    {
      for (int j = 0; j<m; j++)  // цикл по столбцам
      {
        printf("a[%d][%d] = ", i, j);
        scanf("%d", (a + i*m + j));
      }
    }
  

    for (int i = 0; i<n; i++)  // цикл по строкам
    {
      for (int j = 0; j<m; j++)  // цикл по столбцам
    {
        printf("%5d ", *(a + i*m + j)); // 5 знакомест под элемент массива
    }
      printf("\n");
    }
  
  
    for(int i=0; i<n; i++)
    {
      sum = 0;
      for (int j=0; j<m; j++)
        sum += *(a + i*m + j);
      printf("Сумма элементов %d-ой строки равна %d\n", i+1, sum);
    }

    printf("\n");

    for(int j=0; j<m; j++)
    {
      sum = 0;
      for (int i=0; i<n; i++)
        sum += *(a + i*m + j);
      printf("Сумма элементов %d-ого столбца равна %d\n", j+1, sum);
    }
  

    free(a);
    getchar();
    return 0;
}