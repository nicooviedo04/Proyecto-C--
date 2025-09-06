/*
#include <iostream> //libreria que permite entrada y salida de datos
int main(){
    std::cout << "Hola Mundo" << std::endl; //imprime en pantalla el mensaje Hola Mundo
    return 0;
}
//std::cout -> flujo de salida estandar
//std::endl -> salto de linea
//return 0 -> indica que el programa finalizo correctamente
*/

/*Variables y Tipos de datos en C++
#include <iostream> //libreria que permite entrada y salida de datos
#include <string> //libreria que permite usar el tipo de dato string
int main(){

    //Enteros se usan para representar numeros enteros sin decimales
    int a; //declaracion de variable entera
    a = 5; //asignacion de valor a la variable 

    int b = 10; //declaracion y asignacion de valor a la variable en una sola linea

    //Double y Float se usan para representar numeros con decimales
    float d = 3.14f; //declaracion y asignacion de valor a la variable de tipo float usa 32 bits 7 digitos de precision
    
    double c = 3.14; //declaracion y asignacion de valor a la variable de tipo double usa 64 bits 15 digitos de precision
    
    long double c2 = 3.141592653589793238; //declaracion y asignacion de valor a la variable de tipo long double usa 80 bits 18 digitos de precision
    
    char e = 'A'; //declaracion y asignacion de valor a la variable de tipo char acepta un solo caracter se usa para representar caracteres individuales

    //Booleanos sirven para representar valores de verdad o falsedad se usan en estructuras de control y logica
    bool verdadero = true; //declaracion y asignacion de valor a la variable de tipo booleano 
    bool falso = false; //declaracion y asignacion de valor a la variable de tipo booleano


    //String se usa para representar cadenas de texto
    std::string nombre = "Nicolas"; //declaracion y asignacion de valor a la variable de tipo string
    
    

    //Impresion de valores en pantalla
    std::cout << "Hola " << nombre << std::endl; //imprime en pantalla el mensaje Hola seguido del valor de la variable nombre el string debe estar entre comillas dobles
    std::cout << "El valor de A es: " << a << std::endl; //imprime en pantalla el valor de a
    std::cout << "El valor de B es: " << b << std::endl; //imprime en pantalla el valor de b

 
    
    return 0;
}
*/

/* Uso de const para definir constantes

#include <iostream> //libreria que permite entrada y salida de datos
#include <string> //libreria que permite usar el tipo de dato string
int main(){

    //const -> palabra reservada que indica que el valor de la variable no puede ser modificado despues de su inicializacion
    const float PI = 3.14159f; //declaracion y asignacion de valor a la variable constante de tipo float
    const int EDAD_MINIMA = 18; //declaracion y asignacion de valor a la variable constante de tipo int
    
    //PI = 3.14; //error de compilacion porque se intenta modificar el valor de una constante

    std::cout << "El valor de PI es: " << PI << std::endl; //imprime en pantalla el valor de PI
    std::cout << "La edad minima es: " << EDAD_MINIMA << std::endl; //imprime en pantalla el valor de EDAD_MINIMA

    return 0;
} 
*/

/*Namespaces en C++
#include <iostream> //libreria que permite entrada y salida de datos
#include <string> //libreria que permite usar el tipo de dato string

namespace primero { //definicion del namespace primero
    int x = 1; //declaracion y asignacion de valor a la variable de tipo int dentro del namespace primero}  
}

namespace segundo { //definicion del namespace segundo
    int x = 2; //declaracion y asignacion de valor a la variable de tipo int dentro del namespace segundo
}
int main(){
    using namespace primero; //permite usar los elementos del namespace primero sin necesidad de anteponer el nombre del namespace
    std::cout << "Valor de x usando ´using´ namespace primero: " << x << std::endl; //imprime en pantalla el valor de x en el ambito del namespace primero
    
    int x = 0; //declaracion y asignacion de valor a la variable de tipo int en el ambito global
    std::cout << "Valor de x en el ambito global: " << x << std::endl; //imprime en pantalla el valor de x en el ambito global
    std::cout << "Valor de x en el namespace primero: " << primero::x << std::endl; //imprime en pantalla el valor de x en el namespace primero
    std::cout << "Valor de x en el namespace segundo: " << segundo::x << std::endl; //imprime en pantalla el valor de x en el namespace segundo


    return 0;
}
*/


