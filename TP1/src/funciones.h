#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/** \brief Limpia la pantalla, muestra al usuario el menú y devuelve la opción elegida
 *
 * \param a Es el primer número
 * \param b Es el segundo número
 *
 * \return Devuelve la opción elegida por el usuario
 */
int menu(float a, float b);

/** \brief Limpia la pantalla, pide al usuario un número flotante y lo devuelve
 *
 * \param message Es el mensaje a mostrar
 * \param a Es el número flotante
 * \return Devuelve a
 *
 */
float getFloat(char message[]);

/** \brief Suma dos números flotantes
 *
 * \param a Es el primer número a sumar
 * \param b Es el segundo número a sumar
 * \return Devuelve la suma de los parametros ingresados
 *
 */
float mathsAdd(float a, float b);

/** \brief Resta dos números flotantes
 *
 * \param a Es el primer número a restar
 * \param b Es el segundo número a restar
 * \return Devuelve la resta de los parametros ingresados
 *
 */
float mathsSubtract(float a, float b);

/** \brief Divide dos números flotantes
 *
 * \param a Es el dividendo
 * \param b Es el divisor
 * \return Devuelve la división de los parametros ingresados
 *
 */
float mathsDivide(float a, float b);

/** \brief Multiplica dos números flotantes
 *
 * \param a Es el multiplicando
 * \param b Es el multiplicador
 * \return Devuelve la multiplicación de los parametros ingresados
 *
 */
float mathsMultiply(float a, float b);

/** \brief Calcula el factorial de un número
 *
 * \param a Es el número ingresado
 *
 * \return Devuelve el factorial del número ingresado
 *
 */
long long int mathsFactorize(int a);

#endif /* FUNCIONES_H_ */
