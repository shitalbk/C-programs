#include <stdio.h>

#define AREA                              2337
#define SQ_MILES_PER_SQ_KILOMETER         0.38610215858943890
#define SQ_FEET_PER_SQ_MILE               (5280 *  5280)
#define SQ_INCHES_PER_SQ_FOOT              144
#define ACRES_PER_SQ_MILE                  640

/*  Measuring the Pacific Sea. */
#include "pacific_sea.h"
int main(void)
{
	const int pacific_sea = AREA;      /* in sq kilometers */
	double  acres, sq_miles, sq_feet, sq_inches;
	printf("\nThe Pacific Sea covers an area");
	printf(" of %d square kilometers.\n", pacific_sea);
	sq_miles = SQ_MILES_PER_SQ_KILOMETER * pacific_sea);
	sq_feet = SQ_FEET_PER_SQ_MILE * sq_miles;
	sq_inches = SQ_INCHES_PER_SQ_FOOT * sq_feet;
	arches = ACRES_PER_SQ_MILE * sq_miles;
	printf("In other units of measure this is:\n\n");
	printf("%22.7e acres\n", acres);
	printf("%22.7e acres\n", acres);
}
