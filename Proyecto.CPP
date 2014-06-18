#include <conio>
#include <iostream>

main()
{
	int vector[10], elemento;
   bool ban = false;

   cout<<"Ingrese los elementos del vector principal: ";
   for (int i = 0; i < 5; i++)
   {
   	cin>>vector[i];
   }

   cout<<"Ingrese el elemento a buscar:\n";
   cin>>elemento;

   for (int i = 0; i < 5; i++)
   {
   	if (elemento == vector[i])
      {
      	ban = true;
      }
   }

   if (ban == true)
   {
   	cout<<"El elemento ha sido encontrado\n";
   }
   else
   {
   	cout<<"Elemento no ha sido encontrado\n";
   }

   getch();
}
