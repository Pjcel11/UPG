#include "player.h" 
#include <iostream> 
#include <string>

using namespace std;

class Player () {
    public:
    void input(){
    cout<<"Entrez votre prénom\n";
    string prenom;
    cin >> prenom
    
    cout<<"Entrez votre nom" << std::endl;
    string nom;
    cin>>nom;
    }
 

string getPlayerLastName(){return this->nom};

string getPlayerFirstName(){return this->prenom};

void setPlayerLastName(string newname){
    this.nom=newname;
}
void setPlayerFirstName(string newname){
    this.prenom=newname;
}

int getAge(){
    return this.age;
}
void setAge()
float getTaille()
void setTaille()
string getGender()
void setGender()
string getOrientationS()
void setOrientationS()


string prenom;
string nom;
int age;
float taille;
string gender;
string orientationS;
string secret_crush;
};

