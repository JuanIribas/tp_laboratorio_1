#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/** \brief Muestra al usuario el menu y devuelve la opción elegida
 *
 * \param a Es el primer numero
 * \param b Es el segundo numero
 *
 * \return Devuelve la opcion elegida por el usuario
 */
int menu(float a, float b);

/** \brief Pide al usuario un numero flotante y lo devuelve
 *
 * \param message Es el mensaje a mostrar
 * \param a Es el numero flotante
 * \return Devuelve a
 *
 */
float getFloat(char message[]);

/** \brief Suma dos numeros flotantes
 *
 * \param a Es el primer numero a sumar
 * \param b Es el segundo numero a sumar
 * \return Devuelve la suma de los parametros ingresados
 *
 */
float mathsAdd(float a, float b);

/** \brief Resta dos numeros flotantes
 *
 * \param a Es el primer numero a restar
 * \param b Es el segundo numero a restar
 * \return Devuelve la resta de los parametros ingresados
 *
 */
float mathsSubtract(float a, float b);

/** \brief Divide dos numeros flotantes
 *
 * \param a Es el dividendo
 * \param b Es el divisor
 * \return Devuelve la division de los parametros ingresados
 *
 */
float mathsDivide(float a, float b);

/** \brief Multiplica dos numeros flotantes
 *
 * \param a Es el multiplicando
 * \param b Es el multiplicador
 * \return Devuelve la multiplicacion de los parametros ingresados
 *
 */
float mathsMultiply(float a, float b);

/** \brief Calcula el factorial de un numero
 *
 * \param a Es el numero ingresado
 *
 * \return Devuelve el factorial del numero ingresado
 *
 */
long int mathsFactorize(int a);

#endif /* FUNCIONES_H_ */
