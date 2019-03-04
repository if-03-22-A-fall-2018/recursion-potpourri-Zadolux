#include "recfuncs.h"
#include <stdlib.h>

struct CalculationResults perform_calculations(int* arr, int num)
{
  struct CalculationResults calc_results;
  calc_results.num_factorials = create_array(num);
  calc_results.no_of_nums = num;
  calc_results.no_of_sums = calc_array_size(num);

  calc_results.binary_sums = create_array(calc_results.no_of_sums);
  calc_results.sums = create_array(calc_results.no_of_sums);

  for(int i = 0; i < num; i++)
  {
    calc_results.num_factorials[i] = calc_factorial(arr[i]);
  }

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

int calc_array_size(int num)
{
  if(num <= 0)
  {
    return 1;
  }

  return 2 * calc_array_size(num - 1);
}

int calc_factorial(int num)
{
  if(num <= 1)
  {
    return 1;
  }
  else
  {
    return num * calc_factorial(num - 1);
  }
}

void calc_sums(int* nums, int size, int* out_arr, int* out_arr_bin)
{
  do_subset(nums, size - 1, 0, 0, out_arr, out_arr_bin, 0);
}

int convert_to_binary(int n)
{
  if(n != 0)
  {
    return (n % 2) + (10 * (convert_to_binary(n / 2)));
  }

  return 0;
}

int do_subset(int* nums, int size, int i, int index, int* out_arr, int* out_arr_bin, int sum)
{
  return 0;
}
