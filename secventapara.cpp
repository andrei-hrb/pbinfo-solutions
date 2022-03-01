#include <fstream>

using namespace std;

ifstream fin("secventapara.in");
ofstream fout("secventapara.out");

int temp, maximum_global_size, local_size, result;
bool in_sequence = false;

int main()
{
  while (fin >> temp)
  {
    if (temp % 2 == 0)
    {
      in_sequence = true;
      local_size++;
    }
    else
    {
      if (in_sequence == true)
      {
        in_sequence = false;
        if (local_size > maximum_global_size)
        {
          maximum_global_size = local_size;
          result = 1;
        }
        else if (local_size == maximum_global_size)
        {
          result++;
        }
        local_size = 0;
      }
    }
  }

  if (in_sequence == true)
  {
    in_sequence = false;
    if (local_size > maximum_global_size)
    {
      maximum_global_size = local_size;
      result = 1;
    }
    else if (local_size == maximum_global_size)
    {
      result++;
    }
  }

  fout << result;

  return 0;
}