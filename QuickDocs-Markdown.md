QuickDocs | Markdown
----

# Overview / Cheat Sheet


>TODO


>



# Block Elements
<small>`[Search Tags: >part01 >part1 >chapter1 >chap1 >blockelements >elementsblock >elementblock >part.01 >part.1 >chapter.1 >chap.1 >block.elements >elements.block >element.block]`</small>

## Headers
<small>`[Search Tags: >headers >hders >hdrs >titles]`</small>

Markdown supports two styles of headers, [Setext](http://docutils.sourceforge.net/mirror/setext.html) and [atx](http://www.aaronsw.com/2002/atx/).


### atx Headers
<small>`[Search Tags: >headers.atx >header.atx >atxheaders >atx.headers >atxhders >atxhdrs]`</small>

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

<small>`[Search Tags: >headers.setex >header.setex >setextheaders >setexthders >settexthdrs]`</small>

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

### Defining Heading  IDs
<small>`[Search Tags: >defineheaderids >defheadids >definitionheaderids >headers.ids >header.ids >idheaders >idsheaders >ids.headers >idhders >idhdrs >hdrids >headerids >headeridentity >hdrsids >ids >headingids >headingidentity >headids >headrids >headidentity]`</small>

-	Many Markdown processors support custom IDs for headings — some Markdown processors automatically add them.
-	Adding custom IDs ***allows you to link directly to headings*** and modify them with CSS.
-	To add a custom heading ID, enclose the custom ID in curly braces on the same line as the heading, where a custom ID can be any combination of letters and digits.

	***Form:***
	```markdown
	### <Heading> {#<custom-id>}
	```

	***HTML:***
	```html
	<h3 id="custom-id">My Great Heading</h3>
	```

### Linking to Heading IDs
<small>`[Search Tags: >linkhdrs >linkheaders >linkheads >linkheadrs >headlinks >headlinking]`</small>

-	You can link to headings with the custom IDs that you've defined, in your Markdown file, for your headers.
-	The syntax is the exact same as that of normal URL links, except that in the `<link>` portion, write the heading ID instead, preprended by a `#` (*hash*):

Markdown | HTML | Rendered Output
---------|------|----------------
`[Heading ID](#heading-id)` | `<a  href="#heading-id">Heading ID</a>` | [Heading ID](#heading-id)

-	Other websites can link to the heading by adding the custom heading ID to the full URL of the webpage, e.g.:

	`[<linked-text>](https://www.website.com/section#<heading-ID>)`


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
<small>`[Search Tags: >quoteblocks >quotes >blockquotes >quotations >nestedquotes >nestquotes]`</small>

-	Blockquotes are nice looking quote formatting, it looks like this:
> "quote"

... and it is made by prepending (source) text with a right-arrow (`>`):

```markdown
> "quote"
```

-	Blockquotes can be nested (i.e. a blockquote-in-a-blockquote):
> note level 1
>>  note level 2
>>>  note level 3

... by adding additional levels of right-arrows (`>`):

```markdown
> note level 1
>>  note level 2
>>>  note level 3
```
-	Blockquotes can contain other Markdown elements, including headers, lists, and code blocks:

> ## This is a header.
>
> 1.   This is the first list item.
> 2.   This is the second list item.
>
> Here's some example code:
>
>     return shell_exec("echo $input | $markdown_script");

... made like this:

```markdown
> ## This is a header.
>
> 1.   This is the first list item.
> 2.   This is the second list item.
>
> Here's some example code:
>
>     return shell_exec("echo $input | $markdown_script");
```


## Lists
<small>`[Search Tags: >lists >enums >bulletpoints >checklists >dropdownlists]`</small>

-	Markdown supports **ordered (numbered)** and **unordered (bulleted)** lists.

### Unordered Lists
<small>`[Search Tags: >list.unorder >list.unordered >lists.unorder >lists.unordered >unorder.lists >unordered.lists >unorderedlists >unorderlists >listunordered >ulists]`</small>

-	They use asterisks (`*`), pluses (`+`), and hyphens (`-`),  interchangably, as list markers:

```markdown
*  Red
+  Green
-  Blue
```
 All these make bulleted (unordered) lists:
> *  Red
> *  Green
> *  Blue

### Ordered Lists
<small>`[Search Tags: >list.order >list.ordered >lists.order >lists.ordered >order.lists >ordered.lists >orderedlists >orderlists >listordered >olists]`</small>

-	They use numbers (`1. 2. 3. ...`) followed by periods:

```markdown
1.  Bird
2.  McHale
3.  Parish
```

Result:
> 1.  Bird
> 2.  McHale
> 3.  Parish

> $\small [Note:$	The actual numbers you use to mark the list have no effect on the HTML output Markdown produces. $\small - \space end \space note]$

-	Adding a seperation line between any of the elements of a list will cause it to be seperated by a wider vertical space.

```markdown
1.  Bird

2.  McHale
3.  Parish
```

Result:
> 1.  Bird
>
> 2.  McHale
> 3.  Parish

-	You can have *words*, *sentences*, *paragraphs*, *quotes*, *code* *spans/blocks*, *images*, *etc.,* as list items.


### Definition Lists
<small>`[Search Tags: >list.defs >list.definitions >definitionlists >listdefinitions >deflists >listsdefs >deflists >listdefs]`</small>

-	Some Markdown processors allow you to create _definition lists_ of terms and their corresponding definitions.
-	To create a definition list, type the term on the first line. On the next line, type a colon followed by a space and the definition.

```markdown
First Term
: This is the definition of the first term.

Second Term
: This is one definition of the second term.
: This is another definition of the second term.
```

The HTML looks like this:
```html
<dl>
  <dt>First Term</dt>
  <dd>This is the definition of the first term.</dd>
  <dt>Second Term</dt>
  <dd>This is one definition of the second term. </dd>
  <dd>This is another definition of the second term.</dd>
</dl>

```

The rendered output looks like this:

First Term
: This is the definition of the first term.

Second Term
: This is one definition of the second term.
: This is another definition of the second term.


### Task Lists
<small>`[Search Tags: >list.tasks >tasklists >listtasks >tasklists >liststasks]`</small>

-	Task lists allow you to create a list of items with checkboxes.
-	To create a task list, add dashes (`-`) and brackets with a space (`[ ]`) in front of task list items. To select a checkbox, add an `x` in between the brackets (`[x]`).

```markdown
- [x] Write the press release
- [ ] Update the website
- [ ] Contact the media
```
The rendered output looks like this:

- [x] Write the press release
- [ ] Update the website
- [ ] Contact the media

> $\small [Note:$ Certain Markdown applications don't support ***task lists***. $\small - \space end \space note]$


## Horizontal Rules
<small>`[Search Tags: >horizontalrules >rules >lines >straightlines >hlines >horilines >horizlines >linehorizontal >lineshorizontal >horizontals >horzis]`</small>

-	You can produce a line --- horizontal rule tag (`<hr />`) --- by placing three or more *hyphens* (`-`), *asterisks* (`*`), or *underscores* (`_`) on a line by themselves.

**Example:**

```markdown
* * *
***
*****
- - -
---------------------------------------
___
```

**Output:**

> * * *
> ***
> *****
> - - -
> ---------------------------------------
> ___


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

> $\small [Note:$	It is also possible to create a code block by preprending each line of code with one level of indentation --- 4 spaces or a tab. Syntax highlighting is not supported with this; it is better to stick to the former way. $\small - \space end \space note]$

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

## Inline/Embed HTML
<small>`[Search Tags: >inlinehtml >embed.html >embedhtml >htmlemded >htmlembedding >htmlinline]`</small>

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


# Span Elements
<small>`[Search Tags: >part02 >part2 >chapter2 >chap2 >spanelements >elementsspans >elementspans >part.02 >part.2 >chapter.2 >chap.2 >span.elements >spans.elements >elements.spans >element.spans]`</small>


## Links & References
<small>`[Search Tags: >links >linking >linkage >references >refs >urls >websites]`</small>

-	Markdown supports two style of links: *inline* and *reference*
-	In both styles, the *link **text*** is delimited by square brackets `[]`.

### Inline Links
<small>`[Search Tags: >inlinelinks >inlinelinking >inlinelinkage >inlinereferences >inlinerefs >link.inline >links.inline >linking.inline >linkage.inline >references.inline >refs.inline]`</small>

-	To create an inline link, use a set of regular parentheses immediately after the link text’s closing square bracket. Inside the parentheses, put the URL where you want the link to point, along with an _optional_ title for the link, surrounded in quotes.
-	If you’re referring to a local resource on the same server, you can use relative paths.
-	To quickly turn a URL or email address into a link, enclose it in angle brackets. See {#Automatic Links}

**Example:**

```
1. This is [an example](http://example.com/ "Title") inline link.

2. [This link](http://example.net/) has no title attribute.

3. See my [About](/about/) page for details.

4. <https://www.fakewebsite.org> or <fake@example.com>
```

Output:

> 1. This is [an example](http://example.com/ "Title") inline link.
> 2. [This link](http://example.net/) has no title attribute.
> 3. See my [About](/about/) page for details.
> 4. <https://www.fakewebsite.org> or <fake@example.com>


### Reference Links
<small>`[Search Tags: >referencelinks >referencelinking >referencelinkage >references >link.references >links.references >linking.references >linkage.references]`</small>

-	Reference-style links use a second set of square brackets, inside which you place a **label** of your choosing to ***identify the link***.
	```
	This is [an example][id] reference-style link.
	```
-	Then, anywhere in the document, you define your **link label**, i.e assign to it a link.

	```
	[id]: http://example.com/  "Optional Title Here"
	```

-	Link definition names (`id`) may consist of *letters*, *numbers*, *spaces*, and *punctuation* — but they are **_not_ case sensitive**, i.e `a` <==> `A`.

-	***Explicit linking***:
	```markdown
	[<Linked-Text>][<Link-Name>]
	...
	[<Link-Name>]: <Link>  "<Link-Info-Title>"
	```

-	***Implicit linking***:

	```markdown
	[<Linked-Text>][]
	...
	[<Linked-Text>]: <Link>
	```

**Example:**

-	*Reference links in action:*

```
I get 10 times more traffic from [Google] [1] than from
[Yahoo] [2] or [MSN] [3].

  [1]: http://google.com/        "Google"
  [2]: http://search.yahoo.com/  "Yahoo Search"
  [3]: http://search.msn.com/    "MSN Search"

```

 - Implicit link name shortcut:

```
I get 10 times more traffic from [Google][] than from
[Yahoo][] or [MSN][].

  [google]: http://google.com/        "Google"
  [yahoo]:  http://search.yahoo.com/  "Yahoo Search"
  [msn]:    http://search.msn.com/    "MSN Search"
```

### Automatic Links
<small>`[Search Tags: >autolinks >automaticlinks >linksautomatic >linkautomatic >emails >linkemails >emaillinks >link.emails >links.emails >emaillinkage >emailslinkage >emailreferences >referenceemails]`</small>

-	Markdown supports a shortcut style for creating “automatic” links for URLs and email addresses.
-	To quickly turn a URL or email address into a link, enclose it in angle brackets:

	```markdown
	<http://example.com/>
	<address@example.com>
	```
	Becomes:

	<http://example.com/>
	<address@example.com>


## Emphasis
<small>`[Search Tags: >fonts >fontstyles >emphasis >styles]`</small>


### Bold
<small>`[Search Tags: >bold >strong]`</small>

Markdown | HTML | Rendered Output
---------|------|----------------
`I just love **bold text**.` | I just love <strong>bold text</strong>. | `I just love bold text.`
`I just love __bold text__.` | I just love <strong>bold text</strong>. | `I just love bold text.`
`Love**is**bold` | Love<strong>is</strong>bold | Loveisbold


### Italic
<small>`[Search Tags: >italics]`</small>

Markdown | HTML | Rendered Output
---------|------|----------------
`Italicized text is the *cat's meow*.` | Italicized text is the <em>cat's meow</em>. | Italicized text is the cat’s meow.
`Italicized text is the _cat's meow_.` | Italicized text is the <em>cat's meow</em>. | Italicized text is the cat’s meow.
`A*cat*meow` | A<em>cat</em>meow | Acatmeow


### Bold & Italic

Markdown | HTML | Rendered Output
---------|------|----------------
`This text is ***really important***.` | This text is <strong><em>really important</em></strong>. | This text is really important.
`This text is ___really important___.` | This text is <strong><em>really important</em></strong>. | This text is really important.
`This text is __*really important*__.` | This text is <strong><em>really important</em></strong>. | This text is really important.
`This text is **_really important_**.` | This text is <strong><em>really important</em></strong>. | This text is really important.

### Strikethrough (Extended Syntax)
<small>`[Search Tags: >strikethrough >strikes]`</small>

**Example:**
`~~The world is flat.~~`

**Output:**
~~The world is flat.~~


## Images
<small>`[Search Tags: >images >graphics >pics >pictures >photos >pasteimage >imagepaste >imagepasting]`</small>

-	Inserting images into markdown is done in the exact same manner and syntax as links but with a preceding exclamation (`!`) mark:

	**Inline:**
	```markdown
	![Alt text](/path/to/img.jpg)
	...
	![Alt text](/path/to/img.jpg "Optional title")
	```
	**Reference:**
	```markdown
	![Alt text][id]
	...
	[id]: url/to/image  "Optional title attribute"
	```
-	As of this writing, Markdown has no syntax for specifying the dimensions of an image; if this is important to you, you can simply use regular HTML `<img>` tags.


## Tables
<small>`[Search Tags: >tables >tabs >dictionaries >charts >grids]`</small>

>TODO

| Author | Link |
| --- | ----------- |
| Markdownguide | [Tables](https://www.markdownguide.org/extended-syntax/#alignment) |

### Alignment
<small>`[Search Tags: >tabalignment >aligntables >aligntabs]`</small>

> Good Ressources:
>| Author | Link |
>| --- | ----------- |
| Markdownguide | [Alignement](https://www.markdownguide.org/extended-syntax/#alignment) |



## Footnotes
<small>`[Search Tags: >footnotes >notesfoot]`</small>

>TODO




## Escape Characters
<small>`[Search Tags: >escapecharacers >escapechars >escchars >esccharacters >& >< >escapesequences >escpcharacters >escpchars >escpechars]`</small>

### Automated Escaping
<small>`[Search Tags: >autoescapes >autoescapechars >autoescapecharacters]`</small>

-	In **HTML**, there are two characters that demand special treatment: `<` and `&`. Left angle brackets are used to start tags; ampersands are used to denote HTML entities. If you want to use them as entities, e.g. `&lt;`, and `&amp;`.

-	**Markdown** on the other hand allows you to use these character naturally. It takes care of all the necessary escaping for you. If you use an ampersand as part of an **HTML** entity, it remains unchanged; otherwise it will be translated into `&amp;`.

### Backslash Escapes
<small>`[Search Tags: >backslashcharacters >backslashescps >backslashescapecharacters >bkslhchars >backslashchars]`</small>

-	Markdown allows you to use backslash escapes to generate literal characters which would otherwise have special meaning in Markdown’s formatting syntax.
-	Markdown provides backslash escapes for the following characters:

```
\   backslash
`   backtick
*   asterisk
_   underscore
{}  curly braces
[]  square brackets
()  parentheses
#   hash mark
+   plus sign
-   minus sign (hyphen)
.   dot
!   exclamation mark
```
