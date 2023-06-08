#include<bits/stdc++.h>
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
#include <climits>
typedef  long long ll;
using namespace std;

int const N = 103;

int graph[N][N] = {0};
int visited[N][N] = {0};   // 0Ã»×ß¹ý
int xv[] = {0, 0, 0, 1, 1, 1, 2, 2, 3};
int yv[] = {1, 2, 3, 0, 1, 2, 0, 1, 0};

int n = 0, m = 0;
ll maxValue = INT_MIN, scale = 0;

void DFS(int x, int y, int scale){
  scale += graph[x][y];
  if(x == n-1 && y == m-1){
    if(maxValue < scale) maxValue = scale;
    return;
  }
  for(int i = 0; i < 9; i++){
    int tx = x + xv[i];
    int ty = y + yv[i];
    if(tx<n && ty<m && visited[tx][ty] == 0){
      visited[tx][ty] = 1;
      DFS(tx, ty, scale);
      visited[tx][ty] = 0;
    }
  }
}


int main()
{
  
  scanf("%d %d", &n, &m);
  for(int a = 0; a < n; a++){
    for(int b = 0; b < m;b++){
      scanf("%d", &graph[a][b]);
    }
  }

  DFS(0, 0, scale);

  printf("%d", maxValue);

  return 0;
}
