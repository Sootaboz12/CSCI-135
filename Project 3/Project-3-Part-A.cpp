/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Project 3

Project 3: Profemon
*/

#include <iostream>
using namespace std;

class Skill {
    private:
        string name;
        string description;
        int uses;
        int specialty;
    public:
        Skill() {
            name = "Undefined";
            description = "Undefined";
            uses = -1;
            specialty = -1;
        }
        Skill(string name, string description, int specialty, int uses) {
            this -> name = name;
            this -> description = description;
            this -> specialty = specialty;
            this -> uses = uses;
        }

        string getName() {return name;}
        string getDescription() {return description;}
        int getTotalUses() {return uses;}
        int getSpecialty() {return specialty;}

        void setName(string name) {
            this -> name = name;
        }
        void setDescription(string description) {
            this -> description = description;
        }
        void setTotalUses(int uses) {
            this -> uses = uses;
        }
        bool setSpecialty(int specialty) {
            if (specialty == 0 or 1 or 2) {
                this -> specialty = specialty;
                return true;
            }
            
            return false;
        }
};

enum Specialty {ML, SOFTWARE, HARDWARE};

class Profemon {
    private:
    string name;
    int level;
    int need_xp;
    int current_xp;
    int max_health_lvl;
    Specialty special_name;
    Skill learned[3];
    public:
        Profemon() {
            name = "Undefined";
        }
        Profemon(string name, double max_health, Specialty specialty) {
            this -> name = name;
            max_health_lvl = max_health;
            special_name = specialty;
            current_xp = 0;
            need_xp = 50;
            level = 0;
        }

        string getName() {return name;}
        Specialty getSpecialty() {return special_name;}
        int getLevel() {return level;}
        int getMaxHealth() {return max_health_lvl;}

        void setName(string name) {
            this -> name = name;
        }

        void levelUp(int exp) {
            current_xp = exp;
            int ML_xp = 50;
            int SOFTWARE_xp = 50;
            int HARDWARRE_xp = 50;
            switch(special_name) {
                case ML:
                    while (current_xp >= ML_xp)
                    {
                        level++;
                        current_xp = current_xp - ML_xp;
                        ML_xp = ML_xp + 10;
                    }
                    break;
                case SOFTWARE:
                    while (current_xp >= SOFTWARE_xp) {
                        level++;
                        current_xp = current_xp - SOFTWARE_xp;
                        SOFTWARE_xp = SOFTWARE_xp + 15;
                    }
                    break;
                case HARDWARE:
                    while(current_xp >= HARDWARRE_xp) {
                        level++;
                        current_xp -= HARDWARRE_xp;
                        HARDWARRE_xp += 20;
                    }
                    break;
                default: break;
            }
        }

        bool learnSkill(int slot, Skill skill) {
            if (slot > 2 or slot < 0 or skill.getSpecialty() != slot) {
                return false;
            }
            learned[slot] = skill;
            return true;
        }
        void printProfemon(bool print_skills);
};

int main() {
    Profemon MLt("test", 100, ML);
    Profemon SWt("test", 100, SOFTWARE);
    Profemon HWt("test", 100, HARDWARE);

    MLt.levelUp(115);
    std::cout << MLt.getLevel() << "\n";

    SWt.levelUp(115);
    std::cout << SWt.getLevel() << "\n";

    HWt.levelUp(115);
    std::cout << HWt.getLevel() << "\n";
}