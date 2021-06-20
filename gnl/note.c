/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   note.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhan <jiwhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 21:39:59 by jiwhan            #+#    #+#             */
/*   Updated: 2021/06/21 04:34:00 by jiwhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//헤더파일시작
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# ifndef OPEN_MAX
#  define OPEN_MAX	10240
# endif
int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
//헤더파일 끝

//호출되는 함수1
static int	backup_join(char **backup, char *buf, ssize_t read_size)
{
	char	*tmp;
	buf[read_size] = '\0';
	if (*backup != 0)
	{
		tmp = ft_strjoin(*backup, buf);
		free(*backup);
	}
	else
		tmp = ft_strndup(buf, read_size);
	*backup = tmp;
	if (ft_strchr(*backup, '\n')) //한줄이 온전히 다 읽혀들어갔으면
		return (1); //1을 리턴
	return (0);
}
//호출되는 함수1 끝

//호출되는 함수2 시작
static int	check_line(char **backup, char **line)
{
	char	*ptr;
	char	*tmp;
	if ((ptr = ft_strchr(*backup, '\n')))
	{
		*line = ft_strndup(*backup, ptr - *backup);
		tmp = ft_strndup(ptr + 1, ft_strlen(ptr + 1));
		free(*backup);
		*backup = tmp;
		return (1);
	}
	else
	{
		*line = *backup;
		*backup = 0;
		return (0);
	}
}
//호출되는 함수2 끝

int			get_next_line(int fd, char **line) //인자 line은 뭘까?
{
	static char	*backup[OPEN_MAX]; //OPEN_MAX는 헤더파일에서 정의해줌(10240으루~)
	ssize_t		read_size; //read함수의 반환값 자료형 ssize_t, 읽어온 글자의 수
	char		buf[BUFFER_SIZE + 1]; //읽어온 값 저장하는 변수일까
	if (fd < 0 || fd >= OPEN_MAX || !line || BUFFER_SIZE <= 0) //예외처리, fd의 값이 올바른지 확인, fd의 범위가 open_max보다 작은지 확인, line이 0이 아니어야함!, 컴파일시 입력해주는 버퍼사이즈가 0 이상
		return (-1);
	while ((read_size = read(fd, buf, BUFFER_SIZE)) >= 0) //컴파일시 입력한 버퍼사이즈만큼 글자를 읽어서 buf에 저장.
	{ //while문 처음 들어올때의 상황=buffer_size만큼의 글자 수를 fd파일에서 읽어와서 buf변수에 저장했다.
		if (backup_join(&backup[fd], buf, read_size) || read_size == 0) //백업조인함수에 backup[fd]=처음엔 빈 포인터 문자열 변수?, buf=읽어온 글자, read_size=읽어온 글자 수
			break ;
	}
	if (read_size < 0) //read실패
		return (-1);
	return (check_line(&backup[fd], line)); //해당 파일디스크립터가 buffersize 만큼 읽어온 backup ?!, 빈 문자열 라인
}