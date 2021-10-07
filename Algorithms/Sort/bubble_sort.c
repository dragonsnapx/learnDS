#include <stdio.h>
#include <stdbool.h>
#include "../Utils/array_chk.h"

void bubble_sort(int* arr){
    for (int i = 0; i < ARRAY_SIZE - 1; i++){
        for (int j = 0; j < ARRAY_SIZE - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    bubble_sort(unsorted_arr);
    print_array(unsorted_arr);

    return 0;
}
