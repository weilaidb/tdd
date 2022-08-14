/***
 * Excerpted from "Modern C++ Programming with Test-Driven Development",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material, 
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose. 
 * Visit http://www.pragmaticprogrammer.com/titles/lotdd for more book information.
***/
#ifndef Soundex_h
#define Soundex_h

#include <string>
#include <iostream>
using namespace std;

class Soundex
{
public:
   std::string encode(const std::string& word) const {
       cout << "org word:" << word << endl;


       auto encoded = word.substr(0, 1);
      if (word.length() > 1)
         encoded += "1";
      return zeroPad(encoded);      
   }


private:
   std::string zeroPad(const std::string& word) const {
      auto zerosNeeded = 4 - word.length();
       cout << "word:" << word << endl;
       cout << "zerosNeeded:" << zerosNeeded << endl;
       cout << "std::string(zerosNeeded, '0'):" << std::string(zerosNeeded, '0') << endl;




       return word + std::string(zerosNeeded, '0');
   }
};

#endif
