//
// Created by Ioana Gavrila on 31.03.2025.
//
#include "Service.h"
#include <vector>
using namespace std;

Service::Service(){
  this->repo.read_from_the_file();
  }

void Service::add_assignment(Assignment assignment){
  this->repo.addAssignment(assignment);
}
vector<Assignment> Service::display_all_assignments(){
  return this->repo.getAssignments();
}
void Service::check_assignments(){
  this->repo.solution_in_com();
}