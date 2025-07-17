
#include "ft_printf.h"

static int	ft_puthex_size(unsigned int dec)
{
	int count;

	count = 1;
	
	while (dec > 15)
	{
		dec /= 16;
		count ++;
	return (count);
}

static	char	*ft_hexconv(char *hex)
{
	

int	ft_puthex(unsigned int dec, int cap);
{
	char 	*hex;
	int	size;

	hex = (char *)malloc(ft_puthex_size(dec) * sizeof(char));
	if(!hex)
		return (NULL);
	if (cap)
	{
		while (hex[i]
		{
		}
	}
	else
	{}
	size = ft_strlen(hex);
	free(hex);
	return (size);
}
