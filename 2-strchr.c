#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
        	int i = 0;
 
        	for (; s[i] >= '\0'; i++)
        	{
                    	if (s[i] == c)
                                	return (&s[i]);
        	}
        	return (0);
}
 
 
 
============================
 
2-strlen.c
 
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
        	int longi = 0;
 
        	while (*s != '\0')
        	{
                    	longi++;
                    	s++;
        	}
 
        	return (longi);
}
 
 
 
============================
 
2-strncpy.c
 
#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        	int j;
 
        	j = 0;
        	while (j < n && src[j] != '\0')
        	{
                    	dest[j] = src[j];
                    	j++;
        	}
        	while (j < n)
        	{
                    	dest[j] = '\0';
                    	j++;
        	}
 
        	return (dest);
}

