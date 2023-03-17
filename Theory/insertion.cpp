void insertionSort(int vetor[], int n)
{
	for(int i = 1; i < n; i++)  // 8n
	{
		int chave = vetor[i];  // 4n
		int j = i - 1;  // 4n
		while(j >= 0 && vetor[j] > chave)  // 7((n + 1) / 2)
		{
			vetor[j + 1] = vetor[j];  // 6((n + 1) / 2)
			j--;  // 3((n + 1) / 2)
		}
		vetor[j + 1] = chave;  // 5n
	}
}

/*
	Análise assintótica:
		Θ = 8n + 4n + 4n + 5n + (n * (16((n+1)/2)))
		Θ = 8n^2 + 29n  // Caso real do código

		O(n^2)  // Pior caso do código
		Ω(n)  // Melhor caso do código
*/
