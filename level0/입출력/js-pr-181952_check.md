### 문제 소개

[문자열 출력하기](https://school.programmers.co.kr/learn/courses/30/lessons/181952)

<details>
<summary>문제</summary>
<div markdown="1">

문자열 str이 주어질 때, str을 출력하는 코드를 작성해 보세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];

rl.on('line', function (line) {
  input = [line];
  for (i of input) console.log(i);
}).on('close', function () {
  str = input[0];
});
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
const readline = require('readline');

const rl = readline
  .createInterface({
    input: process.stdin,
    output: process.stdout,
  })
  .on('line', console.log);
```

</div>
</details>

## 소감

- node에서 인풋 아웃풋 쓰는 법을 처음 알게 되어서 좋았음.
