#include <iostream>
#include <string>
#include <cstdlib>

const std::string SENDGRID_API_KEY = "sendgrid-api-key";

class EmailNotifier {
    std::string recipientEmail = "seacello.correa@gmail.com"; 
    std::string recipientName = "Recipient Name"; 
    std::string content = "ahhhhhrrrrggg"; 
    std::string subject = "Bem vindo ao Planner!"; 
 

    int sendEmail(std::string email) {
      std::string command = "curl --request POST "
                            "--url https://api.sendgrid.com/v3/mail/send "
                            "--header \"Authorization: Bearer" + SENDGRID_API_KEY + "\" "
                            "--header \"Content-Type: application/json\" "
                            "--data '{\"personalizations\": [{\"to\": [{\"email\": \"" + recipientEmail + "\"}], "
                            "\"dynamic_template_data\": {\"name\": \"" + email + "\", \"content\": \"" + content + "\", \"subject\": \"" + subject + "\"}}], "
                            "\"from\": {\"email\": \"correa.marcelo@aluno.ifsp.edu.br\"}, "
                            "\"template_id\": \"d-8d940b6760ef4abc9b1e963c6c50a448\"}'";
      std::system(command.c_str());
      return 0;
    }

    // Users * getInvitedUsers() {}
    // void * notifyNewInvite() {}
    // void * notifyTripDate() {}

};
