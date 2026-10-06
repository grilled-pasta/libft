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
- `1` if `c` is alphabetic
- `0` if `c` is NOT alphabetic

#### `ft_isdigit`
```c
int ft_isdigit(int c);
```
Checks whether `c` is a digit (0 to 9).
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is digit
- `0` if `c` is NOT digit

#### `ft_isalnum`
```c
int ft_isalnum(int c);
```
Checks whether `c` is an alphanumeric character.
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is alphanumeric
- `0` if `c` is NOT alphanumeric

#### `ft_isascii`
```c
int ft_isascii(int c);
```
Checks whether `c` fits into the ASCII character set.
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is ASCII character
- `0` if `c` is NOT ASCII character

#### `ft_isprint`
```c
int ft_isprint(int c);
```
Checks whether `c` is a printable character including space.
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is printable character
- `0` if `c` is NOT printable character

#### `ft_strlen`
```c
size_t  ft_strlen(const char *s);
```
Returns the number of characters in the null-terminated string `s`, excluding the terminating `\0`.
##### Parameters
- `s` - string to measure.
##### Returns
- Number of characters in `s`.
##### Notes
Passing `NULL` or a string that is not null-terminated results in undefined behavior.
