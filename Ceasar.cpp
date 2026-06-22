#include <iostream>
#include <string>
#include <cctype>
#define SHIFT 3
using namespace std;

string ceasar(string text, int shift) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        char base;
        if (isalpha(c)) {
            if (isupper(c)) {
                base = 'A';
            } else {
                base = 'a';
            }
            c = (c - base + shift) % 26 + base;
        }
        result += c;
    }
    return result;
}

int main() {
    string text;
    cout << "Enter the text to encrypt: ";
    getline(cin, text);

    string encrypted = ceasar(text, SHIFT);
    cout << "Encrypted text: " << encrypted << endl;

    return 0;
}