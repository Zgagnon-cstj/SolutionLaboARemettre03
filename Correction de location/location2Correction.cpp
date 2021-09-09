

#include<iostream>

void main()

{

   setlocale(LC_ALL, "");

   int NbKilometre;
   int Nbjour;
   double Coutlocation;
   int Kilometregratuit;
   double Kilometresurplus;
   double coutessance;
   double total;

   std::cout << "Entrer le nombre de kilomètres : ";
   std::cin >> NbKilometre;

   // calculer le cout de la location d ela voiture

   std::cout << "Veuillez entrer le nombre de jours : ";
   std::cin >> Nbjour;
   
  

   Coutlocation = 45 * Nbjour;

   //Calculer kilometre suplementaire

   Kilometregratuit = Nbjour * 250;

   // si le nombre de kilometre parcouru est plus grand que le nombre de kilometre gratuit on doit calculer le montant des kilometres suplementaires

   if (NbKilometre > Kilometregratuit)
   {
      Kilometresurplus = (NbKilometre - Kilometregratuit) * 0.05;
   }

   coutessance = 1.35 * NbKilometre / 100 * 7.6;

   total = coutessance + Kilometresurplus;

   std::cout << "le cout total du voyage :" << total;
}