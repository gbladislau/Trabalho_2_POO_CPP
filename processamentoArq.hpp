#ifndef PROCESSAMENTOARQ_H
#define PROCESSAMENTOARQ_H
#include "candidato.hpp"
#include "partido.hpp"
#include "date.hpp"
#include "sistemaeleitoral.hpp"
#include <vector>

class ProcessamentoArq
{
private:

public:    
    void readConsultaCand(SistemaEleitoral &eleicao);
    void readVotos(SistemaEleitoral &eleicao);
};

#endif