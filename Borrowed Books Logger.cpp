#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string bookTitle;

    cout << "Enter borrowed book title: ";
    getline(cin, bookTitle);

    // Open in append mode so existing entries are preserved
    ofstream outFile("borrowed_books.txt", ios::app);

    if (!outFile) {
        cerr << "Error: Could not open borrowed_books.txt for writing.\n";
        return 1;
    }

    outFile << bookTitle << "\n";
    outFile.close();

    cout << "Book title \"" << bookTitle << "\" saved to borrowed_books.txt.\n";

    return 0;
}