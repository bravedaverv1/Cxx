#include <iostream>
#include "song.hpp" 

int main(){
    Song back_to_black("Back to Black", "Amy Winehouse");

    std::cout 
        << back_to_black.get_title() 
        << " by " 
        << back_to_black.get_artist()
        << std::endl;
}