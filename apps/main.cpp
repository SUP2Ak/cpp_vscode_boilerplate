#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <conio.h>
#include "test.h"

int main(int, char**)
{
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"}; // initialize vector with string elements

    std::string strGenerared = GenerateString("Hello World"); // call function from test.h
    std::cout << strGenerared << std::endl; // print message

    for (const std::string& word : msg) // range-based for loop
    {
        std::cout << word << " "; // print each word followed by a space
    }

    std::cout << std::endl; // print a new line
    std::cout << "Press any key to continue..." << std::endl; // print message
    char keyPressed = _getch(); // wait for user input
    std::cout << "You pressed: " << keyPressed << std::endl; // print message
    
    
    for (int i = 5; i > 0; --i) // Loop to show countdown before closing
    {
        std::cout << "Closing in " << i << " seconds..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0; // return 0 to indicate successful termination
}