*If no one uses it, I will : might as well make it public...*
# Heed this : Types should be single words, not whole ass sentences. (no shit)

*Instead of **redefining those every time***,
**install this file** on your machine **or copy/paste it** in your projects to have ***safe, portable type definitions*** to honor the [spartan](https://www.kernel.org/doc/html/v4.10/process/coding-style.html#naming) langage that C is.

Although those popular type definitions have been existing in the Linux kernel for a while (except for `iN`, replaced with `sN`, e.g. `s16` instead of `i16`), [Rust](https://doc.rust-lang.org/reference/types/numeric.html) seems to have democratized them even more. Other modern programming langages have been following this trend of crude type names like [Zig](https://ziglang.org/documentation/0.15.2/#Primitive-Types).

This header file is mainly inspired by these two.
Other examples could be [Oidin](https://odin-lang.org/docs/overview/#basic-types) and [JAI](https://github.com/Jai-Community/Jai-Community-Library/wiki/Getting-Started#types).

---

I have been quite interested (obsessed) with the effects of esthetics in code considering I spend hours on end reading colored text and realized having to type `const unsigned long long a` in 5 words for a single declaration is utterly disgusting when you could just write `const uloong a`, which is still not perfect but you can make out the semantic by just looking at it : `type_qualifier - type - name`.

Ideally you could write it like a math bro with the type qualifier in front and the type after the variable name preceded by a colon, like `const a: uloong` (Zig my beloved).

*Note that `loong` and `uloong` are my personal touches. I've never seen such a thing but having to type `longlong` instead of `long long` feels pointless to me, `loong` is funnier. Go figure.*
