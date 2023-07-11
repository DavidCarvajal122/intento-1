#include <stdio.h>
#include <string.h>
int main (){
   int opcion, opcionuno, tipoentrada, entradasmonster, entradasrapidos, totalentradasmonster, totalentradasrapidos; 
   printf ("Opcion 1: Venta de entradas\n"); 
   printf ("Opcion 2: Estadística de entradas\n");
   printf ("Opcion 3: salir\n");
   scanf ("%d",&opcion);

    switch (opcion)
   {
   case 1: 

    printf ("Estas en el apartado venta de entradas: \n");
    printf ("Que pelicula deseas ver: \n"); 
    printf ("Opcion 4: Monster Inc\n");
    printf ("Opcion 5: Rapidos y furiosos\n");
    scanf ("%d",&opcionuno); 
    switch (opcionuno)
    {
    case 4: 
         printf ("Elegiste en Monster Inc\n");
         printf ("Tipo de entrada: \n");
         printf ("Opcion 6: Normal 8 dolares \n");
         printf ("Opcion 7: Vip 15 dolares\n");
         printf ("Opcion 8: 3D 12 dolares\n");
         printf ("¿Cual deseas?");
         scanf ("%d",&tipoentrada); 
          
         switch (tipoentrada)
         {
         case 6: 
               printf ("¿Cuantas entradas quieres?");
               scanf ("%d",&entradasmonster);
               //el numero de entradas máximas para la entrada normal son 30
               if (entradasmonster > 30 )
               {
                  printf("esta sala se encuentra llena o ha comprado demasiados boletos"); 
               }
               else
               {
                  entradasmonster = entradasmonster + 1; 
                  printf ("Tu compra se ha concretado");
                  totalentradasmonster = 8 * entradasmonster;
                  printf ("total a pagar : %d",totalentradasmonster);
               }
            break;
         case 7:
               printf ("¿Cuantas entradas quieres?");
               scanf ("%d",&entradasmonster);
               //el numero de entradas máximas para la entrada vip son 15
               if (entradasmonster > 15 )
               {
                  printf("esta sala se encuentra llena o ha comprado demasiados boletos"); 
               }
               else
               {
                  entradasmonster = entradasmonster + 1; 
                  printf ("Tu compra se ha concretado");
                  totalentradasmonster = 15 * entradasmonster;
                  printf ("total a pagar : %d",totalentradasmonster);
            break;
         }
         case 8: 
         printf ("¿Cuantas entradas quieres?");
               scanf ("%d",&entradasmonster);
               //el numero de entradas máximas para la entrada vip son 25
               if (entradasmonster > 25 )
               {
                  printf("esta sala se encuentra llena o ha comprado demasiados boletos"); 
               }
               else
               {
                  entradasmonster = entradasmonster + 1; 
                  printf ("Tu compra se ha concretado");
                  totalentradasmonster = 12 * entradasmonster;
                  printf ("total a pagar : %d",totalentradasmonster);
               break;
               }
   case 5: 
         printf ("Elegiste Rapidos y Furiosos\n");
         printf ("Tipo de entrada: \n");
         printf ("Opcion 9: Normal 8 dolares \n");
         printf ("Opcion 10: Vip 15 dolares\n");
         printf ("Opcion 11: 3D 12 dolares\n");
         printf ("¿Cual deseas?");
         scanf ("%d",&tipoentrada); 
         switch (tipoentrada)
         {
         case 9: 
               printf ("¿Cuantas entradas quieres?");
               scanf ("%d",&entradasrapidos);
               //el numero de entradas máximas para la entrada normal son 30
               if (entradasrapidos > 30 )
               {
                  printf("esta sala se encuentra llena o ha comprado demasiados boletos"); 
               }
               else
               {
                  entradasrapidos = entradasrapidos + 1; 
                  printf ("Tu compra se ha concretado");
                  totalentradasrapidos = 8 * entradasrapidos;
                  printf ("total a pagar : %d",totalentradasrapidos);
               }
            break;
         case 10:
               printf ("¿Cuantas entradas quieres?");
               scanf ("%d",&entradasrapidos);
               //el numero de entradas máximas para la entrada vip son 15
               if (entradasrapidos > 15 )
               {
                  printf("esta sala se encuentra llena o ha comprado demasiados boletos"); 
               }
               else
               {
                  entradasrapidos = entradasrapidos + 1; 
                  printf ("Tu compra se ha concretado");
                  totalentradasrapidos = 15 * entradasrapidos;
                  printf ("total a pagar : %d",totalentradasrapidos);
            break;
         }
         case 11: 
         printf ("¿Cuantas entradas quieres?");
               scanf ("%d",&entradasrapidos);
               //el numero de entradas máximas para la entrada vip son 25
               if (entradasrapidos > 25 )
               {
                  printf("esta sala se encuentra llena o ha comprado demasiados boletos"); 
               }
               else
               {
                  entradasrapidos = entradasrapidos + 1; 
                  printf ("Tu compra se ha concretado");
                  totalentradasrapidos = 12 * entradasrapidos;

                  printf ("total a pagar : %d",totalentradasrapidos);
               break;
      }
    break;
   case 2: 
    printf ("Analisis de resultados"); 
    printf ("El total de entradas vendidas para monster inc fueron: %d",&entradasmonster);
    printf ("El dinero recaudado en para monster inc fueron: %d",&totalentradasmonster);
    printf ("El total de entradas vendidas para rapidos y furiosos fueron: %d",&entradasrapidos);
    printf ("El dinero recaudado en para monster inc fueron: %d",&totalentradasrapidos);
    break;
   case 3: 
    printf ("es la opcion 3");
    break;
   }  
}
}
}
   return 0;
}
