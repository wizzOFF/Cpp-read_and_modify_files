
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
   return 0;
}