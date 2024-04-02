#include <stdio.h>
#include <stdlib.h>


// Area de un triangulo

int main() {
    float base;
    float altura;
    
    // Pedir base y altura
    printf("Introduce el valor de la base:");
    scanf("%f", &base);
    
    printf("Introduce el valor de la altura:");
    scanf("%f", &altura);
    
	// Realizar operación
    float area = base*altura/2;
    
    // Mostrar Resultado
    printf("El area del triangulo es: %.2f", area);
    
    printf("\n");

	system("pause");
	
	 
    return 0;
}
