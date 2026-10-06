_This project has been created as part of the 42 curriculum by alkonsta_
# Libft
## Description
## Instructions
## Resources
[Beej's Guide to C Programming](https://beej.us/guide/bgc/)
## Library
### Libc functions

| | | | | 
|---|---|---|---|
| [`ft_isalpha`](#ft_isalpha) | [`ft_memcpy`](#ft_memcpy) | [`ft_strrchr`](#ft_strrchr) | [`calloc`](#calloc) |
| [`ft_isdigit`](#ft_isdigit) | [`ft_memmove`](#ft_memmove) | [`ft_strncmp`](#ft_strncmp) | [`strdup`](#strdup) |
| [`ft_isalnum`](#ft_isalnum) | [`ft_strlcpy`](#ft_strlcpy) | [`ft_memchr`](#ft_memchr) | |
| [`ft_isascii`](#ft_isascii) | [`ft_strlcat`](#ft_strlcat) | [`ft_memcmp`](#ft_memcmp) | |
| [`ft_isprint`](#ft_isprint) | [`ft_toupper`](#ft_toupper) | [`ft_strnstr`](#ft_strnstr) | |
| [`ft_strlen`](#ft_strlen) | [`ft_tolower`](#ft_tolower) | [`ft_atoi`](#ft_atoi) | |
| [`ft_memset`](#ft_memset) | [`ft_strchr`](#ft_strchr) | | | 
| [`ft_bzero`](#ft_bzero) | | | | 

#### `ft_isalpha`
```c
int ft_isalpha(int c);
```
Checks whether `c` is an alphabetic character.
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is alphabetic, otherwise `0` 
##### Example
```c
ft_isalpha('A'); // 1
ft_isalpha('7'); // 0
```

#### `ft_strlen`
```c
size_t  ft_strlen(const char *s);
```
Returns the number of characters in the null-terminated string `s`, excluding the terminating `\0`.
##### Parameters
- `s` - string to measure.
##### Returns
- Number of characters in `s`.
##### Example
```c
ft_strlen("Hello"); //5
```
##### Notes
- `s` must point to a valid null-terminated string.
- Passing `NULL` results in undefined behavior.
