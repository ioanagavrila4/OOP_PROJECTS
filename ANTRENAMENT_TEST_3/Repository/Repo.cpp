//
// Created by Ioana Gavrila on 31.03.2025.
//
#include "Repo.h"
#include <vector>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
#include "../Domain/Domain.h"
#include <fstream>
#include <sstream>
#include <set>
Repo::Repo(){
  ;
}

vector<Assignment> Repo::getAssignments(){
  return this->assignments;
}
void Repo::addAssignment(Assignment assignment){
  this->assignments.push_back(assignment);
  ofstream file("/Users/ioanagavrila/CLionProjects/ANTRENAMENT_TEST_3/info.txt");
  if(!file.is_open()){
    cout<<"File does not exist"<<endl;
  }
  for(int i=0;i<this->assignments.size();i++){
      file <<this->assignments[i].get_id()<<","<<this->assignments[i].get_student_name()<<","<<this->assignments[i].get_solution() <<endl;

  }
}
void Repo::solution_in_com() {
    int no_words_in_com = 0;
    int procent = 0;

    for (size_t i = 0; i < this->assignments.size(); i++) {
        for (size_t j = i + 1; j < this->assignments.size(); j++) {
          //number of words in common
            no_words_in_com = 0;

            //luam separat solutiile 1 si 2(i si j)
            string solution1 = this->assignments[i].get_solution();
            string solution2 = this->assignments[j].get_solution();

            // Convert solution2 into a set for fast lookup
            set<string> words_in_solution2;
            stringstream ss2(solution2);
            string word;
            while (ss2 >> word) {
                words_in_solution2.insert(word);
            }

            int total_no_of_words = 0;

            stringstream ss1(solution1);
            while (ss1 >> word) {
                total_no_of_words++;
                if (words_in_solution2.find(word) != words_in_solution2.end()) {
                    no_words_in_com++;
                   // cout << word << endl;
                }
            }

            //cout << "Total words: " << total_no_of_words << endl;

            if (total_no_of_words > 0) {
                procent = (no_words_in_com * 100) / total_no_of_words;
            } else {
                procent = 0;
            }

            if (procent > 20) {
                cout << this->assignments[i].get_student_name() << "   "
                     << this->assignments[j].get_student_name() << "  ( "
                     << procent << " % )" << endl;
            }
        }
    }
}
void Repo::read_from_the_file(){
  ifstream file("/Users/ioanagavrila/CLionProjects/ANTRENAMENT_TEST_3/info.txt");
  if(!file.is_open()){
    cout<<"File not found"<<endl;
  }
  string line;
  while(getline(file,line)){
    stringstream ss(line);
    string id, name, solution;
    getline(ss, id, ',');
    getline(ss, name, ',');
    getline(ss, solution, ',');
    int id2 = stoi(id);
    Assignment assignment = Assignment(id2, name, solution);
    this->assignments.push_back(assignment);
  }

}
