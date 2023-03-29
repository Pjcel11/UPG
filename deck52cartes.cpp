#include "deck52cartes.h"
#include <iostream> 
#include <string>
using namespace std;

Deck52Cartes::Deck52Cartes(){
    for (int i = 0; i < 52; i++){
        int col=i/13;
        int value=i%13+1;
        cout<<"Creation de la carte de couleur:"<<col<<" et de valeur:" << value <<endl;
        deck.push_back(Carte(col, value));
    }
    
}

Deck52Cartes::~Deck52Cartes(){};

void Deck52Cartes::melangerDeck(){
    for (int i = 0; i < 52; i++){
        int j = rand() % 52;
        Carte temp = this->deck[i];
        this->deck[i] = this->deck[j];
        this->deck[j] = temp;
    }
}

void Deck52Cartes::afficherDeck(){
    cout<<"AFFICHER DECK"<<endl;
    for (int i = 0; i < 52; i++){
        this->deck[i].afficherCarte();
    }
}

Carte Deck52Cartes::getCarte(int i){
    return this->deck[i];
}

void Deck52Cartes::setCarte(int i, Carte carte){
    this->deck[i] = carte;
}

void Deck52Cartes::afficherCarteN(int i){
    this->deck[i].afficherCarte();
}

Carte Deck52Cartes::tirerCarte(){
    Carte carte = this->deck[0];
    for (int i = 0; i < 51; i++){
        this->deck[i] = this->deck[i+1];
    }
    return carte;
}

int Deck52Cartes::getNbCartes(){
    return this->nbCartes;
}

