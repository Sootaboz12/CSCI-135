#include <iostream>
#include <string>
#include "profemon.hpp"
using namespace std;

    Profemon::Profemon() {
    name = "Undefined";
    }

    Profemon::Profemon(string name, double max_health, Specialty specialty) {
        this -> name = name;
        max_health_lvl = max_health;
        special_name = specialty;
        current_xp = 0;
        need_xp = 50;
        level = 0;
    }

    string Profemon::getName() {return name;}
    Specialty Profemon::getSpecialty() {return special_name;}
    int Profemon::getLevel() {return level;}
    int Profemon::getMaxHealth() {return max_health_lvl;}

    void Profemon::setName(string name) {
        this -> name = name;
    }

    void Profemon::levelUp(int exp) {
        current_xp = exp;
        int ML_xp = 50;
        int SOFTWARE_xp = 50;
        int HARDWARRE_xp = 50;
        switch(special_name) {
            case ML:
                while (current_xp > ML_xp)
                {
                    level++;
                    ML_xp += 10;
                    current_xp -= ML_xp;
                }
                break;
            case SOFTWARE:
                while (current_xp > SOFTWARE_xp) {
                    level++;
                    SOFTWARE_xp += 15;
                    current_xp -= SOFTWARE_xp;
                }
                break;
            case HARDWARE:
                while(current_xp > HARDWARRE_xp) {
                    level++;
                    HARDWARRE_xp += 20;
                    current_xp -= HARDWARRE_xp;
                }
                break;
            default: break;
        }
    }

    bool Profemon::learnSkill(int slot, Skill skill) {
        if (slot > 2 or slot < 0 or skill.getSpecialty() != slot) {
            return false;
        }
        learned[slot] = skill;
        return true;
    }

    void printProfemon(bool print_skills) {}