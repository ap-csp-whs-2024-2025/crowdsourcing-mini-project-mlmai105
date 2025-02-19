/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

// std::vector<std::string> (std::vector<std::string> user_song)
// {
//     while (count < size)
//     {
//         if 
//         {
//             append(user_song, )
//         }
//     }

//     return user_song
// }





int main()
{
    // write your code here
   
    std::vector<std::string> user_song = {};

    std::string choice = "y";

    while (choice != "n")
    {
        std::cout << "\nEnter the song's title: "; 
        std::string name; 
        std::cin >> name;

        std::cout << "\nEnter the artist: ";
        std::string artist;
        std::cin >> artist;

        std::cout << "\nDuration of song (in seconds): ";
        std::string duration;
        std::cin >> duration; 

        std::cout << "\nWould you like to enter another song? (y/n)\n";
        std::cin >> choice;
    }
   
    return 0;
}
