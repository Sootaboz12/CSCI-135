#include <iostream>
#include <string>
#include "skill.hpp"
#include "profemon.hpp"
#include "profemon.cpp"
#include "skill.cpp"

int main() {
    Profemon MLt("test", 115, ML);
    Profemon SWt("test", 115, SOFTWARE);
    Profemon HWt("test", 115, HARDWARE);

    MLt.levelUp(115);
    std::cout << MLt.getLevel() << "\n";

    SWt.levelUp(115);
    std::cout << SWt.getLevel() << "\n";

    HWt.levelUp(115);
    std::cout << HWt.getLevel() << "\n";
    return 0;
}