#include <iostream> 
#include <string>
using namespace std;

class Player 
{
    private:
        string prenom;
        string nom;
        int age;
        float taille;
        string gender;
        string orientationS;
        string secret_crush;
    
    public:
        Player();
        ~Player();

        string getPlayerLastName();
        string getPlayerFirstName();
        void setPlayerLastName(string newname);
        void setPlayerFirstName(string newname);
        int getAge();
        void setAge(int newage);
        float getTaille();
        void setTaille(float newtaille);
        string getGender();
        void setGender(string genderset);
        string getOrientationS();
        void setOrientationS(string neworientation);

};