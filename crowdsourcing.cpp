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

// std::vector<std::string> (std::vector<std::string> name)
// {
    
//     int curr_index = 0
//     while (count < size)
//     {
//         if 
//         {
//             append(user_song, )
//         }
//     }

//     return user_song
// }

int TotalDuration (std::vector<int> duration)
{
    int total = 0;
    int curr_index = 0;
    while (curr_index < duration.size())
    {
        total = total + duration[curr_index];
        curr_index = curr_index + 1;
    }
    return total;

}

int AvgDuration (std::vector<int> duration)
{
    int average = 0;
    TotalDuration % duration.size();

    return average;
}




// if (choice = y)
// {
//     count = count + 1;
// }

//    int times ()
//    {
//     if (choice == "y")
//         {
//             count = count + 1; 
//         }
//    }






int main()
{
    // write your code here
   
    std::vector<std::string> user_song = {};


    std::string choice = "y";

    int total = ();
    int average = ();

    if (choice != "n")
    {
    

        std::cout << "\nEnter the song's title: "; 
        std::string name; 
        std::cin >> name;

        std::cout << "\nEnter the artist: ";
        std::string artist;
        std::cin >> artist;

        std::cout << "\nDuration of song (in seconds): ";
        std::int duration;
        std::cin >> duration; 

        std::cout << "\nWould you like to enter another song? (y/n)\n";
        std::cin >> choice;

        {
            std::cout << total << ", " << average << std::endl;  
        }
      
    }

    return 0;
}
