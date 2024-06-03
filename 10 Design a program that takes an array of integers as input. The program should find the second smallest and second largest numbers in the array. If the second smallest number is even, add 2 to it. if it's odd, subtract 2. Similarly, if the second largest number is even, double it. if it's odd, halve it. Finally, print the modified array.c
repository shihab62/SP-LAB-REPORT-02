#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int name[n];
    if(n>=5){


    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &name[i]);
    }

     int max, max2;
    if (name[0] > name[1]) {
        max = name[0];
        max2 = name[1];
    } else {
        max = name[1];
        max2 = name[0];
    }

    for (i = 2; i < n; i++) {
        if (name[i] > max) {
            max2 = max;
            max = name[i];
        } else if (name[i] > max2 && name[i] != max) {
            max2 = name[i];
        }
    }

    printf(" largest number1 is %d \n", max);
    printf(" largest number2 is %d\n", max2);
    double largest;
    if (max2 % 2 == 0) {
        largest = max2 * 2;
        printf("Even largest: %.0lf\n", largest); 
    } else {
        largest = max2 / 2;   
        printf("Odd largest: %.2lf\n", largest); 
    }


    int min, min2;
    min = name[0];
    min2 = name[0];

    for (i = 1; i < n; i++) {
        if (name[i] < min) {
            min2 = min;
            min = name[i];
        } else if (name[i] < min2 && name[i] != min) {
            min2 = name[i];
        }
    }

    printf("smallest1 is %d\n", min);
    printf("smallest2 is %d\n", min2);


     int smallest ;

    if (min2% 2 == 0) {
        smallest = min2 + 2;
        printf("Even smallest1: %d\n", smallest);
    } else {
        smallest = min2 - 2;
        printf("Odd smallest2: %d\n", smallest);
    }

    }
    else{
            printf("ENTER MIMINUM 5 NUMBER:");
}

        return 0;
}
