
// Constructoras
integer_matriz create_integer_matriz(integer n, integer m){
    integer_matriz result = new integer_array[n];
    for( int i=0; i<n; i++ ){
        result[i] = create_integer_array(m);
    };
    return result;
};
/*
//Destructoras
void liberar_matriz_entero( matriz_entero A, int n, int m ){
  for( int i=0; i<n; i++ ){
      liberar_arreglo_entero(A[i], m);
  };
  delete[] A;
};

// Persistencia (entrada / salida)
matriz_entero leer_matriz_entero( istream& is, int n, int m ){
    matriz_entero A = crear_matriz_entero(n,m);
    for( int i=0; i<n; i++ ){
        liberar_arreglo_entero(A[i], m);
        A[i] = leer_arreglo_entero(is, m);
    };
    return A;
};

ostream& escribir_matriz_entero( ostream& os, matriz_entero a, int n, int m ){
    for( int i=0; i<n; i++ ){
        escribir_arreglo_entero(os, a[i], m);
        os << endl;
    };
    return os;
};*/
