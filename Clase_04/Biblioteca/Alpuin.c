/** \brief valida si el entero esta dentro del rango
 *
 * \param valor a validar
 * \param limite inferior del rango
 * \param limite superior del rango
 * \return 1 si el parametro esta dentro del rango. 0 si no lo esta.
 *
 */

int validarRangoEntero (int valor, int lInf, int lSup)
{
    int esValido=1;

    if (valor< lInf||valor>lSup)
    {
        esValido=0;
    }
    return esValido;
}
