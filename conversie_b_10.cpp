#include <fstream>
using namespace std;
ifstream fin("conversie_b_10.in");
ofstream fout("conversie_b_10.out");
int main()
{
	int n, b, nr, p;
	fin >> n >> b;
	for (nr = 0, p = 1; n; p *= b, n /= 10)
	{
		nr += n%10 * p;
	}
	fout << nr;
	return 0;
}
// scor 100
