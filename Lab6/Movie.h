#pragma once
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

class Movie {
private:
	string film;
	string genre;
	string studio;
	int audienceScore;
	float profitability;
	int rottenTomatoesScore;
	double worldwideGross;
	string year;

public:
	Movie() = default;
	Movie(
		string film,
		string genre,
		string studio,
		int audienceScore,
		float profitability,
		int rottenTomatoesScore,
		double worldwideGross,
		string year
		);

	string getFilm();
	string getGenre();
	string getStudio();
	int getAudienceScore();
	float getProfitability();
	int getRottenTomatoesScore();
	double getWorldwideGross();
	string getYear();


};