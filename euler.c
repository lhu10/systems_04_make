//finds the sum of all the multiples of 3 and 5 below 1000
int sum_of_multiples(int limit){
    int sum = 0;  
    int i; 

    for(i = 0; i < limit; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i; 
        }
    }

    return sum; 

}

//finds the difference between the sum of the squares of the first 100 natural 
//numbers and square of the sum
int sum_square_diff(int n){ 
    int sumSquares = 0; 
    int sum = 0;
    int squaresSum, difference, i; 

    for(i = 0; i <= n; i++){
        sumSquares += i*i;
        sum += i; 
    }

    squaresSum = sum * sum; 
    difference = squaresSum - sumSquares; 

    return difference;  
}
