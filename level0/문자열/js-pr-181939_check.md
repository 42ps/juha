### 문제 소개

[더 크게 합치기](https://school.programmers.co.kr/learn/courses/30/lessons/181939)

<details>
<summary>문제</summary>
<div markdown="1">

연산 ⊕는 두 정수에 대한 연산으로 두 정수를 붙여서 쓴 값을 반환합니다.
예를 들면 다음과 같습니다.

12 ⊕ 3 = 123
3 ⊕ 12 = 312
양의 정수 a와 b가 주어졌을 때,
a ⊕ b와 b ⊕ a 중 더 큰 값을 return 하는 solution 함수를 완성해 주세요.

단, a ⊕ b와 b ⊕ a가 같다면 a ⊕ b를 return 합니다.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(x, y) {
  let [a, b] = ['', ''];
  a += x;
  b += y;
  return +(a + b) > +(b + a) ? +(a + b) : +(b + a);
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(a, b) {
  return Math.max(Number(`${a}${b}`), Number(`${b}${a}`));
}
```

</div>
</details>

## 소감

- js 메서드를 쓰면 조금 더 깔끔하게 적을 수 있다.
