#include<stdio.h>

int main(){
    int arr1[]={1,2,3,2,1};
    int arr2[]={5,4,4,5};
    int arr3[]={7,8,9,8,7};
    int arr4[]={2,3,3,2};
    int arr5[]={4,5,6,5,4};

    int size[]={5,4,5,4,5};
    int *arrays[]={arr1, arr2, arr3, arr4, arr5};
    int **ptr = arrays;

    for(int i=0; i<5; i++){
        printf("{");
        for(int j=0; j<size[i]; j++){
            printf("%d", *(*(ptr)+j));
            if(j<size[i] - 1)
                printf(", ");
            }
            printf("\n");   
            ptr ++;
        }
return 0;
    }
