bool isPalindrome(int x) {
    unsigned int number = 0, orjNumber = x;

    if (!x) return false;

    while (x > 0) 
        number = (number * 10 + x % 10), x /= 10; 
    
    return (number == orjNumber);
}
