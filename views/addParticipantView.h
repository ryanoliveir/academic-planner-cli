#ifndef ADDPARTICIPANT_H
#define ADDPARTICIPANT_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "../db.h"

int addParticipantView(Database& db) {
    std::string name;
    std::string email;

    printf("Nome: ");
    std::getline (std::cin, name);
    printf("Email: ");
    std::getline (std::cin, email);

    db.insertUser(name, email);

    std::cout<<std::endl<<"Adicionado com suceso!"<<std::endl;
    system("sleep 3");
    return 0;
}


#endif 