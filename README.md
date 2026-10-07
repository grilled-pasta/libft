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
#### `ft_strlcpy`
```c 
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
```
Copies the string pointed to by `src`, into a string at the buffer pointed to by `dst`. If the string doesn't fit in the buffer, it is truncated.
##### Parameters
- `dest` - pointer to the string to copy to.
- `src` - pointer to the string to copy from.
- `n` - number of characters to copy, including the byte for NULL-termination.
##### Returns
- The total length of the string they tried to create, as if truncation didn't happen. 
> Passing `NULL` results in undefined behavior.
#### `ft_strlcat`
```c 
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
```
Catenates the string pointed to by `src`, after the string pointed to by `dst` (overwriting its terminating null byte). If the string doesn't fit in the buffer, it is truncated.
##### Parameters
- `dest` - pointer to the string to copy to.
- `src` - pointer to the string to copy from.
- `n` - number of characters to copy, including the byte for NULL-termination.
##### Returns
- The total length of the string they tried to create, as if truncation didn't happen. 
> Passing `NULL` results in undefined behavior.
#### `ft_toupper`
```c 
int	ft_toupper(int c);
```
Converts the given character to uppercase.
##### Parameters
- `c` - character to check.
##### Returns
- Uppercase version of `c` or unmodified `c` if there is no uppercase version.
> Passing a value of `c` that is not representable as `unsigned char` or it doesn't equal `EOF` results in undefined behavior.
#### `ft_tolower`
```c 
int	ft_tolower(int c);
```
Converts the given character to lowercase.
##### Parameters
- `c` - character to check.
##### Returns
- Lowercase version of `c` or unmodified `c` if there is no lowercase version.
> Passing a value of `c` that is not representable as `unsigned char` or it doesn't equal `EOF` results in undefined behavior.
#### `ft_strchr`
```c 
int	ft_strchr(int c);
```
Searches for the first occurance of a `(unsigned char) c` within the string `s`.
##### Parameters
- `s` - pointer to the string to analyze.
- `c` - character to search for.
##### Returns
- A pointer to the first occurance of the matched character or `NULL` if it was not found.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior. 
#### `ft_strrchr`
```c 
int	ft_strrchr(int c);
```
Searches for the last occurance of `(unsigned char) c` within the string `s`.
##### Parameters
- `s` - pointer to the string to analyze.
- `c` - character to search for.
##### Returns
- A pointer to the last occurance of the matched character or `NULL` if it was not found.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior. 
#### `ft_strncmp`
```c 
int	ft_strncmp(const char *s1, const char *s2, size_t n);
```
Compares at most `n` characters of the two strings `s1` and `s2`. Characters following `\0` are not compared.
##### Parameters
- `s1` - pointer to the firs string.
- `s2` - pointer to the second string.
- `n` - maximum number of characters to compare.
##### Returns
- The difference between the values of the first pair of `(unsigned char)` characters that differ in the strings.
> Passing `NULL` results in undefined behavior. 
#### `ft_memchr`
```c 
void	*ft_memchr(const void *s, int c, size_t n);
```
Searches the initial `n` bytes of the memory area pointed to by `s` for the first occurance of `(unsigned char) c`.
##### Parameters
- `s` - pointer to the memory area to analyze.
- `c` - character to search for.
- `n` - maximum number of bytes to scan.
##### Returns
- A pointer to the matching byte or `NULL` if it was not found.
> Passing `NULL` or `n` that is larger than the memory area results in undefined behavior. #### `ft_memcmp`
```c 
void	*ft_memcmp(const void *s1, const void *s2, size_t n);
```
Compares the initial `n` bytes of the memory areas pointed to by `s1` and `s2`.
##### Parameters
- `s1` - pointer to the first memory area to analyze.
- `s2` - pointer to the second memory area to analyze.
- `n` - maximum number of bytes to scan.
##### Returns
- `0` if the first `n` bytes match.
- `<0` if the first `n` bytes of `s1` are less than the first `n` bytes of `s2`.
- `>0` if the first `n` bytes of `s1` are greater than the first `n` bytes of `s2`.
> Passing `NULL` or `n` that is larger than the memory area results in undefined behavior.
#### `ft_strnstr`
```c 
char	*ft_strnstr(const char *big, const char *little, size_t len);
```
Locates the first occurance of the string `little` in the initial `n` characters of the  string `big`.
##### Parameters
- `big` - pointer to the string to analyze.
- `little` - pointer to the string to find.
- `n` - maximum number of characters to scan.
##### Returns
- Pointer to the first character of the first occurance of `little`, or `NULL` if not found.
- If `little` is an empty string, `big` is returned.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_atoi`
```c 
int	ft_atoi(const char *nptr);
```
Converts the initial portion of the string pointed to by `nptr` to `int`. Discard any whitespace characters at the beginning of the string. It takes an optional +/- sign.
##### Parameters
- `big` - pointer to the string to analyze.
- `little` - pointer to the string to find.
- `n` - maximum number of characters to scan.
##### Returns
- The converted value of `nptr`, or `0` on error .
> If the converted value falls out of `int` range it results in undefined behavior.
#### `ft_calloc`
```c 
void	*ft_calloc(size_t n, size_t size);
```
Allocates memory for an array of `n` elements of `size` bytes each. The memory is set to zero. 
##### Parameters
- `n` - number of elements.
- `size` - number of bytes for each element.
##### Returns
- Pointer to the allocated memory.
- If `n` or `size` is 0, then `NULL` is returned.
> If the multiplication of `n` and `size` results in integer overflow, an error is returned.
#### `ft_strdup`
```c 
char	*ft_strdup(const char *s);
```
Duplicates the string pointed to by `s`.
##### Parameters
- `s` - pointer to the string to duplicate.
##### Returns
- Pointer to the newly allocated string, or `NULL` if an error occured.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
