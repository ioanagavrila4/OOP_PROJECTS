//
// Created by Ioana Gavrila on 31.03.2025.
//

#pragma once
#include <string>
using namespace std;
class Assignment{
  private:
    int id;
    string student_name;
    string solution;

  public:
    Assignment();
    Assignment(int id, string student_name, string solution);
    string get_student_name();
    string get_solution();
    int get_id();
    void toString();
    void set_student_name(string student_name);
    void set_solution(string solution);
    void set_id(int id);
};
