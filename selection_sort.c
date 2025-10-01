#include <stdio.h>

int main() {
    int arr[] = {29, 10, 14};
    int n = 3;
    int i, j, min, temp;

    printf("Before selection sort: " );
    for(i = 0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    printf("\n");




    for (i = 0; i < n - 1; i++) {
        min = i; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j; 
            }
        }
        

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
        
       
        

    }

    printf("after selection sort : ");
    for (i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}
