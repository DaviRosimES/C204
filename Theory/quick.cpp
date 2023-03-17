void quickSort(int vetor[], int inicio, int fim)
{
	int i = inicio;
	int j = fim;

	// Ecolhe o elemento central como pivô
	int pivo = vetor[(inicio + fim) / 2];
	while(i <= j)
	{
		while(vetor[i] < pivo)
		{
			// encontra o primeiro elemento à direita do pivô que é maior que ele
			i++;
		}
		while(vetor[j] > pivo)
		{
			// encontra o primeiro elemento à esquerda do pivô que é menor que ele
			j--;
		}

		if(i <= j)  // se i <= j, então troca os elementos i e j de lugar
		{
			std::swap(vetor[i], vetor[j]);
			i++;
			j--;
		}
	}

	// Chama a função recursivamente para a sublista à esquerda do pivô
	if(inicio < j)
	{
		quickSort(vetor, inicio, j);
	}
	// Chama a função recursivamente para a sublista à direita do pivô
	if(i < fim)
	{
		quickSort(vetor, i, fim);
	}
}


/*
	Análise assintótica de algoritmos recursivos:
	Fórmula do algoritmo mestre:
		O(n) = a * T(n / b) + f(n)
			a = número de divisões
			T(n / b) = tamanho do subproblema
			f(n) = O(n ^ d) ||  d = combinar os resultados

	O(n) = 2 * T(n / 2) + [log(n)]
	O[n*log(n)]
*/
