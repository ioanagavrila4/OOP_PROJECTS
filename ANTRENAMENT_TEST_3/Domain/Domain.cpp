//
// Created by Ioana Gavrila on 31.03.2025.
//
#include "Domain.h"
#include <string>
using namespace std;
Assignment::Assignment(int id, string student_name, string solution){
  this->id = id;
  this->student_name = student_name;
  this->solution = solution;
}
string Assignment::get_student_name(){
  return this->student_name;
}
string Assignment::get_solution(){
  return this->solution;
}
int Assignment::get_id(){
  return this->id;
}
void Assignment::set_student_name(string student_name){
  this->student_name = student_name;
}
void Assignment::set_solution(string solution){
  this->solution = solution;
}
void Assignment::set_id(int id){
  this->id = id;
}