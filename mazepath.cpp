#include<ios>
#include<iostream>
#include<string>

using namespace std;

int mazepath(int sr, int sc, int er, int ec, string ans, bool visited[3][3])
{
	if (sr == er && sc == ec)
	{
		cout<<ans<< endl;
		return 1;
	}
	visited[sr][sc] = true;
	int count = 0;
	if (sc + 1 <= ec && !visited[sr][sc + 1])
		count += mazepath(sr, sc + 1, er, ec, ans + "H", visited);  	
	if (sr - 1 >= 0 && !visited[sr-1][sc])
		count += mazepath(sr - 1, sc, er, ec, ans + "U", visited);
	//if (sr+1<=er && sc+1<=ec)
	//count += mazepath(sr+1, sc + 1, er, ec, ans + "D");
	if (sc - 1 >= 0 && !visited[sr][sc-1])
		count += mazepath(sr, sc - 1, er, ec, ans + "B", visited);
	if (sr + 1 <= er && !visited[sr+1][sc])
		count += mazepath(sr + 1, sc, er, ec, ans + "V", visited);
	visited[sr][sc] = false;

	return count;
}

int main()
{
	bool visited[3][3];
	visited[0][0] = false;
	visited[0][1] = false;
	visited[0][2] = false;
	visited[1][1] = false;
	visited[1][2] = false;
	visited[1][0] = false;
	visited[2][0] = false;
	visited[2][1] = false;
	visited[2][2] = false;

	cout<<mazepath(0, 0, 2, 2, "",visited);

	cin.get();
	return 0;
}