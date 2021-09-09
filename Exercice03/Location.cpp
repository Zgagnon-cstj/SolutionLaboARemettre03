//But: Écrire un programme pour  calculer le montant qu’un individu devra débourser pour faire un voyage dans une automobile louée.
//Auteur:Zachary GAGNON
//Date:2021-09-09

#include<iostream>

void main()
{
   int Km; // nombre de killometres entrer par l'utilisateur
   int Days; // nombre de jours entrer par l'utilisateur
   int grats; // nombre de killometre gratuits
   int location; // prix de la location par jours
   int surplus; // Nombre de killometre de surplus
   float PrixSurplus; // coute des killometres supplementaires
   float NbLitres; // nombre de littres d'essance
   float CoutEssance; // prix essance
   float Resultat; // cout final avec gratuite
   // consommation du vehicule = 7.6l 100 km

   // demander le killometrage et le nombre de jours a l'utilisateur
   std::cout << "entrer le nombre le killometres parcourru : \n";
   std::cin >> Km;
   
   std::cout << "entrer la duree du voyage en jours : \n";
   std::cin >> Days;

   //cout de la location
   location = Days * 45;
   //cout essance
   NbLitres = Km * 7.6 / 100;
   CoutEssance = NbLitres * 1.35;

   // calculer les killmetres gratuits
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
      // calcule prix total sans gratuites
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