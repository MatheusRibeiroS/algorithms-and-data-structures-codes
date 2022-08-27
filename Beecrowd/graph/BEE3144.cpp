/*
  Matheus dos Santos Ribeiro Silva
  BEE 3144 - "G of graph"
  07/02/2022
*/

#include <iostream>
#include <vector>

using namespace std;

typedef struct g
{
  int u, v, d;
} grafo;

#define MAX (((600) * (600 - 1)) >> 1)

int id[600];
int s[600];
grafo g[MAX];

int compara(const void *a, const void *b) {

  return ((grafo *)a)->d - ((grafo *)b)->d;
}

inline void troca(int *a, int *b) {

  int c = *a;
  *a = *b;
  *b = c;
}

int Encontra(int u) {

  if (u == id[u])
    return u;
  else
    return id[u] = Encontra(id[u]);
}

int kruskal(int __c) {

  int ans = 0;
  for (int i = 0; i < __c; ++i)
  {

    int p = Encontra(g[i].u);
    int q = Encontra(g[i].v);

    if(p != q) {

      if (s[p] > s[q]){
        troca(&p, &q);
      }

      id[p] = q;
      s[q] += s[p];

      ans += g[i].d;
    }
  }
  return ans * 2;
}

int main(int argc, char const *argv[]) {
  int n, m, o;
  int u, v, d;

  cin >> n >> m >> o;

  for (int i = 0; i < m; i++)
  {
    cin >> g[i].u >> g[i].v >> g[i].d;
  }

  for (int i = 0; i <= n; i++)
  {
    id[i] = i;
    s[i] = 1;
  }

  qsort(g, m, sizeof(grafo), compara);

  cout << kruskal(m) << endl;

  int h;
  cin >> h;

  return 0;
}
