#include <stdio.h>

void isr(float salario){
    if (salario <= 746.94){
        printf("Limite inferior = %2f\n", 746.04);
        printf("Cuota fija = %.2f\n", 0);
        printf("Total ISR = %.2f\n",salario*0.0192);
        return;
    }
    if (salario <= 6332.05){
        printf("Limite inferior = %2f\n", 6332.05);
        printf("Cuota fija = %.2f\n", 14.32);
        printf("Total ISR = %.2f\n",14.32 + salario*0.064);
        return;
    }
    if (salario <= 11128.01){
        printf("Limite inferior = %2f\n", 11128.01);
        printf("Cuota fija = %.2f\n", 371.83);
        printf("Total ISR = %.2f\n",371.83 + salario*0.1088);
        return;
    }
    if (salario <= 12935.82){
        printf("Limite inferior = %2f\n", 12935.82);
        printf("Cuota fija = %.2f\n", 893.63);
        printf("Total ISR = %.2f\n",893.63 + salario*0.16);
        return;
    }
    if (salario <= 15487.71){
        printf("Limite inferior = %2f\n", 15487.71);
        printf("Cuota fija = %.2f\n", 1640.18);
        printf("Total ISR = %.2f\n",1640.18 + salario*0.2136);
        return;
    }
    if (salario <= 31236.50){
        printf("Limite inferior = %2f\n", 31236.50);
        printf("Cuota fija = %.2f\n", 5004.12);
        printf("Total ISR = %.2f\n",5004.12+salario*0.2352);
        return;
    }
    if (salario <= 49233.01){
        printf("Limite inferior = %2f\n", 49233.01);
        printf("Cuota fija = %.2f\n", 9236.89);
        printf("Total ISR = %.2f\n",9236.89+salario*0.30);
        return;
    }
    if (salario <= 93993.91){
        printf("Limite inferior = %2f\n", 93993.91);
        printf("Cuota fija = %.2f\n", 22665.17);
        printf("Total ISR = %.2f\n",22665.17+salario*0.32);
        return;
    }
    if (salario <= 125325.21){
        printf("Limite inferior = %2f\n", 125325.21);
        printf("Cuota fija = %.2f\n", 32691.18);
        printf("Total ISR = %.2f\n",32691.28+salario*0.34);
        return;
    }
    if (salario <= 375975.62){
        printf("Limite inferior = %2f\n", 375975.62);
        printf("Cuota fija = %.2f\n", 117912.32);
        printf("Total ISR = %.2f\n",117912.32+salario*0.35);
        return;
    }

}
int main(){
    float salario;
    printf("Cual es tu salario: ");
    scanf("%f", &salario);
    isr;
    


    return 0;
}