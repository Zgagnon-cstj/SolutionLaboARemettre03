//But: �crire un programme pour  calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une automobile lou�e.
//Auteur:Zachary GAGNON
//Date:2021-09-09

#include<iostream>

// consommation du vehicule = 7.6l 100 km
// prx de l'essance au littre = 1.35$
// prix de location par jours = 45$
// killom�tres de gratuit�s = 250km / jours
// prix pour le surplus de killom�tres = 0.05$


void main()

{
setlocale(LC_ALL, "");

   // declaration des constantes pour utiliser des valeures numeriques qui peuvent changer dansle temps mais pas lors de l'execution du programme
   const double LOCATION = 45;
   const int NB_KM_GRaTUIT = 250;
   const double CONSO = 7.6;
   const double COUT_KM_SURPLUS = 0.05;
   const double COUT_ESSANCE = 1.35;

   //variables a nommer
   int Km; // nombre de kilom�tres entrer par l'utilisateur
   int Days; // nombre de jours entrer par l'utilisateur
   int grats; // nombre de kilom�tre gratuits
   int location; // prix de la location par jours
   double PrixSurplus; // coute des kilom�tres supplementaires
   double NbLitres; // nombre de littres d'essance
   double CoutEssance; // prix essance
   double Resultat; // cout final avec gratuit�s
   // consommation du vehicule = 7.6l 100 km

   // demander le kilom�trage et le nombre de jours a l'utilisateur
   std::cout << "entrer le nombre le kilom�tres parcourru : ";
   std::cin >> Km;
   
   std::cout << "entrer la dur�e du voyage en jours : ";
   std::cin >> Days;
   
   if (Km >= 0 && Days >= 0)
   {
      //cout de la location
      location = Days * LOCATION;
      //cout essance
      NbLitres = Km * CONSO / 100;
      CoutEssance = NbLitres * COUT_ESSANCE;

      // calculer les kilom�tres gratuits
      grats = Days * NB_KM_GRaTUIT;
      if (Km > grats)
      {
         PrixSurplus = (Km - grats) * COUT_KM_SURPLUS;
         Resultat = location + CoutEssance + PrixSurplus;
         std::cout << "Cout du surplus de kilom�trage : " << PrixSurplus << "\n";
         std::cout << "Cout de l'essance : " << CoutEssance << "\n";
         std::cout << "Cout de la location : " << location << "\n";
         std::cout << "Le cout total du voyage est de " << Resultat << std::endl;
      }
      else
      {
         // calcule prix total sans gratuit�s
         Resultat = location + CoutEssance;

         std::cout << "Cout de l'essance : " << CoutEssance << "\n";
         std::cout << "Cout de la location : " << location << "\n";
         std::cout << "Le cout total du voyage est de " << Resultat << std::endl;
      }

   }

   else
   {
      std::cout << "Veuillez entrer des nombres positifs \n";
   }

   system("pause");

   /* Plan Test
      KM   | Jours |
     1200      2
   Resultat : 248.12
      
     400       2
   Resultat : 131.04
   
     750       3
   Resultat : 211.95
   
   
   */
}