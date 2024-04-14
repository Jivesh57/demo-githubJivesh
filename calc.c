int main() {    

    int number3, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number3, &number2);

    // calculate the sum
    sum = number3 + number2;   

    // difference
    diff =  number3 - number2;   
    
    printf("%d + %d = %d", number3, number2, sum);
    printf("%d - %d = %d", number3, number2, diff);
    return 0;
}