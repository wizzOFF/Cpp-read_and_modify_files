
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
/*
   // ofstream monFlux("README");
   string const nomFichier("README");
   
   ofstream monFlux(nomFichier.c_str());
   //Déclaration d'un flux permettant d'écrire dans le fichier
   // README

   if(monFlux)  //On teste si tout est OK
   {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << endl;
   }
   else
   {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
   }
*/
/* 
   ifstream monFlux("README");  //Ouverture d'un fichier en lecture

   if(monFlux)
   {
     
     string ligne;
     getline(monFlux, ligne); //On lit une ligne complète
     
     
     double nombre;
     monFlux >> nombre; //Lit un nombre à virgule depuis le fichier
     // string mot;
     // monFlux >> mot;    //Lit un mot depuis le fichier

     
     char a;
     monFlux.get(a);
   }
   else
   {
       cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }

*/
/*
   ifstream monFlux("README");
   
   string mot;
   monFlux >> mot;          //On lit un mot depuis le fichier
   
   monFlux.ignore();        //On change de mode
   string ligne;
   getline(monFlux, ligne); //On lit une ligne complète
   
   return 0; 
}
*/

/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main()
{
   ifstream fichier("README");

   if(fichier)
   {
      //L'ouverture s'est bien passée, on peut donc lire

      string ligne; //Une variable pour stocker les lignes lues

      while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
         cout << ligne << endl;
         //Et on l'affiche dans la console
         //Ou alors on fait quelque chose avec cette ligne
         //À vous de voir
      }
   }
   else
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }

   int position = fichier.tellp(); //On récupère la position
   cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;

   flux.seekg(nombreCaracteres, position);

   return 0;
}
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fichier("C:/Nanoc/meilleursScores.txt");  //On ouvre le fichier
    fichier.seekg(0, ios::end);  //On se déplace à la fin du fichier

    int taille;
    taille = fichier.tellg();
    //On récupère la position qui correspond donc à la taille du fichier !

    cout << "Taille du fichier : " << taille << " octets." << endl;

    return 0;
}