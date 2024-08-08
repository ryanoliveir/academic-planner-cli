#include <iostream>
#include <string>
#include <stdlib.h>

int createTrip() {
    printf("+--------------------------------------------------------+\n");
    printf("|                     Viagens Agendadas                  |\n");
    printf("+--------------------------------------------------------+\n");
    printf("| Destino                                   | Data       |\n");
    printf("+--------------------------------------------------------+\n");
    printf("| São Paulo                                 | 14/08/2024 |\n");
    printf("| Minas Gerais                              | 23/08/2024 |\n");
    printf("| Rio Grande do Sul                         | 03/03/2025 |\n");
    printf("| Rio de Janeiro                            | 13/09/2024 |\n");
    printf("+--------------------------------------------------------+\n");
    printf("Cadastrar viagem: ");
    std::string fullName;
    std::getline (std::cin, fullName);

    return 0;
}
