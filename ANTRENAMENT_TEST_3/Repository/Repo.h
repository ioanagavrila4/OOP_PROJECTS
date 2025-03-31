//
// Created by Ioana Gavrila on 31.03.2025.
//

#pragma once
#include "../Domain/Domain.h"
#include <vector>
using namespace std;
class Repo{
  private:
    vector<Assignment> assignments;

  public:
    Repo();
   // ~Repo();
    vector<Assignment> getAssignments();
    void addAssignment(Assignment assignment);
    void solution_in_com();
    void read_from_the_file();
};
