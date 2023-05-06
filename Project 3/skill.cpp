#include <iostream>
#include "skill.hpp"
using namespace std;


Skill::Skill() {
    Aname = "Undefined";
    Adescription = "Undefined";
    Auses = -1;
    Aspecialty = -1;
}

Skill::Skill(std::string name, std::string description, int specialty, int uses) {
    Aname = name;
    Adescription = description;
    Aspecialty = specialty;
    Auses = uses;
}

string Skill::getName() {return Aname;}
string Skill::getDescription() {return Adescription;}
int Skill::getTotalUses() {return Auses;}
int Skill::getSpecialty() {return Aspecialty;}

void Skill::setName(string name) {
    Aname = name;
}
void Skill::setDescription(string description) {
    Adescription = description;
}
void Skill::setTotalUses(int uses) {
    Auses = uses;
}
bool Skill::setSpecialty(int specialty) {
    if (specialty == 0 or 1 or 2) {
        Aspecialty = specialty;
        return true;
    }
    return false;
}