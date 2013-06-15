/* -----------------------------------------------------------------
// Compute the equivalent prices for Canadian gas and U.S. gas
//Attempted use of a break switch switching between U.S and Canadian Conversions. Extra Exta Credit perhaps?
*/
#include <stdio.h>
#include <math.h>
#define LITR_GAL 3.78544
#define US_per_Can 0.9789
#define Can_per_US 1.0216
int main( void )
{


double C_liter; /* Canadian dollars per liter */
double D_gallon; /* US dollars per gallon */
int choice;

	puts( "\n Gas Price Conversion Program \n" );
        printf("\nEnter 1 for Canadian Conversion and 2 for US Conversion:");
        scanf("%i",&choice);

              switch (choice){
              case 1:
	printf( "\nEnter Canadian price per liter: " );
	scanf( "%lg", &C_liter );

		while (C_liter < 0.0 ) {
			printf( "\n Re-enter. Price must be positive: " );
			scanf( "%lg", &C_liter );
					}
					
	D_gallon = C_liter * LITR_GAL * US_per_Can;
	printf( "\n Canada: $%g USA: $%g \n", C_liter, D_gallon );
		break;

                     case 2:
	printf( "\nEnter US price per liter:" );
	scanf( "%lg", &D_gallon );

		while (D_gallon < 0.0 ) {
			printf( " \nRe-enter. Price must be positive: " );
			scanf( "%lg", &D_gallon );
					}
					
	C_liter= D_gallon/LITR_GAL * Can_per_US;
	printf( "\n USA: $%g CANADA: $%g \n", D_gallon,C_liter  );
		break;

		default:
		printf("\nInvalid Input\n");
		break;
} 
return 0;
}
