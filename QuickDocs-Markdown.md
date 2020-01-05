

# Commons

## Headers
<small>`[Search Tags: >headers >hders >hdrs >titles]`</small>

Markdown supports two styles of headers, [Setext](http://docutils.sourceforge.net/mirror/setext.html) and [atx](http://www.aaronsw.com/2002/atx/).


### atx Headers
<small>`[Search Tags: >atxheaders >atxhders >atxhdrs]`</small>

-	Atx-style headers use 1-6 hash characters at the start of the line, corresponding to header levels 1-6.

**Example:**
```markdown
# H1
## H2
### H3
#### H4
##### H5
###### H6
```

> $\small [Note:$	Optionally, you may “close” atx-style headers --- this is purely cosmetic. For example:
> ```markdown
> # This is an H1 #
> ## This is an H2 ##
> ### This is an H3 ###### <!-- They don't need to match. -->
> ```
>$\small - \space end \space note]$

### Setext Headers

<small>`[Search Tags: >setextheaders >setexthders >settexthdrs]`</small>

-	Setext-style headers are “underlined” using any number of underlining equal signs `=`’s or dashes `-`’s.

|Symbol | Level |
|--|--|
|Equal Sign (`=`)| 1st Level |
|Dashes (`-`)| 2nd Level |

**Example:**
```markdown
Title (Level 1)
======

Title (Level 2)
------
```


## Paragraphs
<small>`[Search Tags: >paragraphs >paras >text]`</small>

-	A paragraph is simply one or more consecutive lines of text, separated by one or more blank lines.
-	Normal paragraphs should not be indented with spaces or tabs.

**Example:**

```markdown
This is a paragraph [...] that
has reached its end.

This is another paragraph that is
seperated by a line and has thatreached
its end as well.
```

## Blockquotes
<small>`[Search Tags: >quotes >blockquotes >quotations >nestedquotes >nestquotes]`</small>

-	Nested blockquotes can be

-	Nested blockquotes can be

**Example:**
```markdown
> note level 1
>>  note level 2
>>>  note level 3
```

## Inline HTML
<small>`[Search Tags: >inlinehtml >html >htmlinline]`</small>

-	You can write **HTML** inline in your markdown.

-	The only restrictions are that block-level HTML elements — e.g. `<div>`, `<table>`, `<pre>`, `<p>`, etc. — must be separated from surrounding content by blank lines, and the start and end tags of the block should not be indented with tabs or spaces.

-	You can’t use **Markdown-style**  (e.g. `*emphasis*`)  inside an **HTML** block.

**Example**:

```markdown
This is a regular paragraph.

<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>

This is another regular paragraph.
```


## Escape Characters

<small>`[Search Tags: >escapecharacers >escapechars >escchars >esccharacters >& >< >escapesequences >escpcharacters >escpchars >escpechars]`</small>

-	In **HTML**, there are two characters that demand special treatment: `<` and `&`. Left angle brackets are used to start tags; ampersands are used to denote HTML entities. If you want to use them as entities, e.g. `&lt;`, and `&amp;`.

-	**Markdown** on the other hand allows you to use these character naturally. It takes care of all the necessary escaping for you. If you use an ampersand as part of an **HTML** entity, it remains unchanged; otherwise it will be translated into `&amp;`.


## Code Spans & Blocks

<small>`[Search Tags: >code >ttfamily >typewriter >raw]`</small>

There are 2 methods to inserting code in your markdown. One is inlined, ***code spans***, the other is not, ***code blocks***.

### Code Blocks
<small>`[Search Tags: >codeblocks >blockscodes >blockcode]`</small>

-	Code blocks are (non-inlined) code environments.
-	Code blocks are opened and closed with three backtick characters (` ``` `) on seperate lines.
-	You can specify the particular language of the environment --- after the three opening backtick characters --- to enable syntax highlighting, specific to that language.

**General Form:**

```
    ```<language>
    <code>
    <code>
    ```
```

**Example:**

```
	```python
	print('Hello, world !')
	print('and now ... Good-Bye, world !')
	```
```

$\small [Note:$	It is also possible to create a code block by preprending each line of code with 4-whitespaces or a tab. Syntax highlighting is not supported with this; it is better to stick to the former way. $\small - \space end \space note]$

### Code Spans

<small>`[Search Tags: >codespans >spanscodes >spancode >codesspans]`</small>

-	Code spans are inlined code environments:
-	You can make one by enclosing (source) text with backticks  ( `` ` `` )
```markdown
	Some markdown `code-span`.
```
-	If your code itself contains backticks, you may have to use multiple backticks as delimiters:

```markdown
	```The name ``Tuple`2`` is a valid .NET type name.```
```
--- his code span needed three backticks, on either sides, to be enclosed properly.
