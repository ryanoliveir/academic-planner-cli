#include <iostream>
#include <string>
#include <cstdlib>

const std::string SENDGRID_API_KEY = "sendgrid-api-key";

int main() {
    std::string recipientEmail = "seacello.correa@gmail.com"; // replace with dynamic value
    std::string recipientName = "Recipient Name"; // replace with dynamic value
    std::string content = "ahhhhhhhhhhhrrrrggg"; // replace with dynamic value
    std::string subject = "Bem vindo ao Planner!"; // replace with dynamic value

    std::string command = "curl --request POST "
                          "--url https://api.sendgrid.com/v3/mail/send "
                          "--header \"Authorization: Bearer" + SENDGRID_API_KEY + "\" "
                          "--header \"Content-Type: application/json\" "
                          "--data '{\"personalizations\": [{\"to\": [{\"email\": \"" + recipientEmail + "\"}], "
                          "\"dynamic_template_data\": {\"name\": \"" + recipientName + "\", \"content\": \"" + content + "\", \"subject\": \"" + subject + "\"}}], "
                          "\"from\": {\"email\": \"correa.marcelo@aluno.ifsp.edu.br\"}, "
                          "\"template_id\": \"d-8d940b6760ef4abc9b1e963c6c50a448\"}'";

    std::system(command.c_str());
    return 0;
}
