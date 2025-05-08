#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

const int SIZE = 100;

string names[SIZE];
int ids[SIZE];
int scores[SIZE];

int readFile(string filename) {
    ifstream file(filename);
    string line;
    int index = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, idStr, scoreStr;
        getline(ss, name, ',');
        getline(ss, idStr, ',');
        getline(ss, scoreStr, ',');

        names[index] = name;
        ids[index] = stoi(idStr);
        scores[index] = stoi(scoreStr);
        index++;
    }
    file.close();
    return index;
}

void bubbleSortComplex(int count) {
    string tempName;
    int tempId, tempScore;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (scores[j] < scores[j + 1]) {
                // Swap by score
                tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;

                tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;

                tempId = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = tempId;
            }
            else if (scores[j] == scores[j + 1]) {
                // If same score, sort by name
                if (names[j] > names[j + 1]) {
                    tempName = names[j];
                    names[j] = names[j + 1];
                    names[j + 1] = tempName;

                    tempScore = scores[j];
                    scores[j] = scores[j + 1];
                    scores[j + 1] = tempScore;

                    tempId = ids[j];
                    ids[j] = ids[j + 1];
                    ids[j + 1] = tempId;
                }
            }
        }
    }
}

void printRecords(int count) {
    for (int i = 0; i < count; i++) {
        cout << names[i] << " (" << ids[i] << ") - Score: " << scores[i] << endl;
    }
}

int main() {
    int total = readFile("students.txt");
    bubbleSortComplex(total);
    printRecords(total);
    return 0;
}
