#include <string>

class User {
private:
    std::string id;
    std::string name;
    std::string email;

public:
    User(const std::string& id, const std::string& name, const std::string& email)
        : id(id), name(name), email(email) {}

    void setName(const std::string& name) { this->name = name; }
    void setEmail(const std::string& email) { this->email = email; }

    std::string getId() { return this->id; }
    std::string getName() { return this->name; }
    std::string getEmail() { return this->email; }

};