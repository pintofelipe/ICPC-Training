#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> // Para medir el tiempo

/*
 * Función de comprobación de primalidad (optimización básica).
 * Devuelve 1 si n es primo, 0 en caso contrario.
 */
int is_prime(long long n) {
    if (n <= 1) return 0; // 0 y 1 no son primos
    if (n <= 3) return 1; // 2 y 3 son primos
    if (n % 2 == 0 || n % 3 == 0) return 0; // Optimización para múltiplos de 2 y 3

    // Solo necesitamos comprobar hasta la raíz cuadrada de n
    // Saltamos de 6 en 6 (i, i+2)
    for (long long i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <numero_maximo>\n", argv[0]);
        return 1;
    }

    // Convertir el argumento de la línea de comandos a un número largo
    long long max_num = atoll(argv[1]);
    if (max_num <= 0) {
         fprintf(stderr, "Por favor, introduce un número positivo grande.\n");
         return 1;
    }

    long long prime_count = 0;

    // --- Iniciar temporizador ---
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    // Bucle principal para contar primos
    for (long long i = 2; i <= max_num; i++) {
        if (is_prime(i)) {
            prime_count++;
        }
    }

    // --- Detener temporizador ---
    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_spent = (end.tv_sec - start.tv_sec) +
                      (end.tv_nsec - start.tv_nsec) / 1e9;

    printf("--- Benchmark de un solo hilo ---\n");
    printf("Rango de búsqueda: 1 a %lld\n", max_num);
    printf("Total de primos encontrados: %lld\n", prime_count);
    printf("Tiempo de ejecución: %.2f segundos\n", time_spent);

    return 0;
}