Finds `x` and `y` non-negative doubles with `x+y=8` that maximize `x^y`.

Solved in two ways:
1) numerical grid search
2) analytically

See [blackpenredpen](https://www.youtube.com/watch?v=zdAJXil-NvA&t=558s) for a derivation of the analytic solution.

# Build

(Only checked on Windows with Visual Studio 17 2022 build tools)
```
cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -G Ninja
cmake --build build
```

# Run

```
.\build\xy.exe
3.5353999106882838532 :: 4.4646000893117161468 :: 280.90455671251208969
3.5354010355601515059 :: 4.4645989644398484941 :: 280.90455671267608295
```