#include <stdio.h>

int main(){
    char r;
    printf("A donde va a ir juanito al despertarse?\n");
    printf("Es un dia entre semana?(s/n): ");
    scanf("%c", &r);
    if (r == 's'){
        printf("Juanito debe prepararse para ir a la escuela\n");
        printf("esta lloviendo?(s/n): ");
        scanf(" %c", &r);
        if (r == 's'){
            printf("Juanito ira a la escuela en autobus\n");
        }else {
            printf("Juanito ira en bicicleta\n");
        } 
        printf("Juanito regresara a casa a las 16:00PM\n");
    }else {
        printf("Es sabado?(s/n): ");
        scanf(" %c", &r);       
        if (r == 's'){
            printf("Juanito debe prepararse para ir al futbol los sabados\n");
            printf("Su pap%c fue a trabajar?(s/n): ", 160);
            scanf(" %c", &r);  
            if (r == 's'){
                printf("Entonces hay que llamar un taxi para juanito\n");
            }else {
                printf("Entonces que lo lleve su pap%c\n", 160);
            }
        }else {
            printf("Juanito debe prepararse para ir a la piscina los domingos\n");
            printf("Juanito se va en bicicleta\n");
        }
        printf("El pap%c de juanito lo recoge a las 12:00PM y regresan a casa\n", 160);
    }
    printf("Juanito tiene tarea?(s/n): ");
    scanf(" %c", &r); 
    if (r == 's')
    {
        printf("Juanito debe hacer primero su tarea, luego a las ");
    }else {
        printf("Si no tiene tarea entonces a las ");
    }
    printf("20:00PM debe cenar y despues irse a dormir");
}