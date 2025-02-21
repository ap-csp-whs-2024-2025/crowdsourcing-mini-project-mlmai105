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

double AvgDuration (std::vector<int> list)
{
   return (double) TotalDuration(list) / length(list);
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
    std::vector<std::string> user_artist = {};
    std::vector<int> user_duration = {};


    std::string choice = "y";

    // int total = ();
    // int average = ();

    if (choice != "n")
    {
    

        std::cout << "\nEnter the song's title: "; 
        std::string name; 
        std::cin >> name;
        append(user_song, name); //appending the name into the list of the names

        std::cout << "\nEnter the artist: ";
        std::string artist;
        std::cin >> artist;
        append(user_artist, artist);

        std::cout << "\nDuration of song (in seconds): ";
        int duration;
        std::cin >> duration;
        append(user_duration, duration);

        std::cout << "\nWould you like to enter another song? (y/n)\n";
        std::cin >> choice;

        // {
        //     std::cout << total << ", " << average << std::endl;  
        // }
      
    }


    std::cout << "Total Duration: " << TotalDuration(user_duration) << "\nAverage Duration: " << AvgDuration << std::endl;

    return 0;
}
