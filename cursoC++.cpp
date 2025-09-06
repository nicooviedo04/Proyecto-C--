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

/*Typedef y using en C++ serian alias para tipos de datos

#include <iostream> //libreria que permite entrada y salida de datos
#include <string> //libreria que permite usar el tipo de dato string

//typedef std::string text_t; //creacion de un alias para el tipo de dato string usando typedef
//typedef int entero_t; //creacion de un alias para el tipo de dato int usando typedef

using text_t = std::string; //creacion de un alias para el tipo de dato string usando using se prefiere usar using en lugar de typedef en C++
using entero_t = int; //creacion de un alias para el tipo de dato int usando using

int main(){

    text_t nombre = "Nicolas"; //declaracion y asignacion de valor a la variable de tipo text_t (alias de string)
    entero_t edad = 24; //declaracion y asignacion de valor a la variable de tipo entero_t (alias de int)
    
    std::cout << "Hola " << nombre << std::endl; //imprime en pantalla el mensaje Hola seguido del valor de la variable nombre
    std::cout << "Tu edad es: " << edad << std::endl; //imprime en pantalla el mensaje Tu edad es: seguido del valor de la variable edad

    return 0;
}
*/

/*Operadores aritmeticos en C++
#include <iostream> //libreria que permite entrada y salida de datos

int main(){

    int estudiante = 10; //declaracion y asignacion de valor a la variable de tipo int
    
    //Suma
    estudiante += 5; //suma 5 al valor de la variable estudiante usando el operador compuesto +=
    estudiante++; //incrementa en 1 el valor de la variable estudiante usando el operador de incremento ++
   
    //Resta
    estudiante -= 3; //resta 3 al valor de la variable estudiante usando el operador compuesto -=
    estudiante --; //decrementa en 1 el valor de la variable estudiante usando el operador de decremento --
    
    //Multiplicacion
    estudiante *= 2; //multiplica por 2 el valor de la variable estudiante usando el operador compuesto *=
   
    //Division
    estudiante /= 4; //divide por 4 el valor de la variable estudiante usando el operador compuesto /=
    
    //Modulo
    estudiante %= 3; //asigna el residuo de la division de estudiante entre 3 a la variable estudiante usando el operador compuesto %=
   
    
    int a = 10; //declaracion y asignacion de valor a la variable de tipo int
    int b = 3; //declaracion y asignacion de valor a la variable de tipo int

    //operadores aritmeticos
    int suma = a + b; //suma
    int resta = a - b; //resta
    int multiplicacion = a * b; //multiplicacion
    int division = a / b; //division
    int modulo = a % b; //modulo o residuo de la division

    std::cout << "Suma: " << suma << std::endl; //imprime en pantalla el valor de suma
    std::cout << "Resta: " << resta << std::endl; //imprime en pantalla el valor de resta
    std::cout << "Multiplicacion: " << multiplicacion << std::endl; //imprime en pantalla el valor de multiplicacion
    std::cout << "Division: " << division << std::endl; //imprime en pantalla el valor de division
    std::cout << "Modulo: " << modulo << std::endl; //imprime en pantalla el valor de modulo

    return 0;
}
*/

/*Conversión de tipos en C++ se puede hacer de forma implicita o explicita 
#include <iostream> //libreria que permite entrada y salida de datos

int main(){

    //Conversion implicita
    double x = (int)3.14; //conversion explicita de double a int usando el operador de casteo (tipo) valor
    x += 1.5; //suma 1.5 al valor de x lo convierte implicitamente a double y luego lo asigna a x
    std::cout << "Valor de x (int): " << x << std::endl; //imprime en pantalla el valor de x

    //Conversion explicita
    int letra = 100; //declaracion y asignacion de valor a la variable de tipo char
    std::cout << (char)letra << std::endl; //imprime en pantalla el valor de letra convirtiendolo a char usando el operador de casteo (tipo) valor


    //ejempro de ejercicio
    int PCorrecta = 8;
    int PTotal = 10;
    double porcentaje = PCorrecta / (double)PTotal * 100; //conversion explicita de int a double usando el operador de casteo (tipo) valor
    std::cout << "Porcentaje de respuestas correctas: " << porcentaje << "%" << std::endl; //imprime en pantalla el valor de porcentaje

    return 0;
}
*/

/*Entrada de Usuario en C++
#include <iostream> //libreria que permite entrada y salida de datos

//cout << -> operador de insercion
//cin >> -> operador de extraccion

int main(){

    std::string nombre; //declaracion de variable de tipo string
    int edad;

    std::cout << "Ingresa tu nombre completo: "; //imprime en pantalla el mensaje Ingresa tu nombre:
    
    //std::cin >> nombre; //lee el valor ingresado por el usuario y lo asigna a la variable nombre
   
    std::getline(std::cin, nombre); //el getline permite leer una linea completa incluyendo espacios en blanco
    
    //std::ws //elimina los espacios en blanco al inicio de la entrada estandar

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "Hola " << nombre << ", Bienvenido al curso de C++!" << std::endl;
    std::cout << "Tu edad es: " << edad << std::endl;

    return 0;
}
*/

/*Funciones útiles en C++

#include <iostream> //libreria que permite entrada y salida de datos
#include <cmath> //libreria que permite usar funciones matematicas como sqrt, pow, sin, cos, tan, etc.

int main(){

    double x = 3.14;
    double y = 4;
    double z;
    double potencia;

    //algunas funciones utiles de la libreria cmath

    z = std::max (x , y); //funcion que devuelve el valor maximo entre x e y
    z = std::min (x , y); //funcion que devuelve el valor minimo entre x e y
    potencia = std::pow(2 , 3); //funcion que devuelve el valor de 2 elevado a la 3
    z = std::sqrt(25); //funcion que devuelve la raiz cuadrada de 25
    z = std::abs(-10); //funcion que devuelve el valor absoluto de -10
    z = std::round(x); //funcion que redondea el valor de 3.14 al entero mas cercano
    z = std::ceil(x); //funcion que redondea el valor de 3.14 al siguiente entero mayor
    z = std::floor(x); //funcion que redondea el valor de 3.14 al siguiente entero menor

    std::cout << "El valor maximo entre " << x << " y " << y << " es: " << z << std::endl;
    std::cout << "El valor minimo entre " << x << " y " << y << " es: " << z << std::endl;
    std::cout << "El valor de 2 elevado a la 3 es: " << potencia << std::endl;
    std::cout << "La raiz cuadrada de 25 es: " << z << std::endl;
    std::cout << "El valor absoluto de -10 es: " << z << std::endl;
    std::cout << "El valor de " << x << " redondeado es: " << z << std::endl;
    return 0;
}

*/


