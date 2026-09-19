#include <iostream>

int main(){
    std::cout<< "          KAIROS PYGRID           \n";
    std::cout<< "Initializing Root Node UI loop...\n";
    
    // gui loop
    bool is_running = true;
    std::cout<< "[Lv1] Grid Engine active.\n";
    std::cout<< "[Lv1] Listening for keyboard input.\n\n";

    std::cout << "[System] Engine successfully initialized. Press Enter to exit.";
    std::cin.get(); // Keeps the console open on Windows
    
    return 0;
}
