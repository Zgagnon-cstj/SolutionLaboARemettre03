//But: Écrire un programme pour  calculer le montant qu’un individu devra débourser pour faire un voyage dans une automobile louée.
//Auteur:Zachary GAGNON
//Date:2021-09-09

#include<iostream>

// consommation du vehicule = 7.6l 100 km
// prx de l'essance au littre = 1.35$
// prix de location par jours = 45$
// killomètres de gratuités = 250km / jours
// prix pour le surplus de killomètres = 0.05$


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
   int Km; // nombre de kilomètres entrer par l'utilisateur
   int Days; // nombre de jours entrer par l'utilisateur
   int grats; // nombre de kilomètre gratuits
   int location; // prix de la location par jours
   double PrixSurplus; // coute des kilomètres supplementaires
   double NbLitres; // nombre de littres d'essance
   double CoutEssance; // prix essance
   double Resultat; // cout final avec gratuités
   // consommation du vehicule = 7.6l 100 km

   // demander le kilomètrage et le nombre de jours a l'utilisateur
   std::cout << "entrer le nombre le kilomètres parcourru : ";
   std::cin >> Km;
   
   std::cout << "entrer la durée du voyage en jours : ";
   std::cin >> Days;
   
   if (Km >= 0 && Days >= 0)
   {
      //cout de la location
      location = Days * LOCATION;
      //cout essance
      NbLitres = Km * CONSO / 100;
      CoutEssance = NbLitres * COUT_ESSANCE;

      // calculer les kilomètres gratuits
      grats = Days * NB_KM_GRaTUIT;
      if (Km > grats)
      {
         PrixSurplus = (Km - grats) * COUT_KM_SURPLUS;
         Resultat = location + CoutEssance + PrixSurplus;
         std::cout << "Cout du surplus de kilomètrage : " << PrixSurplus << "\n";
         std::cout << "Cout de l'essance : " << CoutEssance << "\n";
         std::cout << "Cout de la location : " << location << "\n";
         std::cout << "Le cout total du voyage est de " << Resultat << std::endl;
      }
      else
      {
         // calcule prix total sans gratuités
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