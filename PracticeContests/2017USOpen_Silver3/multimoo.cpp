/*
ID: alina.l1
LANG: C++
PROB: starter_code
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <functional>
#include <queue>
#include <utility>

int deltai[] = {1, 0, -1, 0};
int deltaj[] = {0, 1, 0, -1};

int n;

// N by N grid (max value is 250)
int grid[250][250];

// true if already visited by search
bool visited[250][250];

int max1;
int max2;

int cursize;

// depth-first-search
void dfs(int i, int j, int target)
{
	// basic checks
	// i and j in bounds?
	if (!(i >= 0 && i < n) || !(j >= 0 && j < n))
	{
		return;
	}
	// i and j match target value?
	if (grid[i][j] != target)
	{
		return;
	}
	// i and j already visited?
	if (visited[i][j])
	{
		return;
	}

	// update visited value
	visited[i][j] = true;
	// update cursize
	cursize++;

}

int main()
{
	// Open Streams
	std::ifstream fin("multimoo.in");

	std::ofstream fout("multimoo.out");

	// Check
	if (!fin.is_open() || !fout.is_open())
	{
		std::cout << "File could not be opened.";
		fin.close();
		fout.close();
		return 1;
	}

	// read file
	fin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fin >> grid[i][j];
		}
	}

	

	// Close Streams
	fin.close();
	fout.close();

	return 0;
}