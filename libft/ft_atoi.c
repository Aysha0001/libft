/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:43:19 by abataine          #+#    #+#             */
/*   Updated: 2024/04/21 19:10:47 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	long long	numb;
	int			sign;

	sign = 1;
	numb = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-' )
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		numb = numb * 10 + *str - '0';
		if (numb < -2147483648)
			return (2500000000);
		else if (numb > 2147483647)
			return (2500000000);
		str++;
	}
	numb = numb * sign;
	return (numb);
}

// #include <stdio.h>

// int ft_atoi(const char *str);

// int main() {
//     const char *str1 = "12345";
//     const char *str2 = "   -98abc";
//     const char *str3 = "  42=abc";

//     int num1 = ft_atoi(str1);
//     int num2 = ft_atoi(str2);
//     int num3 = ft_atoi(str3);

//     printf("Converted number 1: %d\n", num1);
//     printf("Converted number 2: %d\n", num2);
//     printf("Converted number 3: %d\n", num3);

//     return 0;
// }