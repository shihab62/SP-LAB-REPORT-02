#include <stdio.h>


int main() { int a, n;

printf("Enter the lower bound (a): ");


scanf("%d", &a);


printf("Enter the upper bound (n): ");
            scanf("%d", &n);

printf("Prime numbers between %d and %d are:\n\n\b", a, n);


for (int i = a; i <= n; i++)
  { int count = 0;
 





for (int j = 2; j < i; j++) 
{ if (i % j == 0) {
count++; break;
}
}



if (count == 0) printf("%d ", i);
}


return 0;


}
