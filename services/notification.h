#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "../db.h"

const std::string SENDGRID_API_KEY = "sendgrid-api-key";
const std::string TEMPLATE_ID = "teste-teste-teste";



class EmailNotifier {
public:
  std::string recipientName = "Recipient Name"; 
  std::string content = "Teste de envio de email"; 
  std::string subject = "Bem vindo ao Planner!"; 

  int sendEmail(std::string email) {
    std::string command = "curl --request POST "
                          "--url https://api.sendgrid.com/v3/mail/send "
                          "--header \"Authorization: Bearer" + SENDGRID_API_KEY + "\" "
                          "--header \"Content-Type: application/json\" "
                          "--data '{\"personalizations\": [{\"to\": [{\"email\": \"" + email + "\"}], "
                          "\"dynamic_template_data\": {\"name\": \"" + email + "\", \"content\": \"" + content + "\", \"subject\": \"" + subject + "\"}}], "
                          "\"from\": {\"email\": \"correa.marcelo@aluno.ifsp.edu.br\"}, "
                          "\"template_id\": \"" + TEMPLATE_ID +"\"}'";
    std::system(command.c_str());
    return 0;
  }

  void notify(Database& db) {
    std::vector<User> users = db.selectAllFromUsers();

    for (const auto& user : users) {
        this->sendEmail(user.getEmail());
    }
  }
  // Users * getInvitedUsers() {}
  // void * notifyNewInvite() {}
  // void * notifyTripDate() {}

};

#endif 