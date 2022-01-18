#include "Movie.h"

Movie::Movie(
	string film,
	string genre,
	string studio,
	int audienceScore,
	float profitability,
	int rottenTomatoesScore,
	double worldwideGross,
	string year){

	this->film = film;
	this->genre = genre;
	this->studio = studio;
	this->audienceScore = audienceScore;
	this->profitability = profitability;
	this->rottenTomatoesScore = rottenTomatoesScore;
	this->worldwideGross = worldwideGross;
	this->year = year;
}

string Movie::getFilm() {
	return this->film;
}

string Movie::getGenre() {
	return this->genre;
}

string Movie::getStudio() {
	return this->studio;
}

int Movie::getAudienceScore() {
	return this->audienceScore;
}

float Movie::getProfitability() {
	return this->profitability;
}

int Movie::getRottenTomatoesScore() {
	return this->rottenTomatoesScore;
}

double Movie::getWorldwideGross() {
	return this->worldwideGross;
}

string Movie::getYear() {
	return this->year;
}