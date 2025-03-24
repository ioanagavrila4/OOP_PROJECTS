//
// Created by Ioana Gavrila on 24.03.2025.
//
#include "service.h"

#include <vector>

Service::Service() = default;
Service::Service(const Repo &repo) {
  this->repo = repo;
}
void Service::addMovie(const std::string &title, const std::string &genre, int year, int likes, const std::string &trailer){
  Movie movie = Movie(title, genre, year, likes, trailer);
  this->repo.addMovie(movie);
}
void Service::deleteMovie(int position){
  Movie movie = this->repo.getMovie(position);
  this->repo.removeMovie(movie);
}
void Service::increaseLikes(const std::string &title){
  this->repo.increaseLikes(title);
}
void Service::updateMovie(const std::string &title, const std::string &genre, int year, int likes,const std::string &trailer){
  Movie movie = Movie(title, genre, year, likes, trailer);
  this->repo.updateMovie(movie);
}
int Service::getSizeOfArray(){
  return this->repo.getSize();
}
Movie* Service::getAllMovies(){
  return this->repo.getAllMovies();
}
std::vector<Movie> Service::create_watch_list(){
  std::vector<Movie> watch_list;
  return watch_list;
}

