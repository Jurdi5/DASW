#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_LINE_LENGTH 1024

// Estructura para almacenar los datos de los usuarios
typedef struct {
    int id;
    char nombre[MAX_NAME_LENGTH];
    char apellido[MAX_NAME_LENGTH];
} Usuario;

// Estructura para almacenar los datos de las calificaciones
typedef struct {
    int id;
    char materia[MAX_NAME_LENGTH];
    float calificacion;
} Calificacion;

// Función para leer los datos de los usuarios desde un archivo CSV
Usuario* leerUsuarios(const char* filename, int* numUsuarios) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo de usuarios");
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
        perror("Error al asignar memoria para usuarios");
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

// Función para leer los datos de las calificaciones desde un archivo CSV
Calificacion* leerCalificaciones(const char* filename, int* numCalificaciones) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo de calificaciones");
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
        perror("Error al asignar memoria para calificaciones");
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

// Función para mostrar el menú
void mostrarMenu() {
    printf("\nMenu:\n");
    printf("1. Listado de usuarios registrados con ID\n");
    printf("2. Listado de calificaciones: pida el ID de usuario y muestre el nombre y luego las materia y calificaciones\n");
    printf("3. Salir\n");
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("pega en tu terminal la ubicacion: %s <alumnos.csv> <calificaciones.csv>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int numUsuarios, numCalificaciones;

    // Leer usuarios desde archivo CSV
    Usuario* usuarios = leerUsuarios(argv[1], &numUsuarios);
    if (usuarios == NULL) {
        printf("Error al leer usuarios\n");
        return EXIT_FAILURE;
    }

    // Leer calificaciones desde archivo CSV
    Calificacion* calificaciones = leerCalificaciones(argv[2], &numCalificaciones);
    if (calificaciones == NULL) {
        printf("Error al leer calificaciones\n");
        free(usuarios);
        return EXIT_FAILURE;
    }

    int opcion;
    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Listado de usuarios registrados con ID:\n");
                for (int i = 0; i < numUsuarios; i++) {
                    printf("ID: %d, Nombre: %s %s\n", usuarios[i].id, usuarios[i].nombre, usuarios[i].apellido);
                }
                break;
            case 2:
                printf("Ingrese el ID del usuario: ");
                int idUsuario;
                scanf("%d", &idUsuario);

                // Buscar el usuario por su ID
                Usuario* usuario = NULL;
                for (int i = 0; i < numUsuarios; i++) {
                    if (usuarios[i].id == idUsuario) {
                        usuario = &usuarios[i];
                        break;
                    }
                }

                // Si se encontró el usuario, mostrar sus calificaciones
                if (usuario != NULL) {
                    printf("Nombre: %s %s\n", usuario->nombre, usuario->apellido);
                    printf("Calificaciones:\n");
                    for (int i = 0; i < numCalificaciones; i++) {
                        if (calificaciones[i].id == idUsuario) {
                            printf("Materia: %s, Calificacion: %.2f\n", calificaciones[i].materia, calificaciones[i].calificacion);
                        }
                    }
                } else {
                    printf("No se encontro ningun usuario con el ID especificado\n");
                }
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida\n");
        }
    } while (opcion != 3);

    // Liberar memoria
    free(usuarios);
    free(calificaciones);

    return EXIT_SUCCESS;
}
