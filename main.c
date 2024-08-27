#include <stdio.h>

int main(void) {
    // Declaración de variables
    float notaDeAsignatura[5]; // Arreglo para 5 notas
    float sumaNotas = 0.0; //Variable para suma de total notas

    printf("\t********************* Calculo promedio Circuitos Digitales II *********************\n");

    // Se usa bucle con for y while para solicitar las notas hasta que sean válidas
    // El conteo de las notas va de uno en uno hasta 5
    for (int i = 0; i < 5; i++) {
        //Se utiliza ciclo While peticion del ejercicio
        while (1) {
            printf("Nota %d: ", i + 1);//Solicitud de notas una a una
            scanf("%f", &notaDeAsignatura[i]);//Captura de notas ingreso por teclado

            // Validacion del rango permitido notas 0 a 5
            if (notaDeAsignatura[i] >= 0.0 && notaDeAsignatura[i] <= 5.0) {
                sumaNotas += notaDeAsignatura[i]; //Realiza la suma y sale
                break; // La nota es válida, salir del bucle while
            } else {
                printf(">> ERROR: Nota incorrecta, debe estar entre 0.0 y 5.0\n");// De lo contrario se mantiene
            }
        }
    }

    // Se calcula el promedio de las notas
    float promedio = sumaNotas / 5;

    // Verificacion de "APROBADO " y "DESAPROBADO"
    printf("\tEl Promedio del estudiante es: %.1f", promedio);
    if (promedio >= 3.0 && promedio <= 5.0) {
        printf("\tAPROBADO\n");
    } else {
        printf("\tDESAPROBADO\n");
    }

    return 0;
}
