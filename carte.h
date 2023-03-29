#include <iostream> 
#include <string>
using namespace std;

class Carte {
    private :
        int couleur;
        int valeur;
    
    public :
        Carte();
        Carte(int couleur, int valeur);
        ~Carte();

        int getValeur();
        int getCouleur();
        void setValeur(int valeur);
        void setCouleur(int couleur);
        void afficherCarte();
};