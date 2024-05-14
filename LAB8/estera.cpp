#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <queue>
using namespace std;

class Compare {
public:
	bool operator() (pair<string, int> p1, pair<string, int> p2) {
		if (p1.second < p2.second)
			return true;
		if (p1.second > p2.second)
			return false;
		if (p1.first < p2.first)
			return false;
		return true;
	}
};

int main()
{
	string estera;
	ifstream myInput("input.txt");
	if (!myInput)
	{
		printf("Fisierul input.txt nu exista!");
		return 0;
	}

	if (!getline(myInput, estera)) {
		printf("Eroare!");
		return 0;
	}

	map<string, int> MAP;

	string cuvant = "";
	int lungime = estera.size();
	for (int i = 0; i < lungime; i++) {
		if (estera[i] == ' ' || estera[i] == '.' || estera[i] == ',') {
			if (MAP.count(cuvant) != 0) {
				MAP[cuvant] += 1;
			}
				MAP.insert({ cuvant, 1 });
				cuvant = "";
		}
		else {
			cuvant += (char)tolower(estera[i]);
		}

	}
	map<string, int>::iterator it = MAP.begin();

	for (auto mapIterator = MAP.begin(); mapIterator != MAP.end(); mapIterator++) {
		printf("%s : %d\n", mapIterator->first.c_str(), mapIterator->second);
	}
	priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> myQueue;
	for (auto mapIterator = MAP.begin(); mapIterator != MAP.end(); mapIterator++) {
		myQueue.push(pair<string, int>(mapIterator->first, mapIterator->second));
	}
	printf("\n\nSortate\n");
	cout << endl;
	while (!myQueue.empty())
	{
		printf("%s => %d\n", myQueue.top().first.c_str(), myQueue.top().second);
		myQueue.pop();
	}
}