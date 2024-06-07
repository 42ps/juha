### 문제 소개

[대소문자 바꿔서 출력하기](https://school.programmers.co.kr/learn/courses/30/lessons/181949)

<details>
<summary>문제</summary>
<div markdown="1">

영어 알파벳으로 이루어진 문자열 str이 주어집니다.
각 알파벳을 대문자는 소문자로 소문자는 대문자로 변환해서 출력하는 코드를 작성해 보세요.

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
}).on('close', () => {
  str = input[0];
  for (let i = 0; i < str.length; i++) {
    if (str[i] < 'a') rl.output.write(str[i].toLowerCase());
    else rl.output.write(str[i].toUpperCase());
  }
});
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];

rl.on('line', function (line) {
  input = [line];
}).on('close', function () {
  str = input[0];
  const regex = /[A-Z]/;
  console.log(
    [...str]
      .map((v) => (regex.test(v) ? v.toLowerCase() : v.toUpperCase()))
      .join('')
  );
});
```

</div>
</details>

## 소감

- 자바스크립트에서 정규표현식은 신이다.
