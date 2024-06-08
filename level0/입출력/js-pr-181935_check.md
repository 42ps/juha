### 문제 소개

[홀짝에 따라 다른 값 반환하기](https://school.programmers.co.kr/learn/courses/30/lessons/181935)

<details>
<summary>문제</summary>
<div markdown="1">

양의 정수 n이 매개변수로 주어질 때,
n이 홀수라면 n 이하의 홀수인 모든 양의 정수의 합을 return 하고
n이 짝수라면 n 이하의 짝수인 모든 양의 정수의 제곱의 합을 return 하는
solution 함수를 작성해 주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(n) {
  let a;

  if (n % 2) {
    a = 0;

    for (let i = 1; i <= n; i += 2) a += i;
  } else {
    a = 4;

    for (let i = 4; i <= n; i += 2) a += Math.pow(i, 2);
  }
  return a;
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(n) {
  if (n % 2 === 1) return ((n + 1) / 2) * ((n + 1) / 2);
  else return (n * (n + 1) * (n + 2)) / 6;
}
```

</div>
</details>

## 소감

- 수학공식을 적극 활용하자
