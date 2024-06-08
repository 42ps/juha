### 문제 소개

[조건 문자열](https://school.programmers.co.kr/learn/courses/30/lessons/181934)

<details>
<summary>문제</summary>
<div markdown="1">

문자열에 따라 다음과 같이 두 수의 크기를 비교하려고 합니다.

두 수가 n과 m이라면
">", "=" : n >= m
"<", "=" : n <= m
">", "!" : n > m
"<", "!" : n < m
두 문자열 ineq와 eq가 주어집니다. ineq는 "<"와 ">"중 하나고, eq는 "="와 "!"중 하나입니다. 그리고 두 정수 n과 m이 주어질 때, n과 m이 ineq와 eq의 조건에 맞으면 1을 아니면 0을 return하도록 solution 함수를 완성해주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(ineq, eq, n, m) {
  let arr = ['>=', '<=', '>!', '<!'];
  let arr2 = [n >= m, n <= m, n > m, n < m];

  for (let i = 0; i < 4; i++) {
    if (arr2[i] && arr[i] === ineq + eq) return 1;
  }
  return 0;
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
const operations = {
  '>=': (n, m) => n >= m,
  '<=': (n, m) => n <= m,
  '>!': (n, m) => n > m,
  '<!': (n, m) => n < m,
};

function solution(ineq, eq, n, m) {
  const op = operations[ineq + eq];
  return Number(op(n, m));
}
```

</div>
</details>

## 소감

- js에는 object도 있다. 적극 활용하자
