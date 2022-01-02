long long int noOfSqaures(int N){
    //number of squares in N*N chessboard is
    //1*1
    //2*2
    //3*3
    //.
    //.
    //.
    //N*N
    return ((N*(N+1)/2)*(2*N+1)/2);
}