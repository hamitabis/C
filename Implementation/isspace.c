int isspace(int ch) {
    int result;
    if ((ch == '\t') || (ch == '\n')) {
        result = 1;
    } else if ((ch == '\v') || (ch == '\f')) {
        result = 1;
    } else if ((ch == '\r') || (ch == ' ')) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
