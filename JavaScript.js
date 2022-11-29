// Solving Euler questions

// question 1
function euler1(n) {
    var sum = 0;
    for (var i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    console.log(sum);
}
euler1(1000);

// question 2
function euler2(n) {
    var fibA = 0;
    var fibB = 1;
    var fibTemp = 0;
    var fibSum = 0;
    while (1) {
        fibTemp = fibB;
        fibB = fibA + fibB;
        fibA = fibTemp;
        if (fibB % 2 == 0) {
            if (fibB < n) {
                fibSum += fibB;
            }
            else {
                console.log(fibSum);
                return;
            }
        }
    }
}
euler2(4000000);

// question 3
// super fast way to find prime factor
function euler3(n) {
    var i = 2;
    while (i * i < n) {
        while (n % i == 0) {
            n /= i;
        }
        i++;
    }
    return n;
}
console.log(euler3(600851475143));

// Question 14
let maxListNum = 0;

function nextNum(num) {

    if (isEven(num)) {
        return num/2;
    } else {
        return 3*num + 1;
    }
}

function isEven(num) {
        return num % 2 === 0;
}

function collatzSeqLen(number) {

    let i = 1;
    let n = number;

    while (n !== 1) {
        i += 1;
        n = nextNum(n);
    }
    return i;
}

function findMax(val) {

    let curMax = 0;

    for (let i = 1; i < val; i = i + 1) {
        let n = collatzSeqLen(i);
        if (n > curMax) {
            curMax = n;
            maxListNum = i;
        }
    }
}

console.log("Please be patient! Takes some time to compute.");

findMax(1000000);

console.log("Question 14 returns: " + maxListNum);



// Question 20
function factorial(n) {

    if (BigInt(n) === BigInt(1)) return BigInt(1);

    return BigInt(BigInt(n) * factorial(BigInt(BigInt(n)-BigInt(1))));
}

function factSum(n)
{
    let f = BigInt(factorial(n));
    let sum = BigInt(0);

    while (f > 10) {
        sum += (f%BigInt(10));
        f = f/BigInt(10);
        if (f < 10) sum += f;
    }
    return sum;
}

let fs = Number(factSum(BigInt(100)))

console.log("Question 20 returns: " + fs);


