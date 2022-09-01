/*
The company ABC decided to give a salary increase to its employees, according to the following table:


Salary	            Readjustment Rate
0 - 400.00          15%
400.01 - 800.00     12%
800.01 - 1200.00    10%
1200.01 - 2000.00   7%
Above 2000.00       4%

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, 
with corresponding messages in Portuguese, as the below example.
Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned and the percentual obtained by the employee. 

Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"

Input Sample	Output Sample
400.00          Novo salario: 460.00
                Reajuste ganho: 60.00
                Em percentual: 15 %

800.01          Novo salario: 880.01
                Reajuste ganho: 80.00
                Em percentual: 10 %

2000.00         Novo salario: 2140.00
                Reajuste ganho: 140.00
                Em percentual: 7 %
*/
#include <stdio.h>

int main(){

    double salario;

    scanf("%lf", &salario);

    if(salario<=400){
        printf("Novo salario: %.2lf\n", salario*1.15);
        printf("Reajuste ganho: %.2lf\n", salario*0.15);
        printf("Em percentual: 15 %%\n");
    }
    else if(salario<=800){
        printf("Novo salario: %.2lf\n", salario*1.12);
        printf("Reajuste ganho: %.2lf\n", salario*0.12);
        printf("Em percentual: 12 %%\n");
    }
    else if(salario<=1200){
        printf("Novo salario: %.2lf\n", salario*1.10);
        printf("Reajuste ganho: %.2lf\n", salario*0.10);
        printf("Em percentual: 10 %%\n");
    }
    else if(salario<=2000){
        printf("Novo salario: %.2lf\n", salario*1.07);
        printf("Reajuste ganho: %.2lf\n", salario*0.07);
        printf("Em percentual: 7 %%\n");
    }
    else{
        printf("Novo salario: %.2lf\n", salario*1.04);
        printf("Reajuste ganho: %.2lf\n", salario*0.04);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}