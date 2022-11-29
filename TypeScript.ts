// Solving the Euler problems in TypeScript

function euler_1(n: Number ) 
{
    let sum = 0
    for (let i = 1; i < n; i++ ) {
        if (i % 3 == 0 || i % 5 == 0 ) sum += i;
    }
    console.log(sum)
}
euler_1(1000)


function euler_2(n: Number) {
	
    let fibA = 0
    let fibB = 1
    let fibTemp = 0
    let fibSum = 0

    while (1) {
        fibTemp = fibB
        fibB = fibA + fibB
        fibA = fibTemp

        if (fibB % 2 == 0) {
            if (fibB < n) {
                fibSum += fibB 
            } else {
                console.log(fibSum)
                return
            }
        }

    } 
}
euler_2(4000000)


// super fast way to find prime factor
function euler_3(n: number) {
    let i = 2;
    while (i * i < n) {
        while (n % i == 0) {
            n /= i;
        }
        i ++;
    }
    return n;
}

console.log(euler_3(600851475143))