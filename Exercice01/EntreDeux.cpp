//But:écrire un programme qui demande à l’utilisateur de saisir 3 entiers A, B, C.Le  programme  indique  si  C  est  compris  entre  A  et  B  ou  C  est  compris  entre  B  et  A
//Auteur:Zachary GAGNON
//Date:2021-09-09

#include<iostream>

void main()
{
   // variables necessaires
   int A;
   int B;
   int C;

   //demander a l'utilisateur d'entrer les nombres demander
   std::cout << "entrer un nombre entier :\n";
   std::cin >> A;

   std::cout << "entrer un deuxieme nombre entier :\n";
   std::cin >> B;

   std::cout << "enter un troisieme nombre entier :\n";
   std::cin >> C;

   //si C se trouve entre A et B
   if (C > A && C < B)
   {
      std::cout << C << " se trouve entre " << A << " et " << B << std::endl;
   }
   //si C se trouve entre B et A
   if (C < A && C > B)
   {
      std::cout << C << " se trouve entre " << B << " et " << A << std::endl;
   }
   //si C ne se trouve pas entre A et B ni B et A
   else if ((C > A && C > B) || (C < A && C < B))
   {
      std::cout << C << " ne se trouve pas entre les nombres entrers\n";
   }


   system("pause");


   /*plan de test
     A | B | C |
     3   1   2
   R: 2 entre 1 et 3
    
     A | B | C |
     1   3   2
   R: 2 entre 1 et 3

     A | B | C |
    -1  -3  -2
   R: -2 entre -1 et -3

     A | B | C |
     50  60  1  
   R: 1 ne se trouve pas entre les nombre entrers
   */
}