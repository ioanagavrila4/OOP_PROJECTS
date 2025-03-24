//
// Created by Ioana Gavrila on 23.03.2025.
//

#include "../Service/service.h"

class UI{
public:
  Service service;
  void run();
  void general_menu();
  void admin_menu();
  void admin_mode();
  void user_mode();
  void user_menu();
  void submenu_for_watchlist();
};
