#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include "db.h"
#include "utils/helpers.h"

//
// Views
//
#include "views/menu.h"
#include "views/createTripView.h"
#include "views/visualizeTripsView.h"
#include "views/visualizeParticipantsView.h"

int main() {
  Database db;
  
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

    else if (opcao == "4") {
      clear_screen();
      visualizeParticipantsView(db);
    }
  }
  return 0;
}
