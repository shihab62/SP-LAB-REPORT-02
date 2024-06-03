#include <stdio.h>


int main() {
int n, result = 1;


printf("Enter a non-negative integer: ");


scanf("%d", &n);


if (n < 0) {
printf("Factorial is not defined for negative numbers.\n");

}
else {



for (int i = 1; i <= n; i++) { result *= i;
}
printf("Factorial of %d is %d\n", n, result);
 



}
return 0;	}
