#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <vector>
using namespace std;

string encrypt(string text, int shift){
    string result = ""; //string to add the encrypted letters to at the end of the loop
    //for every character in the text
    for(char c: text){
        //if the character is found
        if (isalpha(c)){
            //change the character to uppercase
            c = toupper(c);
            //formula for the ceaser cipher, it takes the ascii code of the char - from the ascii of 'A' + the shift number and divide the sum by 26 then + the ascii for 'A' to the remainder
            c = ((c - 'A' + shift) % 26) + 'A';
        }
        result += c;

    }
    return result;
}

int main(){
    int shift;
    string text;

    //user input for text and cipher key
    cout << "What is the text you want to cipher: " << endl;
    getline(cin, text);
    cout << "What is the cipher Key: ";
    cin >> shift;
    string encryptedscentence = encrypt(text, shift);
    cout << "Your encrypted scentence is: " << encryptedscentence << endl;




 return 0;   
}
