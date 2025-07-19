/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ha ju young <juha@student.42seoul.kr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:51:32 by juha              #+#    #+#             */
/*   Updated: 2025/07/19 11:56:45 by juha             ###   ########.kr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

typedef struct {
        int num;
        int pos;
} max_info;

#define row 0
#define col 1
#define total_number 81

int main() {
        int bitmap[81];

        max_info answer = {0};
        answer.num = -1;

        for (int i = 0; i < total_number ; i++){
                scanf("%d", bitmap + i);
                if (answer.num < bitmap[i]) {
                        answer.num = bitmap[i];
                        answer.pos = i;
                }
        }
        printf("%d\n%d %d", \
               answer.num, answer.pos / 9 + 1, answer.pos % 9 + 1);
        return 0;
}
