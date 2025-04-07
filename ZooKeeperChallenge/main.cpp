#include <iostream>
#include <fstream>
#include <sstream>>
#include <string>
#include <vector>
#include "Animals.h"
#include "Hyena.h"
using namespace std;

vector<string> splitBySpace(const string& str) {
    vector<string> result;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        result.push_back(word);
    }
    return result;
}

int main()
{
    string myText = "";
    string myPause = "";

    fstream myFile;
    myFile.open(R"(C:\Users\yourm\Downloads\arrivingAnimals.txt)",ios::in);//read mode
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;

            vector<string> parts;
            stringstream ss(line);
            string item;

            while (getline(ss, item, ',')) {
                item.erase(0, item.find_first_not_of(' \t'));
                item.erase(item.find_last_not_of(' \t') + 1);
                parts.push_back(item);
            }
            // Print the split parts
            for (const auto& part : parts) {
                cout << part << endl;
            }

            int sectionNum = 0;
            for (const auto& part : parts) {
                vector<string> splitWords = splitBySpace(part);
                if (sectionNum == 0) {
                    cout << "Split part " << sectionNum << " (age in years and species) is: " <<
                        part << endl;
                }
                if (sectionNum == 1) {
                    cout << "Split part " << sectionNum << " (birth season) is: " <<
                        part << endl;
                }
                if (sectionNum == 2) {
                    cout << "Split part " << sectionNum << " (color) is: " << part << endl;
                }
                if (sectionNum == 3) {
                    cout << "Split part " << sectionNum << " (weight) is: " << part << endl;
                }
                if (sectionNum == 4) {
                    cout << "Split part " << sectionNum << " (origin part 1) is: " << part << endl;
                }
                if (sectionNum == 5) {
                    cout << "Split part " << sectionNum << " (origin part 2) is: " << part << endl;
                }
                for (const auto& word : splitWords) {
                    cout << word << endl;
                }
                cout << "\n-----\n" << endl; // Separator for clarity
                sectionNum++;
            }
            sectionNum = 0;
            }
        }

    return 0;
}


