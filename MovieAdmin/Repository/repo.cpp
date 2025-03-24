//
// Created by Ioana Gavrila on 23.03.2025.
//

#include "repo.h"

typedef Movie TElem;

Repo::Repo() {
    movies = new DynamicArray<TElem>(20);
    Movie m1("Titanic", "Drama", 1997, 1000000, "https://www.imdb.com/title/tt0120338/");
    movies->addMovie(m1);
    Movie m2("Inception", "Action", 2010, 800000, "https://www.imdb.com/title/tt1375666/");
    movies->addMovie(m2);
    Movie m3("The Shawshank Redemption", "Drama", 1994, 900000, "https://www.imdb.com/title/tt0111161/");
    movies->addMovie(m3);
    Movie m4("The Godfather", "Crime", 1972, 950000, "https://www.imdb.com/title/tt0068646/");
    movies->addMovie(m4);
    Movie m5("The Dark Knight", "Action", 2008, 850000, "https://www.imdb.com/title/tt0468569/");
    movies->addMovie(m5);
    Movie m6("The Lord of the Rings: The Return of the King", "Adventure", 2003, 700000, "https://www.imdb.com/title/tt0167260/");
    movies->addMovie(m6);
    Movie m7("Pulp Fiction", "Crime", 1994, 950000, "https://www.imdb.com/title/tt0110912/");
    movies->addMovie(m7);
    Movie m8("The Lord of the Rings: The Fellowship of the Ring", "Adventure", 2001, 750000, "https://www.imdb.com/title/tt0120737/");
    movies->addMovie(m8);
    Movie m9("The Lord of the Rings: The Two Towers", "Adventure", 2002, 750000, "https://www.imdb.com/title/tt0167261/");
    movies->addMovie(m9);
    Movie m10("Forrest Gump", "Drama", 1994, 900000, "https://www.imdb.com/title/tt0109830/");
    movies->addMovie(m10);
    movies->resize(2);
}

//destructor

Repo::~Repo(){
  delete movies;
}

void Repo::addMovie(const Movie& movie){
  movies->addMovie(movie);
}
void Repo::updateMovie(const Movie& movie){
  movies->updateMovie(movie);
}
void Repo::removeMovie(const Movie& movie){
  movies->deleteMovie(movie.getTitle());
}
void Repo::increaseLikes(const std::string& title){
  movies->increaseLikes(title);
}

int Repo::getSize(){
  return movies->getSize();
}
Movie& Repo::getMovie(int position){
  return movies->get_movie(position);
}
Movie* Repo::getAllMovies(){
  return movies->get_all();
}
