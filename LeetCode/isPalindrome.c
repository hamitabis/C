bool isPalindrome(int x) {
    long long int number = 0;
    int orjNumber = x;

    if (x < 0) return false;
    
    while (x > 0) {
        number = (number * 10 + x % 10), x /= 10; 
    }

    return (number == orjNumber);
}
