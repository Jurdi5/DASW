#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_LINE_LENGTH 1024

typedef struct {
    int id;
    char nombre[MAX_NAME_LENGTH];
    char apellido[MAX_NAME_LENGTH];
} Usuario;

typedef struct {
    int id;
    char materia[MAX_NAME_LENGTH];
    float calificacion;
} Calificacion;

Usuario* leerUsuarios(char* filename, int* numUsuarios) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return NULL;
    }

    int numLineas = 0;
    char linea[MAX_LINE_LENGTH];
    while (fgets(linea, sizeof(linea), file)) {
        numLineas++;
    }
    rewind(file);

    Usuario* usuarios = malloc(sizeof(Usuario) * numLineas);
    if (usuarios == NULL) {
        perror("Error al asignar memoria");
        fclose(file);
        return NULL;
    }

    int i = 0;
    while (fgets(linea, sizeof(linea), file)) {
        char* campos[3];
        int numCampos = 0;
        char* campo = strtok(linea, ",");
        while (campo != NULL) {
            campos[numCampos++] = campo;
            campo = strtok(NULL, ",");
        }

        usuarios[i].id = atoi(campos[0]);
        strcpy(usuarios[i].nombre, campos[1]);
        strcpy(usuarios[i].apellido, campos[2]);

        i++;
    }

    fclose(file);
    *numUsuarios = numLineas;
    return usuarios;
}

Calificacion* leerCalificaciones(char* filename, int* numCalificaciones) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return NULL;
    }

    int numLineas = 0;
    char linea[MAX_LINE_LENGTH];
    while (fgets(linea, sizeof(linea), file)) {
        numLineas++;
    }
    rewind(file);

    Calificacion* calificaciones = malloc(sizeof(Calificacion) * numLineas);
    if (calificaciones == NULL) {
        perror("Error al asignar memoria");
        fclose(file);
        return NULL;
    }

    int i = 0;
    while (fgets(linea, sizeof(linea), file)) {
        char* campos[3];
        int numCampos = 0;
        char* campo = strtok(linea, ",");
        while (campo != NULL) {
            campos[numCampos++] = campo;
            campo = strtok(NULL, ",");
        }

        calificaciones[i].id = atoi(campos[0]);
        strcpy(calificaciones[i].materia, campos[1]);
        calificaciones[i].calificacion = atof(campos[2]);

        i++;
    }

    fclose(file);
    *numCalificaciones = numLineas;
    return calificaciones;
}

int main() {
    int numUsuarios, numCalificaciones;
    Usuario* usuarios = leerUsuarios("usuarios.csv", &numUsuarios);
    Calificacion* calificaciones = leerCalificaciones("calificaciones.csv", &numCalificaciones);

    // Mostrar usuarios
    printf("Usuarios:\n");
    for (int i = 0; i < numUsuarios; i++) {
        printf("ID: %d, Nombre: %s, Apellido: %s\n", usuarios[i].id, usuarios[i].nombre, usuarios[i].apellido);
    }

    // Mostrar calificaciones
    printf("\nCalificaciones:\n");
    for (int i = 0; i < numCalificaciones; i++) {
        printf("ID: %d, Materia: %s, Calificacion: %.2f\n", calificaciones[i].id, calificaciones[i].materia, calificaciones[i].calificacion);
    }

    free(usuarios);
    free(calificaciones);

    return 0;
}
