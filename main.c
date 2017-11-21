//
//  main.c
//  TwoArray And Sorting
//
//  Created by Eun Jae Lee on 21/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Sorting - compare 1st and 2nd element

#include <stdio.h>

int main() {

    int a[5], b[5], c[10], i,j,k=0, temp; // c is merging a & b
    
    printf("Enter first 5 array values: \n");
    
    for (i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    
    
    printf("Enter secod 5 array values: \n");
    
    for (i=0; i<5; i++) {
        scanf("%d", &b[i]);
    }
    
    printf("Merged array is \n");
    for (i=0; i<10; i++) {
        if (i>4) { // 0-4
            c[i] = b[k];
            k++;
        }
        else {
            
            c[i] = a[i];
        }
        
        printf("%d \n",c[i]);
    }
    
    printf("Sorting array is  \n");// sort
    
    for (i=0; i<10; i++) {
        for (j=i+1; j<10; j++) { // comparison
            if (c[i] >= c[j]) { // if 1st is greater than 2nd element than swap
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    
    for (i=0; i<10; i++) {
        printf("%d \n", c[i]);
    }
    
    
    getchar();
    //return 0;
}
