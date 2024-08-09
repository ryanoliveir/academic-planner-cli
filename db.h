#ifndef DATABASE__H
#define DATABASE__H

#include <iostream>
#include <string>
#include <vector>  
#include "models/user.h"
#include "models/travel.h"

class Database {
private:
    std::vector<User> users;
    std::vector<Travel> travels;

public:
    // Constructor
    Database() {
        // Initialize users
        users.emplace_back("Ryan de Oliveira", "ryandehallo229@gmail.com");
        users.emplace_back("Matheus de Souza", "matheus@abdou.com.br");
        users.emplace_back("Marcelo Correa", "macorrea-@hotmail.com");

        // Initialize travels
        travels.emplace_back("Sao Paulo", "2024-08-08");
        travels.emplace_back("Minas Gerais", "2024-08-08");
        travels.emplace_back("Paris", "2024-08-08");
    }

    std::vector<User> selectAllFromUsers() {
      return this->users;
    }

    std::vector<Travel> selectAllFromTravels() {
      return this->travels;
    }

    void insertTravel(std::string travel, std::string date) {
        travels.emplace_back(travel, date);
    }

    void insertUser(std::string name, std::string email) {
        users.emplace_back(name, email);
    }

};

#endif 