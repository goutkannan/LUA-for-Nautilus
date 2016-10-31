/*
Lua added by sunny
*/

//---------------

double fabs(double __x){
	return 0;
}

double atan(double __x){
	return 45.000;
}

// changing atan2 to atan3 just to pass errors.
//conflicting types of ata2 in /nautilus/libccompat.h

double atan3(double y, double x){
	return 135.00;
}

// this is replacement to actual fmod() (/nautilus/libccompat)
// defining own fmod similar to the one defined in (/gcc/libc)
double fmod2(double y, double x){
  return 2.0;
}

double modf3(double y, double *x){
  *x = 0;
  return 0.000;
}

double pow2(double y, double x){
  return 0;
}
double frexp(double x, int *e){
  *e = 0;
  return 0.5;
}
double ldexp(double x, int exp){
  int number = 1;
  int i;
  for(i=0; i<exp; i++){
    number = number * 2;
  }
  return (x*number);
}
//------------------
