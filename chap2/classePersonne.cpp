#include<iostream>
using namespace std;

class Personne {
    
    private :
    std::string nom;
    int age;
    char sexe;
    
    public :
    
    Personne(){
        this->nom = "?";
        this->age = 0;
        this->sexe = 'F';
        }
    Personne(std::string nom, int age, char sexe){
        this -> nom = nom;
        this -> age = age;
        this -> sexe = sexe;
        }
    
    bool operator == (Personne pers){
        // Surcharge de l'operateur ==
        return this->nom == pers.nom &&
        this->age == pers.age &&
        this->sexe == pers.sexe;
        }
    
    std::string toString() const
    {
        std::string res = "";
        if (this->sexe == 'F'){
            res += "Mme ";
            }
        else{
            res += "Mr ";
            }
        res += this->nom + " agé de " + std::to_string(this->age) + " an(s) \n"; 
        return res;
        }
    
    // Destructeur de classe
    ~Personne() {cout<<"Destruction de la classe Personne"<<endl;}
    
    };

int main() {
    
    Personne personne1("Appolinaire", 34, 'M');
    Personne personne2("Appolinaire", 34, 'M');
    cout<<personne1.toString();
    cout<<personne2.toString();
    if (personne1==personne2){cout<<"plop";}
    
    }
