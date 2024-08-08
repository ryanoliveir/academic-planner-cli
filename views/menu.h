#include <iostream>
#include <string>
#include <stdlib.h>

std::string menu() {
    printf(" +--------------------------------+\n");
    printf(" | [1] Cadastrar Viagem           |\n");
    printf(" | [2] Visualizar Viagens         |\n");
    printf(" | [3] Convidar Participante      |\n");
    printf(" +--------------------------------+\n");

    printf("  Opcao: ");
    std::string opcao;
    std::getline (std::cin, opcao);

    return opcao;
}
