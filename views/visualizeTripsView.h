#ifndef VISUALIZETRIPVIEW_H
#define VISUALIZETRIPVIEW_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "../db.h"

int visualizeTripsView(Database& db) {
    std::vector<Travel> travels = db.selectAllFromTravels();

    printf("+--------------------------------------------------------+\n");
    printf("|                     Viagens Agendadas                  |\n");
    printf("+--------------------------------------------------------+\n");
    printf("| Destino                                   | Data       |\n");
    printf("+--------------------------------------------------------+\n");
    for (const auto& travel : travels) {
        printf("| %-41s | %-10s |\n", travel.getName().c_str(), travel.getDate().c_str());
    }
    printf("+--------------------------------------------------------+\n");
    std::string option;
    std::getline (std::cin, option);
    return 0;
}


#endif 