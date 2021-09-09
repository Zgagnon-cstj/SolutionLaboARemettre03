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

   //variables a nommer
   int Km; // nombre de killom�tres entrer par l'utilisateur
   int Days; // nombre de jours entrer par l'utilisateur
   int grats; // nombre de killom�tre gratuits
   int location; // prix de la location par jours
   int surplus; // Nombre de killom�tre de surplus
   float PrixSurplus; // coute des killom�tres supplementaires
   float NbLitres; // nombre de littres d'essance
   float CoutEssance; // prix essance
   float Resultat; // cout final avec gratuit�s
   // consommation du vehicule = 7.6l 100 km

   // demander le killom�trage et le nombre de jours a l'utilisateur
   std::cout << "entrer le nombre le killom�tres parcourru : \n";
   std::cin >> Km;
   
   std::cout << "entrer la dur�e du voyage en jours : \n";
   std::cin >> Days;

   //cout de la location
   location = Days * 45;
   //cout essance
   NbLitres = Km * 7.6 / 100;
   CoutEssance = NbLitres * 1.35;

   // calculer les killom�tres gratuits
   grats = Days * 250;
   if (Km > grats)
   {
      surplus = Km - grats;
      PrixSurplus = surplus * 0.05;
      Resultat = location + CoutEssance + PrixSurplus;
      std::cout << " le prix total du voyage est de " << Resultat << std::endl;
   }
   else
   {
      // calcule prix total sans gratuit�s
      Resultat = location + CoutEssance;
      std::cout << " le prix total du voyage est de " << Resultat << std::endl;
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