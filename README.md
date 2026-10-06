_This project has been created as part of the 42 curriculum by alkonsta_
# Libft
## Description
## Instructions
## Resources
[Beej's Guide to C Programming](https://beej.us/guide/bgc/)  
[C Reference](https://en.cppreference.com/c/)

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
- `1` if `c` is alphabetic.
- `0` if `c` is NOT alphabetic.

#### `ft_isdigit`
```c
int ft_isdigit(int c);
```
Checks whether `c` is a digit (0 to 9).
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is digit.
- `0` if `c` is NOT digit.

#### `ft_isalnum`
```c
int ft_isalnum(int c);
```
Checks whether `c` is an alphanumeric character.
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is alphanumeric.
- `0` if `c` is NOT alphanumeric.

#### `ft_isascii`
```c
int ft_isascii(int c);
```
Checks whether `c` fits into the ASCII character set.
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is ASCII character.
- `0` if `c` is NOT ASCII character.

#### `ft_isprint`
```c
int ft_isprint(int c);
```
Checks whether `c` is a printable character including space.
##### Parameters
- `c` - character to check.
##### Returns
- `1` if `c` is printable character.
- `0` if `c` is NOT printable character.

#### `ft_strlen`
```c
size_t  ft_strlen(const char *s);
```
Returns the number of characters in the null-terminated string `s`, excluding the terminating `\0`.
##### Parameters
- `s` - string to measure.
##### Returns
- Number of characters in `s`.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_memset`
```c 
void	*ft_memset(void *s, int c, size_t n);
```
Copies the value `(unsigned char) c` into each of the first `n` bytes of the memory area pointed to by `s`.
##### Parameters
- `s` - pointer to the memory to fill.
- `c` - fill byte.
- `n` - number of bytes to fill.
##### Returns
- A pointer to `s`.
> Passing `NULL` or if `n` is greater than the length of `s` results in undefined behavior.
#### `ft_bzero`
```c 
void	ft_bzero(void *s. size_t n);
```
Writes `0` into each of the first `n` bytes of the memory area pointed to by `s`. Equivalent to `ft_memset(a, '\0', n).`
##### Parameters
- `s` - pointer to the memory to fill.
- `n` - number of bytes to fill.
##### Returns
- Nothing
> Passing `NULL` or if `n` is greater than the length of `s` results in undefined behavior.
#### `ft_memcpy`
```c 
void	*ft_memcpy(void *dest, const void *src, size_t n);
```
Copies the first `n` bytes from the memory area pointed to by `(unsigned char *) src` to the memory area pointed to by `(unsigned char *) dest`. 
##### Parameters
- `dest` - pointer to the memory area to copy to.
- `src` - pointer to the memory area to copy from.
- `n` - number of bytes to copy.
##### Returns
- A pointer to `dest`.
> Passing `NULL` or if `n` is greater than the length of `dest` results in undefined behavior.
#### `ft_memmove`
```c 
void	*ft_memmove(void *dest, const void *src, size_t n);
```
Copies the first `n` bytes from the memory area pointed to by `(unsigned char *) src` to the memory area pointed to by `(unsigned char *) dest`. *The memory areas may overlap*.
##### Parameters
- `dest` - pointer to the memory area to copy to.
- `src` - pointer to the memory area to copy from.
- `n` - number of bytes to copy.
##### Returns
- A pointer to `dest`.
> Passing `NULL` or if `n` is greater than the size of `dest` or `src` results in undefined behavior.
