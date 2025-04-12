#include "libft.h"

int	main(void)
{
	char src[] = "Spark42";
	char dest1[20];  // Para a função original
	char dest2[20];  // Para a tua ft_memcpy

	// Usando memcpy padrão
	memcpy(dest1, src, strlen(src) + 1);

	// Usando tua ft_memcpy
	ft_memcpy(dest2, src, strlen(src) + 1);

	printf("Original memcpy result: %s\n", dest1);
	printf("Your ft_memcpy result:  %s\n", dest2);

	// Comparando os resultados
	if (strcmp(dest1, dest2) == 0)
		printf("✅ Test PASSED!\n");
	else
		printf("❌ Test FAILED!\n");

	return 0;
}
