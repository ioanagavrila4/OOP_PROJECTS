//
// Created by Ioana Gavrila on 31.03.2025.
//
#include "Ui.h"
#include <iostream>
#include "../Domain/Domain.h"
#include <vector>
using namespace std;
ui::ui(){
  ;
}
void ui::print_menu(){
  cout << "-----------Assignment Checker-------------" << endl;
  cout << "1. Add Assignment" << endl;
  cout << "2. See all assignments" << endl;
  cout << "3. See check assignments" << endl;
  cout << "4. Exit" << endl;
}
void ui::menu(){
  int choice = 0;
  while(true){
    print_menu();
    cout<<"Choose an option: ";
    cin>>choice;
    if(choice == 1){
      add_assig();
    }
    else if(choice == 2){
      see_all();
    }
    else if(choice == 3){
      see_check();
    }
    else if(choice == 4){
      exit(0);
    }
    else{
      cout<<"Invalid choice!"<<endl;
    }
  }
}
void ui::add_assig(){
  int id;
  string name, solution;
  cout << "You have to check some fields: "<<endl;
  cout<< "ID: "<<endl;
  cin>>id;
  cout<<"Name: "<<endl;
  cin>>name;
  cout<<"Solution: "<<endl;
  cin.ignore(); // Important: Clear any leftover '\n' in the input buffer

getline(cin, solution);
  this->serv.add_assignment(Assignment(id, name, solution));
  cout << "Added Assignment" << endl;
}
void ui::see_all(){
  for(int i = 0; i < this->serv.display_all_assignments().size(); ++i){
    cout << "Assignment "<<i<<": "<<this->serv.display_all_assignments()[i].get_id()<<"  -  "<<this->serv.display_all_assignments()[i].get_student_name()<<"  -  "<<this->serv.display_all_assignments()[i].get_solution()<< endl;

  }
}
void ui::see_check(){
  this->serv.check_assignments();
}