#ifndef _INCLUDES_
#define _INCLUDES_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctime>

#include <iostream>
#include <string.h>

using namespace std;

//#define NDEBUG

static int seed = 0;

void initSeed()
{
  seed = (int) time(NULL);
  srand(seed);
}


//Generates a random number in [0 N-1]
int random(int N)
{
  if( seed == 0) initSeed();

  return rand() % N;
}

#endif //_INCLUDES_
