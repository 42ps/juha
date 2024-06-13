### 문제 소개

[수열과 구간 쿼리 2](https://school.programmers.co.kr/learn/courses/30/lessons/181923)

<details>
<summary>문제</summary>
<div markdown="1">

정수 배열 arr와 2차원 정수 배열 queries이 주어집니다.
queries의 원소는 각각 하나의 query를 나타내며, [s, e, k] 꼴입니다.

각 query마다 순서대로 s ≤ i ≤ e인 모든 i에 대해 k보다 크면서 가장 작은 arr[i]를 찾습니다.

각 쿼리의 순서에 맞게 답을 저장한 배열을 반환하는 solution 함수를 완성해 주세요.
단, 특정 쿼리의 답이 존재하지 않으면 -1을 저장합니다.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(arr, queries) {
  let answer = [];

  queries.map((x) => {
    let sliceArr = arr.slice(x[0], x[1] + 1);
    let min = 1000000;

    for (i of sliceArr) {
      if (i > x[2] && min > i) min = i;
    }

    if (min == 1000000) min = -1;

    answer.push(min);
  });

  return answer;
}
```

<details>
<summary>GPT 풀이</summary>
<div markdown="2">

```js
function solution(arr, queries) {
  return queries.map(([start, end, target]) => {
    const sliceArr = arr.slice(start, end + 1);

    const minGreaterThanTarget = sliceArr.reduce((min, num) => {
      if (num > target && num < min) {
        return num;
      }

      return min;
    }, Infinity);

    return minGreaterThanTarget === Infinity ? -1 : minGreaterThanTarget;
  });
}
```

</div>
</details>

<details>
<summary>user 풀이</summary>
<div markdown="2">

```js
function solution(arr, queries) {
  return queries.map(
    ([s, e, k]) =>
      arr
        .slice(s, e + 1)
        .filter((n) => n > k)
        .sort((a, b) => a - b)[0] || -1
  );
}
```

</div>
</details>
