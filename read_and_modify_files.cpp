
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   // ofstream monFlux("README");
   string const nomFichier("README");
   
   ofstream monFlux(nomFichier.c_str());
   //Déclaration d'un flux permettant d'écrire dans le fichier
   // README

   if(monFlux)  //On teste si tout est OK
   {
        //Tout est OK, on peut utiliser le fichier
   }
   else
   {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
   }

   return 0;
}