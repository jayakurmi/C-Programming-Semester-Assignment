bool isAnagram(char* s, char* t) {
     if (strlen(s) != strlen(t)) {
        return false;
    }

    int count[26] = {0};

    // Increment count for s, decrement for t in a single pass
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Verify all character counts balance out to zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
