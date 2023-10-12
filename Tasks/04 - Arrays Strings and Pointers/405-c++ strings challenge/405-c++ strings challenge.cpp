#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"425555553\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    int titleloc = input.find("title=");
    string second_half = input.substr(titleloc + 7);
    int secondQuote = second_half.find(">");
    int number = stoi( second_half.substr(0,secondQuote -3));
    cout << "Hidden number is " << number << endl;




    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int the = 0;

    while (iss >> word) {   //Read the next word (if there is one)
        if (word == "the") {
            the++;
        }
        cout << word << endl;   //Output each word in turn
    }
    cout << "There were " << the << " the's in the sentence" << endl;

}

