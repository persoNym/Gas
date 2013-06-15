/* -----------------------------------------------------------------
// Compute the equivalent prices for Canadian gas and U.S. gas
*/
// Extra Credit Code the only while statement will be made into a for loop
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
	printf( "\nEnter Canadian price per liter: " );
	scanf( "%lg", &C_liter );

		for(C_liter < 0.0)
			{
			printf( " \nPlease Re-enter. Price must be positive:" );
			scanf( "%lg", &C_liter );
			}
					
	D_gallon = C_liter * LITR_GAL * US_per_Can;
	printf( "\n Canada: $%g USA: $%g \n", C_liter, D_gallon );
return 0;
}
