//
// Created by Ioana Gavrila on 31.03.2025.
//

#pragma once
#include "../Repository/Repo.h"
#include <vector>
using namespace std;

class Service{
  private:
    Repo repo = Repo();

  public:
    Service();
    void add_from_the_file();
    void add_assignment(Assignment assignment);
    vector<Assignment> display_all_assignments();
    void check_assignments();

};
