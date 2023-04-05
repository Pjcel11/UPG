#include <iostream> 
#include <string>
#include <vector>
#include "partie.h"
using namespace std;

public class Soiree {
    private:
        vector<Partie> parties;
        string date;
        string codeAccesSoiree;
        string nomSoiree;
        string adminSoiree;
    public:
        Soiree(string date, 
            string codeAccesSoiree, 
            string nomSoiree, 
            string adminSoiree) {};
    
        void addPartie(Partie p) {};
        void afficher() {};
        void afficherPartie(string nom) {};
        void terminerSoiree(){};
        void transfererDroits(string nomNewAdminSoiree){};


}