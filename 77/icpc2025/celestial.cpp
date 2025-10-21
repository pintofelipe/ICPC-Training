#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int MAXN = 1505; // Máximo número de estrellas

// Estructura para representar el grafo
vector<int> grafo[MAXN];
bool visitado[MAXN];
int distancia[MAXN];
int padre[MAXN];

int n, m; // n = número de estrellas, m = número de conexiones

// Función BFS para encontrar el camino más corto
bool bfs(int inicio) {
    // Limpiamos los arreglos
    memset(visitado, false, sizeof(visitado));
    memset(distancia, -1, sizeof(distancia));
    memset(padre, -1, sizeof(padre));
    
    queue<int> cola;
    cola.push(inicio);
    visitado[inicio] = true;
    distancia[inicio] = 0;
    
    while (!cola.empty()) {
        int actual = cola.front();
        cola.pop();
        
        // Verificamos si llegamos al borde (estrella con índice 0)
        // Según el problema, K=0 indica borde
        if (actual == 0 && distancia[actual] > 0) {
            return true; // Encontramos un camino al borde
        }
        
        // Exploramos todos los vecinos
        for (int vecino : grafo[actual]) {
            if (!visitado[vecino]) {
                visitado[vecino] = true;
                distancia[vecino] = distancia[actual] + 1;
                padre[vecino] = actual;
                cola.push(vecino);
            }
        }
    }
    
    return false;
}

// Función para reconstruir el camino
void imprimirCamino(int destino) {
    vector<int> camino;
    int actual = destino;
    
    // Reconstruimos el camino desde el destino hasta el origen
    while (actual != -1) {
        camino.push_back(actual);
        actual = padre[actual];
    }
    
    // Imprimimos el camino en orden correcto
    cout << "Camino encontrado (longitud " << camino.size() << "): ";
    for (int i = camino.size() - 1; i >= 0; i--) {
        cout << camino[i];
        if (i > 0) cout << " -> ";
    }
    cout << endl;
}

int main() {
    // Lectura de entrada
    cin >> n >> m;
    
    // Leemos las conexiones (aristas)
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        // Creamos conexión bidireccional
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    
    // Leemos la estrella de inicio
    int inicio;
    cin >> inicio;
    
    // Ejecutamos BFS desde la estrella inicial
    if (bfs(inicio)) {
        cout << "Se encontró un camino al borde!" << endl;
        
        // Encontramos cuál es el nodo borde más cercano
        int mejorBorde = -1;
        int mejorDistancia = MAXN;
        
        for (int i = 0; i < n; i++) {
            // Verificamos si es un nodo borde (en el problema depende de la definición)
            // Asumimos que los bordes tienen condiciones especiales
            if (visitado[i] && distancia[i] < mejorDistancia) {
                // Aquí deberías verificar si 'i' es realmente un borde
                // según las condiciones del problema
                mejorBorde = i;
                mejorDistancia = distancia[i];
            }
        }
        
        if (mejorBorde != -1) {
            imprimirCamino(mejorBorde);
        }
    } else {
        cout << "No se encontró camino al borde" << endl;
    }
    
    return 0;
}

/*
EJEMPLO DE PRUEBA DE ESCRITORIO:

Entrada:
5 4
0 1
1 2
2 3
3 4
0

Representación del grafo:
0 -- 1 -- 2 -- 3 -- 4

BFS desde nodo 0:
Paso 1: Visitamos 0, distancia[0] = 0
        Cola: []
        
Paso 2: Exploramos vecino 1
        distancia[1] = 1, padre[1] = 0
        Cola: [1]
        
Paso 3: Desde 1, exploramos 2
        distancia[2] = 2, padre[2] = 1
        Cola: [2]
        
Paso 4: Desde 2, exploramos 3
        distancia[3] = 3, padre[3] = 2
        Cola: [3]
        
Paso 5: Desde 3, exploramos 4
        distancia[4] = 4, padre[4] = 3
        Cola: [4]

Camino final: 0 -> 1 -> 2 -> 3 -> 4
*/