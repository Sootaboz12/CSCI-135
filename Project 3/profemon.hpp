#pragma once
#include "skill.hpp"
#include <string>
using namespace std;


enum Specialty {ML, SOFTWARE, HARDWARE};

class Profemon {
    private:
    std::string name;
    int level;
    int need_xp;
    int current_xp;
    int max_health_lvl;
    Specialty special_name;
    Skill learned[3];

    public:
        Profemon();
        Profemon(string name, double max_health, Specialty specialty);

        string getName();
        Specialty getSpecialty();
        int getLevel();
        int getMaxHealth();

        void setName(string name);

        void levelUp(int exp);

        bool learnSkill(int slot, Skill skill);
        void printProfemon(bool print_skills);
};