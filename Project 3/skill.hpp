#pragma once
#include <iostream>

class Skill {
    private:
        std::string Aname;
        std::string Adescription;
        int Auses;
        int Aspecialty;
    public:
        Skill();
        Skill(std::string name, std::string description, int specialty, int uses);

        std::string getName();
        std::string getDescription();
        int getTotalUses();
        int getSpecialty();

        void setName(std::string name);
        void setDescription(std::string description);
        void setTotalUses(int uses);
        bool setSpecialty(int specialty);
};