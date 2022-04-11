#include <stdio.h>

int main(void){

    int monto;
    int retirado = 0;
    int b100 = 0, b50 = 0, b20 = 0, b10 = 0, b5 = 0, b1 = 0;


    printf("ingrese monto $20-$5000: ");
    scanf("%d",&monto);
    
    if (monto<20) {
        printf("monto invalido");
        return 1;
    }

    else if (monto>5000) {
        printf("monto invalido");
        return 2;
    }

    while((monto - retirado) >= 100) {

        retirado = retirado + 100;
        b100++;
        
    }
     while((monto - retirado) >= 50) {

        retirado = retirado + 50;
        b50++;
        
    }
     while((monto - retirado) >= 20) {

        retirado = retirado + 20;
        b20++;
        
    }
     while((monto - retirado) >= 10) {

        retirado = retirado + 10;
        b10++;
        
    }
     while((monto - retirado) >= 5) {

        retirado = retirado + 5;
        b5++;
        
    }
     while((monto - retirado) >= 1) {

        retirado = retirado + 1;
        b1++;
        
    }
            printf("monto aceptado!\n");
           
            printf("b100:%d\n",b100);
            printf("b50:%d\n",b50);
            printf("b20:%d\n",b20);
            printf("b10:%d\n",b10);
            printf("b5:%d\n",b5);
            printf("b1:%d\n",b1);

}