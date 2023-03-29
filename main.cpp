#include <iostream>
#include <string>
#include "player.h"
#include "deck52cartes.h"


int main() {

	std::cout <<"Hello World"<<endl;
	Carte cartetest = Carte(1,12);
	cartetest.afficherCarte();

	cout<<"Création du deck"<<endl;
	Deck52Cartes decktest = Deck52Cartes();
	cout<<"Affichage du deck"<<endl;
	decktest.afficherDeck();
	cout<<"Mélange du deck"<<endl;
	decktest.melangerDeck();
	cout<<"Affichage du deck mélangé"<<endl;
	decktest.afficherDeck();

	
	
	//Player joueurtest;
	
	return 0;
}