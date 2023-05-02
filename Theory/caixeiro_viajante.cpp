#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const int INF = 1e9; // Valor máximo para distâncias
const int MAXN = 100; // Número máximo de cidades

int n; // Número de cidades
int dist[MAXN][MAXN]; // Matriz de distâncias
vector<int> path; // Caminho percorrido

// Função para encontrar o vizinho mais próximo
int find_nearest(int city, vector<bool>& visited) {
    int nearest = -1;
    int min_dist = INF;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && dist[city][i] < min_dist) {
            nearest = i;
            min_dist = dist[city][i];
        }
    }
    return nearest;
}

// Função para resolver o problema do caixeiro viajante
void tsp(int start) {
    path.clear();
    vector<bool> visited(n, false);
    int current = start;
    path.push_back(current);
    visited[current] = true;
    while (path.size() < n) {
        int next = find_nearest(current, visited);
        path.push_back(next);
        visited[next] = true;
        current = next;
    }
    path.push_back(start);
}

// Função para calcular a distância total percorrida
int calculate_distance() {
    int total = 0;
    for (int i = 1; i < n + 1; i++) {
        int a = path[i - 1];
        int b = path[i];
        total += dist[a][b];
    }
    return total;
}

int main() {
    // Lê a entrada
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            	cout << "De " << i << " para " << j;
		cin >> dist[i][j];
        }
    }

    // Resolve o problema do caixeiro viajante
    tsp(0);

    // Imprime a solução
    cout << "Caminho percorrido: ";
    for (int i = 0; i < n + 1; i++) {
        cout << path[i] << " ";
    }
    cout << endl;
    cout << "Distância total percorrida: " << calculate_distance() << endl;

    return 0;
}
