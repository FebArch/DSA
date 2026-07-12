#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int totalSize;
    int usedSize;
    int* ptr;
};

void createArray(struct myArray* arr, int tSize, int uSize);
void setTable(struct myArray *arr);
void showTable(struct myArray arr);

int main(){
    struct myArray mul2;

    createArray(&mul2, 15, 10);
    setTable(&mul2);
    showTable(mul2);

    free(mul2.ptr);
    return 0;
}

void createArray(struct myArray* arr, int tSize, int uSize){
    (*arr).totalSize = tSize;
    (*arr).usedSize = uSize;
    (*arr).ptr = (int*) malloc(tSize*sizeof(int));
}

void setTable(struct myArray *arr){
    int n;
    printf("Enter the number to store multiplication table of it: ");
    scanf("%d", &n);
    for (int i = 0; i < (*arr).usedSize; i++)
    {
        // (*arr).ptr+i = n * (i+1);
        *((*arr).ptr + i) = n * (i+1);
    }
    
}


void showTable(struct myArray arr){
    for (int i = 0; i < arr.usedSize; i++)
    {
        printf("%d, ", *(arr.ptr + i));
    }
    
}
