#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
/** \brief Toma dos numeros decimales y los suma.
 *
 * \param Primer operando.
 * \param Segundo operando.
 * \return Suma de los dos operando.
 *
 */
float suma(float,float);

/** \brief Toma dos numeros decimales y los resta.
 *
 * \param Primer operando.
 * \param Segundo operando.
 * \return Resta de los dos operando.
 *
 */
float resta(float,float);

/** \brief Toma dos numeros decimales y divide el primero por el segundo.
 *
 * \param Primer operando.
 * \param Segundo operando
 * \return Division entre el primer y el segundo operando.
 *
 */
float division(float,float);

/** \brief Toma dos numeros decimales y los multiplica.
 *
 * \param Primer operando.
 * \param Segundo operando.
 * \return Multiplicacion entre el primer y segundo operando.
 *
 */
float multiplicacion(float,float);

/** \brief toma un numero y calcula su factorial
 *
 * \param Primer operando.
 * \return Factorial del operando.
 *
 */
long long int factorial(int);

/** \brief Pide un numero por medio de un texto y guarda el valor ingresado a una variante.
 *
 * \param Texto que se le muestra al usuario.
 * \return Valor ingresado.
 *
 */
float pedirNumero(char texto []);

/** \brief Verifica si un numero ingresado es un entero o un decimal.
 *
 * \param Numero que se desea verificar.
 * \return Variable de tipo booleans.
 *
 */
float verificarEntero(float);

/** \brief Verifica si la variable del primer operando ha sido ingresada por lo menos una vez.
 *
 * \param Variable tipo booleans.
 * \return Primer operando.
 *
 */
float validarNum(int,char texto[]);

/** \brief Verifica si la variable del segundo operando ha sido ingresada por lo menos una vez.
 *
 * \param Variable tipo booleans.
 * \return Segundo operando.
 *
 */
float validarNum2(int);

/** \brief Verifica si un numero es entero o decimal y muestra un mensaje distinto en cada caso.
 *
 * \param Texto que se mostrara por consola.
 * \param Numero en forma decimal.
 * \return Nada.
 *
 */
void mostrarResultado(char texto[],float);

#endif // FUNCIONES_H _INCLUDED
