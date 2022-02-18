/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:55 by asoler            #+#    #+#             */
/*   Updated: 2022/02/17 01:27:02 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && n > 1)
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	result = *s1 - *s2;
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	int x;
// 	char a[] = "cacau alksjlkas";
// 	char b[] = "cacau ";

// 	x = strncmp(a, b, 7);
// 	printf("original = %d\n", x);
	
// 	x = ft_strncmp(a, b, 7);
// 	printf("angela = %d\n", x);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int        ft_strncmp(char *s1, char *s2, unsigned int n);

void    ft_strncmp_test(char *s1, char *s2, unsigned int n)
{
    int res;
    int ft_res;

    res = strncmp(s1, s2, n);
    ft_res = ft_strncmp(s1, s2, n);
    if (res != ft_res)
        printf("> KO, expected: %d, got: %d\n", res, ft_res);
    else
        printf("> OK, result: %d\n", ft_res);
}

int        main(void)
{
    char    *s1 = "abcdefghi";
    char    *s2 = "abcdEfghi";
    char    s3[] = {'a', 'b', 23, 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
    int        offset;

    offset = 0;
    printf("[1] Testing strings \"%s\" and \"%s\"\n", s1, s2);
    while (offset < 10)
    {
        ft_strncmp_test(s1, s2, offset);
        offset++;
    }
    offset = 0;
    printf("[2] Testing strings \"%s\" and \"%s\"\n", s1, s3);
    while (offset < 10)
    {
        ft_strncmp_test(s1, s3, offset);
        offset++;
    }
    offset = 0;
    printf("[3] Testing strings \"%s\" and \"%s\"\n", s2, s3);
    while (offset < 10)
    {
        ft_strncmp_test(s2, s3, offset);
        offset++;
    }
    return (0);
}

// #include <string.h>
// #include <stdio.h>

// int    main(void)
// {
//     char    str0[100] = "cacau";
//     char    str1[100] = "cacau";
//     int        result;
//     int        result2;
//     int        limite = 150;

//     result = strncmp(str0, str1, limite);
//     printf("Comando original:\n%d \n", result);
//     // if (result == 0)
//     //     printf("Strings são iguais.\n");
//     // if (result > 0)
//     //     printf("O valor ASCII do caractere diferente na string A é maior que na string B.\n");
//     // if (result < 0)
//     //     printf("O valor ASCII do caractere diferente na string A é menor que na string B.\n");
        
//     result2 = ft_strncmp(str0, str1, limite);
//     printf("Seu comando:\n%d \n", result2);
//     // if (result2 == 0)
//     //     printf("Strings são iguais.\n");
//     // if (result2 > 0)
//     //     printf("O valor ASCII do caractere diferente na string A é maior que na string B.\n");
//     // if (result2 < 0)
//     //     printf("O valor ASCII do caractere diferente na string A é menor que na string B.\n");
// }
// #include <stdio.h>
// #include <string.h>
// #define COL_SIZE 10

// int main(void)
// {
//     char    *tests[] = {"", "aaaaa", "bbbbb", "aabbb"};
//     int        n = 0;
//     int        first = 0;
//     int        second = 0;
//     int        std_len;
//     int        ft_len;
    
//     printf(" String 1  |  String 2  | strncmp()  | ft_strncmp()\n");
//     while (n < 7)
//     {
//         printf(">>> n = %d\n", n);
//         first = 0;
//         while (first < 4)
//         {
//             second = 0;
//             while (second < 4)
//             {
//                 std_len = strncmp(tests[first], tests[second], n);
//                 ft_len = ft_strncmp(tests[first], tests[second], n);
//                 printf("%*s | %*s | %*d | %*d", 
//                     COL_SIZE, tests[first],
//                     COL_SIZE, tests[second],
//                     COL_SIZE, std_len, 
//                     COL_SIZE, ft_len);
//                 if (std_len != ft_len)
//                     printf("\t<--- Diferença");
//                 printf("\n");
//                 second++;
//             }
//             first++;
//         }
//         n++;
//     }
// }
