Public class FibonacciNumbers{
    public int fibonacci(int n){
        return fibonacci(n-1)+fibonacci(n-2);
    }
    public static void main(String[] args){
        FibonacciNumbers f = new FibonacciNumbers();
        int x = f.fibonacci(10);
        System.out.println(x);
    }
}