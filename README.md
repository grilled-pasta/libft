_This project has been created as part of the 42 curriculum by alkonsta_
# Libft
## Description
A personal `C` library containing commonly used functions from the `C` standard library, together with additional utility functions for string manipulation, memory management, character classification, and linked lists.
## Instructions
### Makefile
```bash
make # compiles the library and creates `libft.a`
make clean # removes object files 
make fclean # removes object files and the compiled library 
make re # cleans the project and recompiles everything
```
### Usage
Include the library header:
```c 
#include "libft.h"
```
Compile the program together with the library
```bash 
cc main.c libft.a -Iinclude
```
## Resources
[Beej's Guide to C Programming](https://beej.us/guide/bgc/)  
[C Reference](https://en.cppreference.com/c)
## Library
### Libc functions

| | | | | 
|---|---|---|---|
| [`ft_isalpha`](#ft_isalpha) | [`ft_memcpy`](#ft_memcpy) | [`ft_strrchr`](#ft_strrchr) | [`ft_calloc`](#ft_calloc) |
| [`ft_isdigit`](#ft_isdigit) | [`ft_memmove`](#ft_memmove) | [`ft_strncmp`](#ft_strncmp) | [`ft_strdup`](#ft_strdup) |
| [`ft_isalnum`](#ft_isalnum) | [`ft_strlcpy`](#ft_strlcpy) | [`ft_memchr`](#ft_memchr) | |
| [`ft_isascii`](#ft_isascii) | [`ft_strlcat`](#ft_strlcat) | [`ft_memcmp`](#ft_memcmp) | |
| [`ft_isprint`](#ft_isprint) | [`ft_toupper`](#ft_toupper) | [`ft_strnstr`](#ft_strnstr) | |
| [`ft_strlen`](#ft_strlen) | [`ft_tolower`](#ft_tolower) | [`ft_atoi`](#ft_atoi) | |
| [`ft_memset`](#ft_memset) | [`ft_strchr`](#ft_strchr) | | | 
| [`ft_bzero`](#ft_bzero) | | | | 

### Additional functions
| | | |
|---|---|---|
| [`ft_substr`](#ft_substr) | [`ft_itoa`](#ft_itoa)  | [`ft_putchar_fd`](#ft_putchar_fd) |
| [`ft_strjoin`](#ft_strjoin) |[`ft_strmapi`](#ft_strmapi) | [`ft_putstr_fd`](#ft_putstr_fd) |
| [`ft_strtrim`](#ft_strtrim) | [`ft_striteri`](#ft_striteri) | [`ft_putendl_fd`](#ft_putendl_fd)|
| [`ft_split`](#ft_split) | | [`ft_putnbr_fd`](#ft_putnbr_fd)|

### Linked List
| | | |
|---|---|---|
| [`ft_lstnew`](#ft_lstnew) | [`ft_lstlast`](#ft_lstlast) | [`ft_lstclear`](#ft_lstclear) |
| [`ft_lstadd_front`](#ft_lstadd_front) | [`ft_lstadd_back`](#ft_lstadd_back) | [`ft_lstiter`](#ft_lstiter) |
| [`ft_lstsize`](#ft_lstsize) | [`ft_lstdelone`](#ft_lstdelone) | [`ft_lstmap`](#ft_lstmap) |

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
> Passing `NULL` or `n` that is larger than the memory area results in undefined behavior. 
#### `ft_memcmp`
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
- `nptr` - pointer to the string to convert.
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
> If the multiplication of `n` and `size` results in integer overflow, `NULL` is returned.
#### `ft_strdup`
```c 
char	*ft_strdup(const char *s);
```
Duplicates the string pointed to by `s`.
##### Parameters
- `s` - pointer to the string to duplicate.
##### Returns
- Pointer to the newly allocated string, or `NULL` if allocation fails.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.

#### `ft_substr`
```c 
char	*ft_substr(char const *s, unsigned int start, size_t len);
```
Creates a string that stars at index `start` from the string `s` and has a maximum length of `len`.
##### Parameters
- `s` - pointer to the string from which to create the substring.
- `start` - starting index of the substring within `s`.
- `len` - maximum length of the substring.
##### Returns
- Pointer to the newly allocated substring, or `NULL` if allocation fails.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_strjoin`
```c 
char	*ft_strjoin(char const *s1, char const *s2);
```
Creates a string which is the result of concatenating `s1` and `s2`.
##### Parameters
- `s1` - pointer to the prefix string.
- `s2` - pointer to the suffix string.
##### Returns
- Pointer to the newly allocated string, or `NULL` if allocation fails.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_strtrim`
```c 
char	*ft_strtrim(char const *s1, char const *set);
```
Creates a string which is a copy of `s1` with characters from `set` removed from the beginning and the end.
##### Parameters
- `s1` - pointer to the string to be trimmed.
- `set` - string containing the set of characters to be removed.
##### Returns
- Pointer to the newly allocated string, or `NULL` if allocation fails.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_split`
```c 
char	**ft_split(char const *s, char c);
```
Creates an array of strings obtained by splitting `s` using the character `c` as a delimiter.
##### Parameters
- `s` - pointer to the string to be spit.
- `c` - character that is used as a delimiter.
##### Returns
- Pointer to the array of strings resulting from the split, or `NULL` if allocation fails.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_itoa`
```c 
char	*ft_itoa(int n);
```
Creates a string representing the integer `n`.
##### Parameters
- `n` - the integer to convert.
##### Returns
- Pointer to the string representing the integer.
> Negative numbers must be handled.
#### `ft_strmapi`
```c 
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
Creates a string that stores the result from applying the function `f` to each character of the string `s`.
##### Parameters
- `s` - pointer to the string to iterate over.
- `f` - pointer to the function to apply to each character.
##### Returns
- Pointer to the string created from the successive applications of `f`, or `NULL` if allocation fails.
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_striteri`
```c 
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
```
Applies the function `f` to each character of the string `s`. Each character is passed by address to `f` so it can be modified if necessary.
##### Parameters
- `s` - pointer to the string to iterate over.
- `f` - pointer to the function to apply to each character.
##### Returns
- Nothing
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_putchar_fd`
```c 
void	ft_putchar_fd(char c, int fd);
```
Outputs the character `c` to the specified file descriptor `fd`.
##### Parameters
- `c` - character to output.
- `fd` - the file descriptor on which to write.
##### Returns
- Nothing
#### `ft_putstr_fd`
```c 
void	ft_putstr_fd(char *s, int fd);
```
Outputs the string `s` to the specified file descriptor `fd`.
##### Parameters
- `s` - pointer to the string to output.
- `fd` - the file descriptor on which to write.
##### Returns
- Nothing
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_putendl_fd`
```c 
void	ft_putendl_fd(char *s, int fd);
```
Outputs the string `s` to the specified file descriptor `fd` followed by a newline.
##### Parameters
- `s` - pointer to the string to output.
- `fd` - the file descriptor on which to write.
##### Returns
- Nothing
> Passing `NULL` or a string that is not null-terminated results in undefined behavior.
#### `ft_putnbr_fd`
```c 
void	ft_putnbr_fd(int n, int fd);
```
Outputs the integer `n` to the specified file descriptor `fd`.
##### Parameters
- `n` - the integer to output.
- `fd` - the file descriptor on which to write.
##### Returns
- Nothing

#### `ft_lstnew`
```c 
t_list	*ft_lstnew(void *content);
```
Creates a new node. The `content` member variable is initialized with the given parameter `content`. The variable `next` is initialized to `NULL`.
##### Parameters
- `content` - content to store in the new node.
##### Returns
- Nothing
#### `ft_lstadd_front`
```c 
void	ft_lstadd_front(t_list **lst, t_list *new);
```
Adds the node `new` at the beginning of the list.
##### Parameters
- `lst` - pointer to the first node of a list.
- `new` - pointer to the node to be added.
##### Returns
- Nothing
#### `ft_lstsize`
```c 
int		ft_lstsize(t_list *lst);
```
Counts the number of nodes in the list.
##### Parameters
- `lst` - pointer to the first node of a list.
##### Returns
- Length of the list
#### `ft_lstlast`
```c 
t_list	*ft_lstlast(t_list *lst);
```
Find the last node of the list.
##### Parameters
- `lst` - pointer to the first node of a list.
##### Returns
- Pointer to the last node of the list.
#### `ft_lstadd_back`
```c 
void	ft_lstadd_back(t_list **lst, t_list *new);
```
Adds the node `new` at the end of the list.
##### Parameters
- `lst` - pointer to the first node of a list.
- `new` - pointer to the node to be added.
##### Returns
- Nothing
#### `ft_lstdelone`
```c 
void	ft_lstdelone(t_list *lst, void (*del)(void *));
```
Adds the node `new` at the end of the list.
##### Parameters
- `lst` - pointer to the first node of a list.
- `new` - pointer to the node to be added.
##### Returns
- Nothing
#### `ft_lstclear`
```c 
void	ft_lstclear(t_list **lst, void (*del)(void *));
```
Deletes and frees the given node and all its successors, using the function `del`.
##### Parameters
- `lst` - pointer to the first node of a list.
- `del` - pointer to the function used to delete the content of the node.
##### Returns
- Nothing
#### `ft_lstiter`
```c 
void	ft_lstiter(t_list *lst, void (*f)(void *));
```
Iterates through `lst` and applies the function `f` ot the content of each node.
##### Parameters
- `lst` - pointer to the first node of a list.
- `f` - pointer to the function to apply the content of the node.
##### Returns
- Nothing
#### `ft_lstmap`
```c 
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
Iterates through the list `lst`, applies the function `f` to each node's content, and creates a new list resulting of the successive applications of the function `f`. The `del` function is used to delete the content of a node if needed.
##### Parameters
- `lst` - pointer to the first node of a list.
- `f` - pointer to the function to apply the content of the node.
- `del` - pointer to the function used to delete a node's content if needed.
##### Returns
- The new list, or `NULL` if allocation fails.
