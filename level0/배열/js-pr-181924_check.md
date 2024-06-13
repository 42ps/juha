### 문제 소개

[수열과 구간 쿼리 3](https://school.programmers.co.kr/learn/courses/30/lessons/181924)

<details>
<summary>문제</summary>
<div markdown="1">

정수 배열 arr와 2차원 정수 배열 queries이 주어집니다.
queries의 원소는 각각 하나의 query를 나타내며, [i, j] 꼴입니다.
각 query마다 순서대로 arr[i]의 값과 arr[j]의 값을 서로 바꿉니다.
위 규칙에 따라 queries를 처리한 이후의 arr를 return 하는 solution 함수를 완성해 주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(arr, queries) {
  queries.map((arrQ) => {
    s = arr[arrQ[0]];
    arr[arrQ[0]] = arr[arrQ[1]];
    arr[arrQ[1]] = s;
  });
  return arr;
}
```

<details>
<summary>GPT 풀이</summary>
<div markdown="2">

```js
function solution(arr, queries) {
  return queries.reduce(
    (a, [i, j]) => {
      [a[i], a[j]] = [a[j], a[i]];
      return a;
    },
    [...arr]
  );
}
```

</div>
</details>

- 소감 : 나중에 GPT에게 리펙토링 부탁하는 것도 좋을지도?
