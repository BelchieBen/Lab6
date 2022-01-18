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

int* Movie::extractCSV() {
	string filename = "movies.csv";
	vector<vector<string>>content;
	vector<string>row;
	string line, word;

	vector<Movie> container;

	fstream file(filename, ios::in);
	if (file.is_open()) {
		while (getline(file, line)) {
			row.clear();
			stringstream str(line);

			while (getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);

			int aud;
			int tom;
			int gross;
			float prof;
			stringstream convert;

			convert << row[3];
			convert >> aud;

			convert << row[5];
			convert >> tom;

			convert << row[6];
			convert >> gross;

			convert << row[4];
			convert >> prof;

			Movie m = Movie();
			m.film = row[0];
			m.genre = row[1];
			m.studio = row[2];
			m.audienceScore = aud;
			m.profitability = prof;
			m.rottenTomatoesScore = tom;
			m.worldwideGross = gross;
			m.year = row[7];

			container.push_back(m);
		}
	}
	else
		cout << "Error opening the file\n";

	return 0;

}