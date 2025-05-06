#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Write to file
    ofstream outFile("simple.txt");
    outFile << "Hello, this is a simple file handling example.";
    outFile.close();

    // Read from file
    ifstream inFile("simple.txt");
    string content;

    getline(inFile, content);
    cout << "File content: " << content << endl;
    inFile.close();

    return 0;
}
