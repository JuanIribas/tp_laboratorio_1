#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

struct{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}typedef sEmployee;

/** \brief Pone todos los isEmpty en Empty
 *
 * \param sEmployee list[] Es la estructura
 * \param len Es el tamaño del vector
 *
 * \return auxReturn Devuelve 0 una vez inicilizados todos los isEmpty
 */
int initEmployees(sEmployee list[], int len);

/** \brief Permite agregar un empleado al Array
 *
 * \param sEmployee list[] Es la estructura
 * \param len Es el tamaño del vector
 * \param accountant Es el contador de empleados
 * \return auxReturn Devuelve 1 si se pudo cargar, y -1 si no se pudo
 */
int addEmployee(sEmployee list[], int len, int accountant);

/** \brief Permite modificar los datos de un empleado en el Array
 *
 * \param sEmployee list[] Es la estructura
 * \param len Es el tamaño del vector
 * \param triggerEmployees Indica si ya hay empleados cargados
 * \return void
 */
void modifyEmployee(sEmployee list[], int len, int triggerEmployees);

/** \brief Permite eliminar un empleado del Array
 *
 * \param sEmployee list[] Es la estructura
 * \param len Es el tamaño del vector
 * \param triggerEmployees Indica si ya hay empleados cargados
 * \return void
 */
void removeEmployee(sEmployee list[], int len, int triggerEmployees);

/** \brief Permite mostrar todos los empleados cargados en el Array
 *
 * \param sEmployee list[] Es la estructura
 * \param len Es el tamaño del vector
 * \param triggerEmployees Indica si ya hay empleados cargados
 * \return void
 */
void printEmployees(sEmployee list[], int len, int triggerEmployees);

/** \brief Permite buscar un empleado mediante su ID
 *
 * \param sEmployee list[] Es la estructura
 * \param len Es el tamaño del vector
 * \param id Es el id del empleado a buscar
 * \return index Devuelve 1 si encontró al empleado y -1 si no lo encontró
 */
int findEmployeeById(sEmployee list[], int len, int id);

/** \brief Busca un espacio vacio en el Array
 *
 * \param sEmployee list[] Es la estructura
 * \param len Es el tamaño del vector
 *
 * \return index Devuelve el ID del lugar vacio o -1 si no encuentra un lugar vacio
 */
int findEmpty(sEmployee list[], int len);

/** \brief Genera un ID
 *
 * \param id Es el ID del empleado
 * \param cont Es el contador
 *
 * \return
 */
int idGenerator(int id, int cont);

#endif /* ARRAYEMPLOYEES_H_ */
