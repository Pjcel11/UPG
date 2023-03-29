#include <iostream> 
#include <string>
#include "carte.h"
using namespace std;

Carte::Carte () {
    cout<<"Construction d'une carte"<<endl;
    this->valeur =1;
    this->couleur =0;
}

Carte::Carte(int couleur, int valeur){
    this->valeur = valeur;
    this->couleur = couleur;
}

Carte::~Carte(){};

int Carte::getValeur () {
    return this->valeur;
}

int Carte::getCouleur () {
    return this->couleur;
}

void Carte::setValeur (int valeur) {
    this->valeur = valeur;
}

void Carte::setCouleur (int couleur) {
    this->couleur = couleur;
}

void Carte::afficherCarte () {
    cout<<"Affichage en cours";
    //Constantes utiles
    string val="default"; //Valeur de la carte en string
    string coul="default"; //Couleur de la carte en string

    int valcarte=this->valeur; // Valeur et Couleur de la carte pour le traitement conditionnel en dessous
    int coulcarte=this->couleur; //

    //traitement de la valeur

    if (valcarte==1){
        val="As";
    }
    else if (valcarte==11){
        val="Valet";
    }
    else if (valcarte==12){
        val="Dame";
    }
    else if (valcarte==13){
        val="Roi";
    }
    else {
        val=to_string(valcarte);
    }

    //traitement de la couleur
    if (coulcarte==0){
        coul="Pique";
    }
    else if (coulcarte==1){
        coul="Coeur";
    }
    else if (coulcarte==2){
        coul="Carreau";
    }
    else if (coulcarte==3){
        coul="Trèfle";
    }

    cout << "La carte est de valeur " << val << " et de couleur " << coul << endl;
}

