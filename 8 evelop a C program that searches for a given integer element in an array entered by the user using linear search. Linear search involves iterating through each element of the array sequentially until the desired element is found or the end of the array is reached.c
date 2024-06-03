#include<stdio.h>
int main(){
                int found,tot;
                found=0;
                printf("Enter number of element:");

               int i, n ;
    scanf("%d",&n);
    int name[n];

    for (i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &name[i]);
    }



                 scanf("%d",&tot);

                         for (i=0; i<n; i++){
                             if (name[i]==tot){
                                  found=1;

printf("%d is found at position %d\n", tot, i + 1);
break;

                             }
                         }

                     if (found==0){
                         printf("not found");
                     }


                return 0;}
