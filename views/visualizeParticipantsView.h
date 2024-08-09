#ifndef VISUALIZEPARTICIPANTSVIEW_H
#define VISUALIZEPARTICIPANTSVIEW_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "../db.h"
#include "../models/user.h"

int visualizeParticipantsView(Database& db) {
    std::vector<User> users = db.selectAllFromUsers();

    printf("+--------------------------------------------------------+\n");
    printf("|                    Participants                        |\n");
    printf("+--------------------------------------------------------+\n");
    printf("| Name                      | Email                      |\n");
    printf("+--------------------------------------------------------+\n");
    for (const auto& user : users) {
        printf("| %-25s | %-26s |\n", user.getName().c_str(), user.getEmail().c_str());
    }
    printf("+--------------------------------------------------------+\n");
    std::string option;
    std::getline (std::cin, option);
    return 0;
}


#endif 