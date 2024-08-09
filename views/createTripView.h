#ifndef CREATETRIPVIEW
#define CREATETRIPVIEW

#include <iostream>
#include <string>
#include <stdlib.h>
#include "../db.h"

int createTripView(Database& db) {
    std::string travel;
    std::string date;
    printf("Viagem: ");
    std::getline (std::cin, travel);
    printf("Data: ");
    std::getline (std::cin, date);
    db.insertTravel(travel, date);

    std::cout<<std::endl<<"Adicionado com suceso!"<<std::endl;
    system("sleep 3");
    return 0;
}


#endif 