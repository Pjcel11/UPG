#include <iostream> 
#include <string>
#include <vector>
#include "carte.h"
using namespace std;

class Deck52Cartes
{
private:
    vector<Carte> deck;
    int nbCartes;
public:

    Deck52Cartes();
    ~Deck52Cartes();

    void melangerDeck();
    void afficherDeck();

    void setCarte(int i, Carte carte);
    Carte getCarte(int i);
    void afficherCarteN(int i);

    Carte tirerCarte();
    
    int getNbCartes();
};