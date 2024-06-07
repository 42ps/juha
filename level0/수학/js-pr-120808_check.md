### 문제 소개

[분수의 덧셈](https://school.programmers.co.kr/learn/courses/30/lessons/120808)

<details>
<summary>문제</summary>
<div markdown="1">

첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1,
두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다.
두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(num1, denom1, num2, denom2) {
  let [sumNum, multi] = [num1 * denom2 + num2 * denom1, denom2 * denom1];

  let devideNum = sumNum < multi ? sumNum : multi;
  for (let i = 2; i <= devideNum; i++) {
    if (i !== 1 && sumNum % i === 0 && multi % i === 0) {
      sumNum /= i;
      multi /= i;
      devideNum = sumNum < multi ? sumNum : multi;
      i = 1;
    }
  }
  return [sumNum, multi];
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function fnGCD(a, b) {
  return a % b ? fnGCD(b, a % b) : b;
}

function solution(denum1, num1, denum2, num2) {
  let denum = denum1 * num2 + denum2 * num1;
  let num = num1 * num2;
  let gcd = fnGCD(denum, num); //최대공약수

  return [denum / gcd, num / gcd];
}
```

</div>
</details>

## 소감

- 유클리드 호제법 필수로 확인할 것 (쓰이는 곳, 최소 공배수, 최대 공약수)

```
function fnGCD(a, b) {
  return a % b ? fnGCD(b, a % b) : b;
}

```
