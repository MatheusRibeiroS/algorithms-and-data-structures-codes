/*
  Matheus dos Santos Ribeiro Silva
  BEE 1123 - "Route Change"
  07/02/2022
*/

#include<bits/stdc++.h>
#include <iostream>
#include <queue>

#define INFINITY INT_MAX

using namespace std;

int grafo[1010][1010];
int custo[1010];
int n, m, c, k;

queue<int> fila;

void infinito() {
  for (int i = 0; i <= n; i++) {
    custo[i] = INFINITY;
    for (int j = 0; j <= n; j++)
      grafo[i][j] = INFINITY;
  }
}

int dijkstra(int origem, int destino) {
  custo[origem] = 0;
  fila.push(origem);
  while (!fila.empty())
  {
    int i = fila.front();
    fila.pop();
    for (int j = 0; j < n; j++)
    {
      if (grafo[i][j] != INFINITY && custo[j] > custo[i] + grafo[i][j])
      {
        custo[j] = custo[i] + grafo[i][j];
        fila.push(j);
      }
    }
  }
  return custo[destino];
}

int main() {

  while (scanf("%d %d %d %d", &n, &m, &c, &k), (n || m || c || k)) {

    infinito();

    for (int i = 1; i <= m; i++) { 
      int u, v, p;
      scanf("%d %d %d", &u, &v, &p);

      if (u >= c && v >= c) { 
        grafo[u][v] = p;
        grafo[v][u] = p;
      }
      if (u >= c && v < c)
        grafo[u][v] = p;

      if (u < c && v >= c)
        grafo[v][u] = p;

      if (u < c && v < c && abs(u - v) == 1) {
        grafo[u][v] = p;
        grafo[v][u] = p;
      }
    }
    printf("%d\n", dijkstra(k, c - 1));
  }

  return 0;
}