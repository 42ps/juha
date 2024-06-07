### 문제 소개

[몫 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/120805)

<details>
<summary>문제</summary>
<div markdown="1">

정수 num1과 num2가 주어질 때,
num1에서 num2를 곱한 값을 return하도록 soltuion 함수를 완성해주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(num1, num2) {
  if (num2 === 0) return 0;

  return parseInt(num1 / num2);
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(num1, num2) {
  if (num2 === 0) return 0;

  return ~~(num1 / num2);
}
```

</div>
</details>

## 소감

- 틸드연산자!

  double tilde: not의 기능을 하는 비트 연산자이다.
  10진수 5(16비트 2진수 0000000000000100)에 tilde를 적용하면 -6(16비트 2진수 1111111111111011) 이며 이 과정에서 소수점은 버려지게 된다.
  -6에 다시 tilde를 적용하면(double tilde, ~~5라고 표기) 다시 정수 5로 돌아오게 되어 결과적으로 Math.floor()와 같은 기능을 하게 된다.
  이는 특정 브라우저에서 Math.floor()나 parseInt보다 빠른 퍼포먼스를 보여줄 수 있으나,
  유지보수하는 사람의 입자에서 문맥의 이해에 어려움이 있을수 있다.
