### 문제 소개

[중앙값 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/120811)

<details>
<summary>문제</summary>
<div markdown="1">

중앙값은 어떤 주어진 값들을 크기의 순서대로 정렬했을 때 가장 중앙에 위치하는 값을 의미합니다.
예를 들어 1, 2, 7, 10, 11의 중앙값은 7입니다.
정수 배열 array가 매개변수로 주어질 때, 중앙값을 return 하도록 solution 함수를 완성해보세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(array) {
  return array.sort((a, b) => a - b)[Math.floor(array.length / 2)];
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
const solution = (array) =>
  array.sort((a, b) => a - b).at(Math.floor(array.length / 2));
```

</div>
</details>

## 소감

- 자바 스크립트 메서드를 잘 쓰면 가독성이 좋아진다.
