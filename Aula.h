#ifndef PROJETO_AULA_H
#define PROJETO_AULA_H
#endif //PROJETO_AULA_H

#include <string>
using namespace std;
//!Uma classe Aula
/*!
 * O objetivo é organizar as aulas de acordo com os seus horários
 */
class Aula{
public:
    //!Um construtor
    Aula(){
        this->dia = 0;
        this->horainicio = 0;
        this->horafim = 0;
        this->tipo = "";
    }
    //!??
    /*!
     *
     * @param dia um parâmetro inteiro
     * @param horainicio um parâmetro float
     * @param horafim um parâmetro float
     * @param tipo uma string
     */
    Aula(int dia, float horainicio, float horafim, string tipo){
        this->dia = dia;
        this->horainicio = horainicio;
        this->horafim = horafim;
        this->tipo = tipo;
    }
//! uma função inteira
/*!
 * obtém-se o dia da semana
 * @return  dia
 * \sa gethorainicio(),gethorafim(),gettipo()
 */
    int getdia(){
        return this->dia;
    }
    //! uma função float
    /*!
     * obtém-se a hora inicial da aula
     * @return  horainicio
     * \sa getdia(),gethorafim(),gettipo()
     */
    float gethorainicio(){
        return this->horainicio;
    }
    //! uma função float
    /*!
     * obtém-se a hora final da aula
     * @return  horafim
     * \sa gethorainicio(),getdia(),gettipo()
     */
    float gethorafim(){
        return this->horafim;
    }
    //! uma função float
    /*!
     * através desta função é possível saber se é uma aula teórica ou prática
     * @return  tipo
     * \sa gethorainicio(),gethorafim(),getdia()
     */
    string gettipo(){
        return this->tipo;
    }
//!Parâmetros privados
/*!
 * ??algum objetivo senão apaga
 * /note ??alguma nota para dizer acerca dos parâmetros privados? senão apaga
 */
private:
    int dia;
    float horainicio;
    float horafim;
    string tipo;
};