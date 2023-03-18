#include "player.h" 
#include <iostream> 
#include <string>

using namespace std;


    
    // private:

    // string prenom;
    // string nom;
    // int age;
    // float taille;
    // string gender;
    // string orientationS;
    // string secret_crush;
    
    // public :
    
    Player::Player(){
        
        cout<<"Entrez votre prénom\n";
        string prenom;
        cin >> this->prenom;
    
        cout<<"Entrez votre nom" <<endl;
        string nom;
        cin>>this->nom;

        cout<<"Quel age avez vous ?"<<endl;    
        int age;
        cin>>this->age;

        cout<<"taille ?"<<endl;
        float taille;
        cin>>this->taille;

        string gender="male";
        string orientationS="default";
    
    }
    
    Player::~Player(){};

    string Player::getPlayerLastName(){
        return this->nom;
    };

    string Player::getPlayerFirstName(){
        return this->prenom ;
    };
    void Player::setPlayerLastName(string newname){
        nom=newname;
    };
    void Player::setPlayerFirstName(string newname){
        prenom=newname;
    };

    int Player::getAge(){
        return age;
    };

    void Player::setAge(int newage){ 
        age=newage;
    };
    float Player::getTaille(){
        return taille;
    }
    void Player::setTaille(float newtaille){
        taille=newtaille;
    };
    string Player::getGender(){
        return gender;
    };
    void Player::setGender(string newgender){
        gender=newgender;
    };
    string Player::getOrientationS(){
        return orientationS;
    };
    void Player::setOrientationS(string newO){
        orientationS=newO;
    };

