bool isPalindrome(char* s) {
     int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Skip non-alphanumeric characters from the left
        if (!isalnum((unsigned char)s[left])) {
            left++;
            continue;
        }
        
        // Skip non-alphanumeric characters from the right
        if (!isalnum((unsigned char)s[right])) {
            right--;
            continue;
        }
        
        // Compare lowercase versions of both characters
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}
