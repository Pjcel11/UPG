#include <iostream> 
#include <string>
#include <vector>
using namespace std;

class Partie () {
    private:
    string nomPartie;
    int nbJoueurs;
    vector<string> joueurs;
    int nbJoueursMax;
    int nbJoueursActuels;
    int nbJoueursMin;
    int nbJoueursMinActuels;
    int nbJoueursMaxActuels;
    bool estEnCours;     

    public:
    Partie (string nomPartie, int nbJoueursMax, int nbJoueursMin) {}
    void addJoueur (string nomJoueur) {}
    void delJoueur (string nomJoueur) {}
    void jouer () {}
    void afficher () {}
    void setNbJoueursMax (int nbJoueursMax) {}
    void setNbJoueursMin (int nbJoueursMin) {}
    void setNbJoueursActuels (int nbJoueursActuels) {}
    void setNbJoueursMaxActuels (int nbJoueursMaxActuels) {}
    void setNbJoueursMinActuels (int nbJoueursMinActuels) {}
    void setEstEnCours (bool estEnCours) {}
    void setNomPartie (string nomPartie) {}
    void setJoueurs (vector<string> joueurs) {}
    void setNbJoueurs (int nbJoueurs) {}
    void setNbJoueursActuels (int nbJoueursActuels) {}
    void setNbJoueursMaxActuels (int nbJoueursMaxActuels) {}
    void setNbJoueursMinActuels (int nbJoueursMinActuels) {}
    
        
}