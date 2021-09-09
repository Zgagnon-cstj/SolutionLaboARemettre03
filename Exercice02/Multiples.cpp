/*But:crivez un programme qui permet de lire un entier A
      et affiche, selon sa valeur, un seul des 4 messages suivants :
      • A est seulement un multiple de 2.
      • A est seulement un multiple de 3.
      • A est à la fois multiple de 2 et de 3.
      • A n'est ni multiple de 2, ni de 3*/
//Auteur:Zachary GAGNON
//Date:2021-09-09

#include<iostream>

void main()
{
   // nommer les variables nécessaires
   int A;
   int modulo;
   int mod2;


   //demander a l'utilisateur d'inscrire un nombre entier
   std::cout << "entrer un nombre entier : \n";
   std::cin >> A;

   //valeure de modulo
   modulo = A % 2;
   mod2 = A % 3;

   // Si A est seulement un multiple de 2
   if (modulo == 0 && mod2 != 0)
   {
      std::cout << A << " est seulement un multiple de 2." << std::endl;
   }
   else
   {
   }
   // si A est seulement un multiple de 3
   if (modulo != 0 && mod2 == 0)
   {
      std::cout << A << " est seulement un multiple de 3." << std::endl;
   }
   //si A est un multiple des deux
   else if (modulo == 0 && mod2 == 0)
   {
      std::cout << A << " est à la fois multiple de 2 et de 3." << std::endl;
   }
   // si A n'est ni l'un ni l'autre
   else
   {
      std::cout << A << " n'est ni multiple de 2, ni de 3" << std::endl;
   }


   system("pause");

   /* Plan de test
    A : 2
    R : seuelment 2
    A : 3 
    R : seulement 3
    A : 12
    R : multiple 3 et 2
    A : 1
    R : aucun            */
}