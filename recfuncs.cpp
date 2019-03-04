#include "recfuncs.h"
#include <stdlib.h>

struct CalculationResults perform_calculations(int* arr, int n)
{
  struct CalculationResults calc_results;
  return calc_results;
}

int* create_array(int size)
{
  if(size > 0)
  {
    int new_array_size = calc_array_size(size);
    int* new_array = (int*) malloc(sizeof(int) * new_array_size);

    for(int i = 0; i < new_array_size; i++)
    {
      new_array[i] = -1;
    }

    return new_array;
  }
  else
  {
    return 0;
  }
}

int calc_array_size(int n)
{
  if(n <= 0)
  {
    return 1;
  }

  return 2 * calc_array_size(n - 1);
}

int calc_factorial(int n)
{
  if(n <= 1)
  {
    return 1;
  }
  else
  {
    return n * calc_factorial(n - 1);
  }
}

void calc_sums(int* n, int count, int* out_arr, int* out_arr_bin)
{
  run_all(n, count - 1, 0, 0, 0, out_arr, out_arr_bin);
}

int convert_to_binary(int n)
{
  if(n != 0)
  {
    return (n % 2) + (10 * (convert_to_binary(n / 2)));
  }

  return 0;
}

int run_all(int* nums, int size, int* out_arr, int* out_arr_bin, int i, int index, int sum)
{
  return 0;
}
