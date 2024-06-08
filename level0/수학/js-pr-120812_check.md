### 문제 소개

[최빈값 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/120812)

<details>
<summary>문제</summary>
<div markdown="1">

최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다.
정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요.
최빈값이 여러 개면 -1을 return 합니다.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
let max = {
  num: -1,
  cnt: -1,
  isDuplicate: false,
};

let cmp = {
  num: 0,
  cnt: 0,
};

function solution(array) {
  array.sort((a, b) => a - b);

  array.map((x) => {
    if (cmp.num !== x) {
      if (cmp.cnt > max.cnt) {
        max.num = cmp.num;
        max.cnt = cmp.cnt;
        max.isDuplicate = false;
      } else if (cmp.cnt === max.cnt) max.isDuplicate = true;
      cmp.num = x;
      cmp.cnt = 0;
    }
    cmp.cnt++;
  });

  return max.cnt < cmp.cnt
    ? cmp.num
    : max.num === -1
    ? cmp.num
    : max.cnt === cmp.cnt || max.isDuplicate
    ? -1
    : max.num;
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(array) {
  let m = new Map();

  for (let n of array) m.set(n, (m.get(n) || 0) + 1);

  m = [...m].sort((a, b) => b[1] - a[1]);

  return m.length === 1 || m[0][1] > m[1][1] ? m[0][0] : -1;
}
```

</div>
</details>

## 소감

- js의 [Map](https://ko.javascript.info/map-set) 특성에 대해 생각해보고 사용해보자.
