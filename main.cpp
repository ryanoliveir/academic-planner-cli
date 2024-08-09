#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include "db.h"
#include "utils/helpers.h"
#include "services/notification.h"

//
// Views
//
#include "views/menu.h"
#include "views/createTripView.h"
#include "views/visualizeTripsView.h"
#include "views/addParticipantView.h"
#include "views/visualizeParticipantsView.h"

int main() {
  Database db;
  EmailNotifier emailNotifier;

  while(true) {
    clear_screen();
    std::string opcao = menu();
    
    if(opcao == "1") {
      clear_screen();
      createTripView(db);
    }
    else if (opcao == "2") {
      clear_screen();
      visualizeTripsView(db);
    }

    else if (opcao == "3") {
      clear_screen();
      addParticipantView(db);
    }

    else if (opcao == "4") {
      clear_screen();
      visualizeParticipantsView(db);
    }
    else if (opcao == "5") {
      clear_screen();
      emailNotifier.notify(db);
      std::cout << "Todos os participantes foram notificados!" << std::endl;
      std::string option;
      std::getline (std::cin, option);
    }
  }
  return 0;
}
