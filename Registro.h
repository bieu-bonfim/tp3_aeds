typedef struct {
    int chave;
    char cad0[200], cad1[200], cad2[200], cad3[200], cad4[200], cad5[200], cad6[200], cad7[200], cad8[200], cad9[200];
    float real0, real1, real2, real3;
} Registro;

// Função para criar n registros aleatórios
void InicializarRegistros(Registro registro[], int n);
char* rand_string(char* str);


