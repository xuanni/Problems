#include <iostream>
#include <vector>
#include <format>


using namespace std;


int main(int argc, char *argv[])
{
    //
    int sum = 0;
    int perm = 0;
    int count_distance[7] = {0}; // count_distance[0] = number of |ai-aj| == 1
    for (int a1 = 1; a1 <= 8; a1++)
    {
	for (int a2 = 1; a2 <= 8; a2++)
	{
	    if (a2 == a1)
	    {
		continue;
	    }
	    for (int a3 = 1; a3 <= 8; a3++)
	    {
		if (a3 == a1 || a3 == a2)
		{
		    continue;
		}
		for (int a4 = 1; a4 <= 8; a4++)
		{
		    if (a4 == a1 || a4 == a2 || a4 == a3)
		    {
			continue;
		    }
		    for (int a5 = 1; a5 <= 8; a5++)
		    {
			if (a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4)
			{
			    continue;
			}
			for (int a6 = 1; a6 <= 8; a6++)
			{
			    if (a6 == a1 || a6 == a2 || a6 == a3 || a6 == a4 || a6 == a5)
			    {
				continue;
			    }
			    for (int a7 = 1; a7 <= 8; a7++)
			    {
				if (a7 == a1 || a7 == a2 || a7 == a3 || a7 == a4 || a7 == a5 || a7 == a6)
				{
				    continue;
				}
				for (int a8 = 1; a8 <= 8; a8++)
				{
				    if (a8 == a1 || a8 == a2 || a8 == a3 || a8 == a4 || a8 == a5 || a8 == a6 || a8 == a7)
				    {
					continue;
				    }
				    perm++;
				    sum += abs(a1-a2) + abs(a3-a4) + abs(a5-a6) + abs(a7-a8);
				}
			    }
			}
		    }
		}
	    }
	}
    }

    cout << format("brutal force method: total = {}, number of permutations = {}, average = {}", sum, perm, sum * 1.0 / perm) << endl;

    cout << format("analytical method: average = {}", (7 + 6*2 + 5*3 + 4*4 + 3*5 + 2*6 + 1*7) * 720*8/40320) << endl;


    return 0;
}
