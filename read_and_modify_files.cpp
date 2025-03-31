
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
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << endl;
   }
   else
   {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
   }

   return 0;
}