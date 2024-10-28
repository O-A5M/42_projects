#include <stdio.h>
#include "libft.h"
#include <string.h>

int main() {
 /*    char str[50] = "Hello, World!";

    // Overlapping memory regions
    ft_memmove(str + 7, str, 6);
    printf("%s\n", str + 7);  // Output: "Hello, Hello!"
 */


//===============================================================

    /*  char buffer1[20] = "Hello, World!";
    char buffer2[20] = "1234567890";
    char buffer3[20] = "abcdefghij";
    char buffer4[20];

    // Test 1: Non-overlapping regions
    ft_memmove(buffer2, buffer1, 5);  // Copy "Hello" to buffer2
    printf("Test 1 (Non-overlapping): %s\n", buffer2);  // Expected: "Hello567890"

    // Test 2: Overlapping regions, dst before src
    ft_memmove(buffer1 + 2, buffer1, 10);  // Move "Hello, Wor" to start at buffer1 + 2
    printf("Test 2 (Overlap dst < src): %s\n", buffer1);  // Expected: "HeHello, Wo!"

    // Test 3: Overlapping regions, dst after src
    ft_memmove(buffer1, buffer1 + 2, 10);  // Move "Hello, Wo" back to the start
    printf("Test 3 (Overlap dst > src): %s\n", buffer1);  // Expected: "Hello, WoWo!"

    // Test 4: Zero bytes copy
    strcpy(buffer2, "1234567890");
    ft_memmove(buffer2, buffer1, 0);  // No bytes should be copied
    printf("Test 4 (Zero bytes): %s\n", buffer2);  // Expected: "1234567890"

    // Test 5: Same src and dst
    strcpy(buffer3, "abcdefghij");
    ft_memmove(buffer3, buffer3, 5);  // Should remain unchanged
    printf("Test 5 (Same src and dst): %s\n", buffer3);  // Expected: "abcdefghij"

    // Test 6: Partially overlapping within the same memory block
    strcpy(buffer1, "1234567890");
    ft_memmove(buffer1 + 3, buffer1, 7);  // Shift "1234567" into buffer1 + 3
    printf("Test 6 (Partial overlap): %s\n", buffer1);  // Expected: "1231234567"

    // Test 7: Copy to an empty buffer
    memset(buffer4, 0, sizeof(buffer4));
    ft_memmove(buffer4, buffer1, strlen(buffer1) + 1);  // Copy whole string
    printf("Test 7 (Copy to empty): %s\n", buffer4);  // Expected: "1231234567"

    // Test 8: Copying a single character
    strcpy(buffer3, "abcdefghij");
    ft_memmove(buffer3 + 5, buffer3 + 4, 1);  // Copy 'e' to position 5
    printf("Test 8 (Single character): %s\n", buffer3);  // Expected: "abcdeeghij" */

  /*  char src[] = "Hello, World!";
    char dst[20];
    char small_dst[5];
    size_t len;


    // Test case 1: Normal copying
    len = ft_strlcpy(dst, src, sizeof(dst));
    printf("Test 1 - dst: \"%s\", src length: %zu\n", dst, len);

    // Test case 2: Copy to smaller buffer
    len = ft_strlcpy(small_dst, src, sizeof(small_dst));
    printf("Test 2 - small_dst: \"%s\", src length: %zu\n", small_dst, len);

    // Test case 3: dstsize is 0
    len = ft_strlcpy(dst, src, 0);
    printf("Test 3 - dst (no copy, size 0), src length: %zu\n", len);

    // Test case 4: Empty src
    char empty_src[] = "";
    len = ft_strlcpy(dst, empty_src, sizeof(dst));
    printf("Test 4 - dst (empty src): \"%s\", src length: %zu\n", dst, len);

    return 0; */

//===============================================================
   /*  char dst[20] = "Hello, ";
    char src[] = "World!";
    size_t len;

    // Test 1: Normal concatenation
    len = ft_strlcat(dst, src, sizeof(dst));
    printf("Test 1 - dst: \"%s\", total length: %zu\n", dst, len);

    // Test 2: dstsize is smaller than dst length
    char small_dst[10] = "Hello";
    len = ft_strlcat(small_dst, src, 5);
    printf("Test 2 - small_dst: \"%s\", total length: %zu\n", small_dst, len);

    // Test 3: dstsize is larger than dst + src length
    char large_dst[30] = "Hello, ";
    len = ft_strlcat(large_dst, src, 30);
    printf("Test 3 - large_dst: \"%s\", total length: %zu\n", large_dst, len);

    // Test 4: Empty src
    char empty_src[30] = "";
    len = ft_strlcat(large_dst, empty_src, 30);
    printf("Test 4 - large_dst with empty src: \"%s\", total length: %zu\n", large_dst, len); */

//===============================================================

/*     char src[] = "hello World!";
    printf("%s | %p",ft_strchr(src, '\0'), ft_strchr(src, '\0'));
 */

//===============================================================


/*  const char *str = "Hello, World!";

    // Test 1: Find the last 'o'
    char *result = ft_strrchr(str, 'o');
    if (result)
        printf("Last 'o' found at: %s\n", result);
    else
        printf("'o' not found\n");

    // Test 2: Find the last 'l'
    result = ft_strrchr(str, 'l');
    if (result)
        printf("Last 'l' found at: %s\n", result);
    else
        printf("'l' not found\n");

    // Test 3: Find a character not in the string
    result = ft_strrchr(str, 'z');
    if (result)
        printf("Last 'z' found at: %s\n", result);
    else
        printf("'z' not found\n");

    // Test 4: Find the null terminator
    result = ft_strrchr(str, '\0');
    if (result)
        printf("Null terminator found at position: %ld\n", result - str); */
//===============================================================

  /*  // Test 1: Identical strings
    printf("Test 1 - Compare 'abc' and 'abc': %d\n", ft_strncmp("abc", "abc", 3));

    // Test 2: Different strings, first character different
    printf("Test 2 - Compare 'abc' and 'abd': %d\n", ft_strncmp("abc", "abd", 3));

    // Test 3: Different strings, comparing fewer characters than string length
    printf("Test 3 - Compare 'abc' and 'abd', only first 2 chars: %d\n", ft_strncmp("abc", "abd", 2));

    // Test 4: Empty string compared to non-empty
    printf("Test 4 - Compare '' and 'abc': %d\n", ft_strncmp("", "abc", 3));

    // Test 5: Null terminator comparison within first n characters
    printf("Test 5 - Compare 'abc' and 'abcde', first 3 chars: %d\n", ft_strncmp("abc", "abcde", 3));

    // Test 6: Compare when n is larger than the length of strings
    printf("Test 6 - Compare 'abc' and 'abcde', n=5: %d\n", ft_strncmp("abc", "abcde", 5));
 */
//===============================================================

 /* char str[] = "Hello, World!";

    // Test 1: Find 'W'
    char *result = ft_memchr(str, 'W', sizeof(str));
    if (result)
        printf("Found 'W' at: %s\n", result);
    else
        printf("'W' not found\n");

    // Test 2: Find null terminator
    result = ft_memchr(str, '\0', sizeof(str));
    if (result)
        printf("Found null terminator at position: %ld\n", result - str);
    else
        printf("Null terminator not found\n");

    // Test 3: Find 'z', which is not in the string
    result = ft_memchr(str, 'z', sizeof(str));
    if (result)
        printf("Found 'z' at: %s\n", result);
    else
        printf("'z' not found\n"); */

//===============================================================

/* const char *haystack = "Hello, Wor";
    const char *needle = "World";

    // Test 1: Normal match
    char *result = ft_strnstr(haystack, needle, 12);
    if (result)
        printf("Test 1: Found '%s'\n", result);
    else
        printf("Test 1: Not found\n");

    // Test 2: Match within len limit
    result = ft_strnstr(haystack, needle, 15);
    if (result)
        printf("Test 2: Found '%s'\n", result);
    else
        printf("Test 2: Not found\n");

    // Test 3: Empty needle
    result = ft_strnstr(haystack, "", 12);
    if (result)
        printf("Test 3: Found '%s'\n", result);
    else
        printf("Test 3: Not found\n");

    // Test 4: No match
    result = ft_strnstr(haystack, "Hrld", 12);
    if (result)
        printf("Test 4: Found '%s'\n", result);
    else
        printf("Test 4: Not found\n"); */
//===============================================================

    /* char str[20] = "        -ddhfhfh ";
    printf("%d", ft_atoi(str));
    return 0; */
//==============================================================


  /*   char *original = "Hello";
    char *copy = ft_strdup(original);
    printf("%s", copy);
 */
//===============================================================
    int n = -1000;
    printf("%s", ft_itoa(n));


//===============================================================

    // const char str[20] = "hello world";
    // printf("%s", ft_substr(NULL, 12, sizeof(str)));
    // return 0;
     /* char str[50] = "HelloWorld!";
//===============================================================

    // Overlapping memory regions
    ft_memmove(str + 3, str, 6);
    printf("%s\n", str + 3);  // Output: "Hello, Hello!"
    printf("%s\n", str);  // Output: "Hello, Hello!"
    return 0; */
//===============================================================
    /* char *s1 = "  ";
    printf("%s", ft_strtrim(s1, " "));
    return 0; */

//===============================================================
    // char *result;

    // // Test 1: Regular trimming (spaces at both ends)
    // result = ft_strtrim("   Hello, World!   ", " ");
    // printf("Test 1: '%s'\n", result);  // Expected: "Hello, World!"
    // free(result);

    // // Test 2: Multiple characters in set
    // result = ft_strtrim(".,!?Hello, World!!!,,", ".,!? ");
    // printf("Test 2: '%s'\n", result);  // Expected: "Hello, World"
    // free(result);

    // // Test 3: No characters to trim (set does not match any characters in s1)
    // result = ft_strtrim("Hello", " ");
    // printf("Test 3: '%s'\n", result);  // Expected: "Hello"
    // free(result);

    // // Test 4: All characters to trim (set matches all characters in s1)
    // result = ft_strtrim("...,,,!!!", ".,!");
    // printf("Test 4: '%s'\n", result);  // Expected: ""
    // free(result);

    // // Test 5: Empty input string (s1 is empty)
    // result = ft_strtrim("", ".,!?");
    // printf("Test 5: '%s'\n", result);  // Expected: ""
    // free(result);

    // // Test 6: Empty set string (set is empty, so s1 should be returned as is)
    // result = ft_strtrim("   Hello, World!   ", "");
    // printf("Test 6: '%s'\n", result);  // Expected: "   Hello, World!   "
    // free(result);

    // // Test 7: Both s1 and set are empty (should return an empty string)
    // result = ft_strtrim("", "");
    // printf("Test 7: '%s'\n", result);  // Expected: ""
    // free(result);

    // // Test 8: Only trailing characters to trim
    // result = ft_strtrim("Hello, World!!!", "!");
    // printf("Test 8: '%s'\n", result);  // Expected: "Hello, World"
    // free(result);

    // // Test 9: Only leading characters to trim
    // result = ft_strtrim("...Hello, World", ".");
    // printf("Test 9: '%s'\n", result);  // Expected: "Hello, World"
    // free(result);

//     char *s = " hello  world ";
//     char **result = ft_split(s,' ');
//     int i = 0;
//     while(i < 3)
//         printf("%s\n", result[i++]);
//    return 0;
//    }
