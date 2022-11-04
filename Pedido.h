#ifndef PROJETO_PEDIDO_H
#define PROJETO_PEDIDO_H
#endif

#include "Turma.h"
//!Uma classe Pedido
/*!
 * Tem como objetivo para efetuar se for possível a troca de turmas
 */
class Pedido{
public:
    //!??
    /*!
     *
     * @param up número mecanográfico do aluno
     * @param id o nome
     * @param turmaantiga turma em que o aluno pertence
     * @param turmanova turma em que o aluno deseja pertencer
     */
    Pedido(int up, int id, Turma turmaantiga, Turma turmanova){
        this->up = up;
        this->id = id;
        this->turmaantiga = turmaantiga;
        this->turmanova = turmanova;
    }
    //!Uma função inteiro
    /*!
     * obtém se o número mecanográfico
     * @return up
     * \sa getid()
     */
    int getup() const{
        return this->up;
    }
    //!Uma função inteiro
    /*!
     * obtém se o nome do aluno
     * @return id
     * \sa getup()
     */
    int getid() const{
        return this->id;
    }
    //!Uma função da classe Turma
    /*!
     *
     * @return turmaantiga
     */
    Turma getturmaantiga() const{
        return this->turmaantiga;
    }
    //!Uma função da classe Turma
    /*!
     *
     * @return turmanova
     */
    Turma getturmanova() const{
        return this->turmanova;
    }
    //!Parâmetros privados
/*!
 * ??algum objetivo senão apaga
 * /note ??alguma nota para dizer acerca dos parâmetros privados? senão apaga
 */
private:
    int up;
    int id;
    Turma turmaantiga;
    Turma turmanova;

};
