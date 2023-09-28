#include <stdio.h>
#include <math.h>

int main() {
    float a = 2, b = 8, c = 24, delta, x1, x2;

    if (a == 0) {
        printf("Não é uma equação de 2º grau");
    } else {
       
        delta = pow(b, 2) - 4 * a * c;
        
        if (delta < 0) {
            printf("Não existem raízes reais");
        } else if (delta == 0) {
            x1 = -b / (2 * a); 
            printf("Raiz única: %f", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a); 
            x2 = (-b - sqrt(delta)) / (2 * a); 
            printf("Duas raízes reais: x1: %f, x2: %f", x1, x2);
        }
    }

    return 0;
}
