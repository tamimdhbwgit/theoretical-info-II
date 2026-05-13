#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    int vowelcount= 0;
    cout<< "Enter the text: ";
    getline (cin, text);

    for (int i = 0; i< text.length(); i++){
        char c = tolower(text[i]);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
            vowelcount ++;
        }
    }
    cout <<"Total number of vowels in the text is : "<< vowelcount << endl;

    return 0;
}