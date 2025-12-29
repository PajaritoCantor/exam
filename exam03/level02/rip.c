/*
Nombre de la tarea: rip
Archivos esperados: *.c, *.h

Funciones permitidas: puts, write

Descripción: Escribe un programa que reciba como argumento 
una cadena que contenga únicamente paréntesis.

Si los paréntesis están desbalanceados (por ejemplo, "())"), 
tu programa deberá eliminar el número mínimo de paréntesis 
para que la expresión sea válida (balanceada).

Por "eliminar", nos referimos a sustituir el carácter por un espacio.

Debes imprimir todas las soluciones posibles (puede haber más de una). 
El orden en que se impriman las soluciones no es importante.

Ejemplos de funcionamiento: (Por razones de legibilidad, 
en los ejemplos el guion bajo _ representa un espacio).

./rip '( ( )'

_ ( )

( _ )

./rip '( ( ( ) ( ) ( ) ) ( ) )'

( ( ( ) ( ) ( ) ) ( ) )

./rip '( ) ( ) ) ( )'

( ) ( ) _ ( )

( ) ( _ ) ( )

( _ ( ) ) ( )

*/
#include <stdio.h>

int is_val(char *str){
    int opened = 0, closed = 0;
    for (int i = 0; str[i]; i++){
        if (str[i] == '(')
            opened++;
        else if (str[i] == ')'){
            if (opened > 0)
                opened--;
            else
                closed++;
        }
    }
    return opened + closed;
}

void rip(char *str, int must_fix, int n_fix, int pos){
    if (n_fix == must_fix){
        if (is_val(str) == 0)
            puts(str);
        return;
    }
    for (int i = pos; str[i]; i++){
        if (str[i] == '(' || str[i] == ')'){
            char c = str[i];
            str[i] = ' ';
            rip(str, must_fix, n_fix + 1, i + 1);           
            str[i] = c;
        }
    }
}

int main(int ac, char **ag)
{
    if (ac != 2 || !ag[1][0])
        return (1);
    int m_fix = is_val(ag[1]);
    if (m_fix == 0)
    {
        puts(ag[1]);
        return (0);
    }
    rip(ag[1], m_fix, 0, 0);
    return (0);
}
