# problem-solving

Solutions to competitive-programming problems, collected since 2018.
C and C++ for the older judges, Java for the more recent work.

## Layout

| Directory | Solutions | Language |
|---|---|---|
| `UVA/` | 115 | C, some C++ |
| `URIOnlineJudge/` (now beecrowd) | 114 | C |
| `SPOJ/` | 95 | C++ |
| `codeforces/` | 34 | Java |
| `LightOJ/` | 12 | C |
| `leetcode/`, `hackerrank/` | 3 | Java |
| `algorithms/` | — | Java |

`algorithms/` holds from-scratch implementations rather than judge
submissions: graph traversal, heap/merge/insertion sort, and a hash table.

## Conventions

- Files are named after the problem: `codeforces/CF_1353A.java`, `UVA/10055.c`.
- A trailing number (`1080.2.c`, `1080.3.c`) is a later attempt at the same
  problem, kept for comparison.
- An `X.test` file holds the sample input from the problem statement for `X`.

## Running a Java solution

    javac codeforces/CF_1353A.java
    java -cp codeforces CF_1353A < codeforces/CF_1353A.test

`Template.java` is the starting point for Java solutions — a `run()` method
plus buffered `nextInt`/`nextLong`/`nextToken` helpers over stdin. `new.sh`
scaffolds a new one (into `codeforces/`, which it hardcodes):

    ./new.sh CF_1353A    # creates codeforces/CF_1353A.{java,test}

## Usernames

UVA @estrange · SPOJ @riyadhrazzaq · beecrowd @riyadhrazzaq · Codeforces @riyadhrazzaq
