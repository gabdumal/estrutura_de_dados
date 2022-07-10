class FilaCont
{
private:
    int max;    // maximo de elementos do vetor
    int inicio; // indice do No que esta no inicio
    int fim;    // indice da posicao apos o ultimo No
    int *vet;   // vetor que armazena a fila
    void dobraCapacidade();

public:
    FilaCont(int tam);
    ~FilaCont();
    int getInicio();         // valor do No no inicio
    void enfileira(int val); // insere No no fim
    int desenfileira();      // elimina No do inicio
    bool vazia();            // verifica se esta vazia
};