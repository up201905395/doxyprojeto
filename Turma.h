#ifndef PROJETO_TURMA_H
#define PROJETO_TURMA_H
#endif
//!Uma classe Turma
/*!
 * Tem como objetivo de obter a lista das cadeiras, distribui-las com os seus respetivos códigos curriculares, o ano curricular e as turmas disponíveis
 */
class Turma{
public:
    //!Um contrutor
    Turma(){
        this->ano = 0;
        this->turma = 0;
    }
    //!??
    /*!
     *
     * @param ano parâmetro inteiro
     * @param turma parâmetro inteiro
     */
    Turma(int ano, int turma){
        this->ano = ano;
        this->turma = turma;
    }
    //!Uma função inteira
    /*!
     * obtém-se o ano curricular
     * @return ano
     * \sa getturma(),setano(),setturma()
     */
    int getano(){
        return this->ano;
    }
    //!Uma função inteira
    /*!
     * obtém-se a turma
     * @return turma
     * \sa getano(),setano(),setturma()
     */
    int getturma(){
        return this->turma;
    }
    //!Uma função vazia
    /*!
     * Serve para mudar de ano
     * @param ano parâmetro inteiro
     * \sa getturma(),getano(),setturma()
     */
    void setano(int ano){
        this->ano = ano;
    }
    //!Uma função vazia
    /*!
     * Serve para mudar de turma
     * @param turma parâmetro inteiro
     * \sa setano(),getano(),getturma()
     */
    void setturma(int turma){
        this->turma = turma;
    }
    //!Um função booleana
    /*!
     * ??Serve para garantir que as cadeiras não
     * @param outra ??
     * @return ??this->turma < outra.turma
     */
    bool operator<(const Turma& outra){
        if(this->ano==outra.ano) return this->turma < outra.turma;
        return this->turma < outra.turma;
    }
    /*!
 * ??algum objetivo senão apaga
 * /note ??alguma nota para dizer acerca dos parâmetros privados? senão apaga
 */
private:
    int ano;
    int turma;
};