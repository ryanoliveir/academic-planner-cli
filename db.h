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
        users.emplace_back("Alice", "alice@example.com");
        users.emplace_back("Bob", "bob@example.com");
        users.emplace_back("Charlie", "charlie@example.com");

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