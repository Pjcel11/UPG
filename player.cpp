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
        // string prenom;
        cin >> prenom;
    
        cout<<"Entrez votre nom" <<endl;
        // string nom;
        cin>>nom;

        cout<<"Quel age avez vous ?"<<endl;    
        cin>>age;

        cout<<"taille ?"<<endl;
        cin>>taille;
    
    };
 
    string getPlayerLastName(){
        return nom;
    };

    string getPlayerFirstName(){
        return prenom;
    };
    void setPlayerLastName(string newname){
        nom=newname;
    };
    void setPlayerFirstName(string newname){
        prenom=newname;
    };

    int getAge(){
        return age;
    };

    void setAge(int newage){ age=newage;
    };
    float getTaille(){
        return taille;
    };
    void setTaille(float newtaille){
        taille=newtaille;
    };
    string getGender(){
        return gender;
    };
    void setGender(string newgender){
        gender=newgender;
    };
    string getOrientationS(){
        return orientationS;
    };
    void setOrientationS(string newO){
        orientationS=newO;
    };


