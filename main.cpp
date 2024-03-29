#include <iostream>
#include "candidato.hpp"
#include "partido.hpp"
#include "date.hpp"
#include "sistemaeleitoral.hpp"
#include "processamentoArq.hpp"
#include "saida.hpp"
#include <string>

using namespace std;

int main(int argc, const char **argv)
{
    try
    {
        string numeroCargo(argv[1]);
        string pathConsulta(argv[2]);
        string pathVotos(argv[3]);
        string data(argv[4]);

        Date d(data);
        SistemaEleitoral sisEleitoral(numeroCargo, pathConsulta, pathVotos, d);

        readConsultaCand(sisEleitoral);
        readVotos(sisEleitoral);
        geraSaida(sisEleitoral);
    }
    catch (...)
    {
        cerr << "USO: ./deputados <opção_de_cargo> <caminho_arquivo_candidatos> <caminho_arquivo_votacao> <data>" << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}