#ifndef PROJETO_ALUNO_H
#define PROJETO_ALUNO_H
#endif //PROJETO_ALUNO_H

#include <string>
#include "Turma.h"
#include <map>
using namespace std;
//! Uma classe Aluno
/*!
 * Objetivo deste class é obter os dados de identificação dos alunos e juntar esses mesmos dados ao respetivo aluno
 */
class Aluno{
public:
//! Um construtor
    Aluno(){
        this->nome = "";
        this->up = 0;
        map<int,Turma> m;
        this->turmas = m;
    }
    //!??
    /*!
     *
     * @param n uma string
     * @param u um parâmetro inteiro
     * @param t uma lista
     */
    Aluno(string n, int u, map<int,Turma> t){
        this->nome = n;
        this->up = u;
        this->turmas = t;
    }
//! Uma função string
/*!
 * Irá ser responsável para extrairmos os nomes dos alunos
 * @return nome
 * \sa getup(),getturmas()
 */
    string getnome(){

        return this->nome;
    }
    //!Uma função inteira
    /*!
     * Irá ser responsável para obtermos os números mecanográficos dos alunos
     * @return up
     * \sa getnome(), getturmas()
     */
    int getup(){
        return this->up;
    }
    //!Uma função***
    /*!
     * Através dela, pode se extrair as turmas dos alunos
     * @return turmas
     * \sa getup(),getnome()
     */
    map<int,Turma> getturmas(){
        return this->turmas;
    }
//!Parâmetros privados
/*!
 * ??objetivo se tiver senão apaga esta alínea
 * /note ??alguma nota para dizer acerca dos parâmetros privados? senão apaga
 */
private:
    string nome;
    int up;
    map<int,Turma> turmas;
};