#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include "views/createTrip.h"
#include "views/menu.h"

int main() {
    system("clear");
    std::string opcao = menu();
    if(opcao == "1") {
      system("clear");
      createTrip();
    }
    return 0;
}
