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

	fstream file(filename, ios::in);
	if (file.is_open()) {
		while (getline(file, line)) {
			row.clear();
			stringstream str(line);

			while (getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else
		cout << "Error opening the file\n";

	for (int i = 0; i < content.size(); i++) {
		for (int j = 0; j < content[i].size(); j++) {
			cout << content[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;

}