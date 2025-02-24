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

int TotalDuration (std::vector<int> duration)
{
    int total = 0;
    int curr_index = 0;
    while (curr_index < duration.size())
    {
        total = total + duration[curr_index]; //bc total is currently 0, so you add on it
        curr_index = curr_index + 1;
    }
    return total;

}

double AvgDuration (std::vector<int> list)
{
   return (double) TotalDuration(list) / length(list); //turn into double for proper division 
}

void printLongestDurationInfo(std::vector<std::string> name, std::vector<std::string> artist, std::vector<int> duration)
{
    int indexOfMax = 0;
    int maxDuration = duration[0]; //assumes duration has atleast one element
    int curr_index = 0;

    while (curr_index < length(name))
    {
        if (duration[curr_index] > maxDuration) //keep going until the value at that index is bigger than the set max duration
        {
            indexOfMax = curr_index; //curr index of thd list 
            maxDuration = duration[curr_index]; //value of index 
        } 
        curr_index = curr_index + 1; //checks the next index 
    }
    
    //displays the values of each list at the index of max + out of loop bc max is found
    std::cout << "Longest song: " << name[indexOfMax] << "by " << artist[indexOfMax] << "for " << duration[indexOfMax] << " seconds\n";

}



void printShortestDurationInfo(std::vector<std::string> name, std::vector<std::string> artist, std::vector<int> duration)
{
    int indexOfMin = 0;
    int curr_index = 0;
    int MinDuration = duration[0];

    while (curr_index < length(name))
    {
        if (duration[curr_index] < MinDuration)
        {
            indexOfMin = curr_index; // if the index is at 3, the value of 3 which is five is compared with min which is seven, it will be replaced with 5 because its bigger
            MinDuration = duration[curr_index];
        }
        curr_index = curr_index + 1;
    }
    
    std::cout << "Shortest song: " << name[indexOfMin] << "by " << artist[indexOfMin] << "for " << duration[indexOfMin];
     
}

int main()
{
    // write your code here
   
    std::vector<std::string> user_song = {}; // procdures will use these lists, filling it up. 
    std::vector<std::string> user_artist = {};
    std::vector<int> user_duration = {};


    std::string choice = "y";
    while (choice != "n")
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
    }


    std::cout << "Total Duration: " << TotalDuration(user_duration) << "\nAverage Duration: " << AvgDuration(user_duration) << std::endl;
    printLongestDurationInfo(user_song, user_artist, user_duration);  //inputs 
    printShortestDurationInfo(user_song, user_artist, user_duration);

    return 0;
}
