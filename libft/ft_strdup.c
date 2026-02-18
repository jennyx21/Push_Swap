/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:02:25 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/27 16:31:41 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief hslch
/// @param s sdsvcds
/// @return svsvc
char	*ft_strdup(const char *s)
{
	char	*restult;

	restult = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!restult)
		return (NULL);
	ft_strlcpy(restult, s, (ft_strlen(s) + 1));
	return (restult);
}
