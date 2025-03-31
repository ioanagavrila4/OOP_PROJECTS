//
// Created by Ioana Gavrila on 31.03.2025.
//

#pragma once
#include "../Service/Service.h"
class ui{
  private:
    Service serv = Service();

  public:
    ui();
    void print_menu();
    void menu();
    void add_assig();
    void see_all();
    void see_check();



};
