#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/** \brief Limpia la pantalla, muestra al usuario el men� y devuelve la opci�n elegida
 *
 * \param a Es el primer n�mero
 * \param b Es el segundo n�mero
 *
 * \return Devuelve la opci�n elegida por el usuario
 */
int menu(float a, float b);

/** \brief Limpia la pantalla, pide al usuario un n�mero flotante y lo devuelve
 *
 * \param message Es el mensaje a mostrar
 * \param a Es el n�mero flotante
 * \return Devuelve a
 *
 */
float getFloat(char message[]);

/** \brief Suma dos n�meros flotantes
 *
 * \param a Es el primer n�mero a sumar
 * \param b Es el segundo n�mero a sumar
 * \return Devuelve la suma de los parametros ingresados
 *
 */
float mathsAdd(float a, float b);

/** \brief Resta dos n�meros flotantes
 *
 * \param a Es el primer n�mero a restar
 * \param b Es el segundo n�mero a restar
 * \return Devuelve la resta de los parametros ingresados
 *
 */
float mathsSubtract(float a, float b);

/** \brief Divide dos n�meros flotantes
 *
 * \param a Es el dividendo
 * \param b Es el divisor
 * \return Devuelve la divisi�n de los parametros ingresados
 *
 */
float mathsDivide(float a, float b);

/** \brief Multiplica dos n�meros flotantes
 *
 * \param a Es el multiplicando
 * \param b Es el multiplicador
 * \return Devuelve la multiplicaci�n de los parametros ingresados
 *
 */
float mathsMultiply(float a, float b);

/** \brief Calcula el factorial de un n�mero
 *
 * \param a Es el n�mero ingresado
 *
 * \return Devuelve el factorial del n�mero ingresado
 *
 */
long long int mathsFactorize(int a);

#endif /* FUNCIONES_H_ */
