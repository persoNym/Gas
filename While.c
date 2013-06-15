/* -----------------------------------------------------------------
// Compute the equivalent prices for Canadian gas and U.S. gas
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

	puts( "\n Gas Price Conversion Program \n" );
	printf( "Enter Canadian price per liter: " );
	scanf( "%lg", &C_liter );

		while (C_liter < 0.0 ) {
			printf( " Please Re-enter. Price must be positive: " );
			scanf( "%lg", &C_liter );
					}
					
	D_gallon = C_liter * LITR_GAL * US_per_Can;
	printf( "\n Canada: $%g USA: $%g \n", C_liter, D_gallon );
return 0;
}
