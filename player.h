#include <string>

class Player {
    public:
        Player();
        ~ Player();

        std::string getPlayerLastName();
        std::string getPlayerFirstName();
        void setPlayerLastName(std::string newname);
        void setPlayerFirstName(std::string newname);
        int getAge();
        void setAge();
        float getTaille();
        void setTaille();
        std::string getGender();
        void setGender();
        std::string getOrientationS();
        void setOrientationS();


    private:
    std::string prenom;
    std::string nom;
    int age;
    float taille;
    std::string gender;
    std::string orientationS;
    std::string secret_crush;

};