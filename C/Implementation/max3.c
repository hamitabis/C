int max3(int num, int num2, int num3) {
    return (num > num2)
                ?
           (num > num3 ? num : num3)
                :
           (num2 > num3 ? num2 : num3);
}
