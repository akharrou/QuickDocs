QuickDocs \| Markdown
====
> _**January 2020**_


<!-- TOC -->

-	[1. Overview / Cheat Sheet](#1-overview--cheat-sheet)
	-	[1.1. Basic Syntax](#11-basic-syntax)
	-	[1.2. Extended Syntax](#12-extended-syntax)
-	[2. Block Elements](#2-block-elements)
	-	[2.1. Headers](#21-headers)
		-	[2.1.1. atx Headers](#211-atx-headers)
		-	[2.1.2. Setext Headers](#212-setext-headers)
		-	[2.1.3. Defining Heading IDs](#213-defining-heading-ids)
		-	[2.1.4. Linking to Heading IDs](#214-linking-to-heading-ids)
	-	[2.2. Paragraphs](#22-paragraphs)
	-	[2.3. Blockquotes](#23-blockquotes)
	-	[2.4. Lists](#24-lists)
		-	[2.4.1. Unordered Lists](#241-unordered-lists)
		-	[2.4.2. Ordered Lists](#242-ordered-lists)
		-	[2.4.3. Definition Lists](#243-definition-lists)
		-	[2.4.4. Task Lists](#244-task-lists)
	-	[2.5. Horizontal Rules](#25-horizontal-rules)
	-	[2.6. Code Spans & Blocks](#26-code-spans--blocks)
		-	[2.6.1. Code Blocks](#261-code-blocks)
		-	[2.6.2. Code Spans](#262-code-spans)
	-	[2.7. Inline/Embed HTML](#27-inlineembed-html)
-	[3. Span Elements](#3-span-elements)
	-	[3.1. Links & References](#31-links--references)
		-	[3.1.1. Inline Links](#311-inline-links)
			-	[3.1.1.1. Automatic Links](#3111-automatic-links)
		-	[3.1.2. Reference Links](#312-reference-links)
	-	[3.2. Emphasis](#32-emphasis)
		-	[3.2.1. Bold](#321-bold)
		-	[3.2.2. Italic](#322-italic)
		-	[3.2.3. Bold & Italic](#323-bold--italic)
		-	[3.2.4. Strikethrough (Extended Syntax)](#324-strikethrough-extended-syntax)
	-	[3.3. Images](#33-images)
	-	[3.4. Tables](#34-tables)
		-	[3.4.1. Alignment](#341-alignment)
	-	[3.5. Footnotes](#35-footnotes)
	-	[3.6. Latex](#36-latex)
	-	[3.7. Escape Characters](#37-escape-characters)
		-	[3.7.1. Automated Escaping](#371-automated-escaping)
		-	[3.7.2. Backslash Escapes](#372-backslash-escapes)
-	[4. Appendices](#4-appendices)
	-	[4.1. Resources](#41-resources)

<!-- TOC -->


# 1. Overview / Cheat Sheet
<small>`[Search Tags: >overview >cheat >sheet >cheatsheet >quick >revise >revision]`</small>

## 1.1. Basic Syntax
<small>`[Search Tags: >basicsyntax >syntax.basic>]`</small>

All Markdown applications support these elements.

| Element | Markdown Syntax
| :-------------- | :---------------------------------------------------------
| Heading | `# H1` <br> `## H2` <br> `### H3`
| Bold | `**bold text**`
| Italic | `*italicized text*`
| Blockquote | `> blockquote`
| Ordered List | `1. First item` <br> `2. Second item` <br> `3. Third item`
| Unordered List | `- First item` <br> `* Second item` <br> `+ Third item`
| Code | `` `code` ``
| Horizontal Rule | `---`
| Link | `[title](https://www.example.com)`
| Image | `![alt text](image.jpg)`


## 1.2. Extended Syntax
<small>`[Search Tags: >extendedsyntax >syntax.extended>]`</small>

These elements extend the basic syntax by adding additional features. Not all Markdown applications support these elements.

| Element | Markdown Syntax
| :----------------- | -----------------------------------
| Table | `| Syntax | Description |`<br> `| ----------- | ----------- |` <br> `| Header | Title |` <br> `| Paragraph | Text |`
| Fenced Code Block | `` ``` `` <br> `{` <br> `"firstName": "John",` <br> `"lastName": "Smith",` <br> `"age": 25` <br> `}` <br> `` ``` ``
| Footnote | `Here's a sentence with a footnote. [^1]` <br> <br>`[^1]: This is the footnote.`
| Heading ID | `### My Great Heading {#custom-id}`
| Definition List | `term` <br> `: definition`
| Strikethrough | `~~The world is flat.~~`
| Task List | `- [x] Write the press release` <br> `- [ ] Update the website` <br> `- [ ] Contact the media`


# 2. Block Elements
<small>`[Search Tags: >part01 >part1 >chapter1 >chap1 >blockelements >elementsblock >elementblock >part.01 >part.1 >chapter.1 >chap.1 >block.elements >elements.block >element.block]`</small>


## 2.1. Headers
<small>`[Search Tags: >headers >hders >hdrs >titles]`</small>

Markdown supports two styles of headers, [Setext](http://docutils.sourceforge.net/mirror/setext.html) and [atx](http://www.aaronsw.com/2002/atx/).


### 2.1.1. atx Headers
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

> <small>_[Note: Optionally, you may “close” atx-style headers --- this is purely cosmetic. For example:_
>
> ```markdown
> # This is an H1 #
> ## This is an H2 ##
> ### This is an H3 ###### <!-- They don't need to match. -->
> ```
>
> _- end note]_</small>

### 2.1.2. Setext Headers

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

### 2.1.3. Defining Heading IDs
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

### 2.1.4. Linking to Heading IDs
<small>`[Search Tags: >linkhdrs >linkheaders >linkheads >linkheadrs >headlinks >headlinking]`</small>

-	You can link to headings with the custom IDs that you've defined, in your Markdown file, for your headers.
-	The syntax is the exact same as that of normal URL links, except that in the `<link>` portion, write the heading ID instead, preprended by a `#` (*hash*):

Markdown | HTML | Rendered Output
---------|------|----------------
`[Heading ID](#heading-id)` | `<a  href="#heading-id">Heading ID</a>` | [Heading ID](#heading-id)

-	Other websites can link to the heading by adding the custom heading ID to the full URL of the webpage, e.g.:

	`[<linked-text>](https://www.website.com/section#<heading-ID>)`


## 2.2. Paragraphs
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


## 2.3. Blockquotes
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


## 2.4. Lists
<small>`[Search Tags: >lists >enums >bulletpoints >checklists >dropdownlists]`</small>

-	Markdown supports **ordered (numbered)** and **unordered (bulleted)** lists.

### 2.4.1. Unordered Lists
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

### 2.4.2. Ordered Lists
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

> *<small>[Note: The actual numbers you use to mark the list have no effect on the HTML output Markdown produces. - end note]</small>*

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


### 2.4.3. Definition Lists
<small>`[Search Tags: >list.defs >list.definitions >definitionlists >listdefinitions >deflists >listsdefs >deflists >listdefs]`</small>

> *<small>[Note: Not all Markdown processors support this feature. - end note]</small>*

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


### 2.4.4. Task Lists
<small>`[Search Tags: >list.tasks >tasklists >listtasks >tasklists >liststasks]`</small>

> *<small>[Note: Not all Markdown processors support this feature. - end note]</small>*

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



## 2.5. Horizontal Rules
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


## 2.6. Code Spans & Blocks

<small>`[Search Tags: >code >ttfamily >typewriter >raw]`</small>

There are 2 methods to inserting code in your markdown. One is inlined, ***code spans***, the other is not, ***code blocks***.

### 2.6.1. Code Blocks
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

> *<small>[Note: It is also possible to create a code block by preprending each line of code with one level of indentation --- 4 spaces or a tab. Syntax highlighting is not supported with this; it is better to stick to the former way. - end note]</small>*

### 2.6.2. Code Spans

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

## 2.7. Inline/Embed HTML
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


# 3. Span Elements
<small>`[Search Tags: >part02 >part2 >chapter2 >chap2 >spanelements >elementsspans >elementspans >part.02 >part.2 >chapter.2 >chap.2 >span.elements >spans.elements >elements.spans >element.spans]`</small>


## 3.1. Links & References
<small>`[Search Tags: >links >linking >linkage >references >refs >urls >websites >urllinks >urlslink linkurls >linkwebsites >websitelinks]`</small>

-	Markdown supports two style of links: ***inline*** and ***reference***
-	In both styles, the *link **text*** is delimited by square brackets `[]`.

### 3.1.1. Inline Links
<small>`[Search Tags: >inlinelinks >inlinelinking >inlinelinkage >inlinereferences >inlinerefs >link.inline >links.inline >linking.inline >linkage.inline >references.inline >refs.inline]`</small>

-	_**Create an (inline) link:**_ `[<linked-text>](<URL | relative-path> "<optional-title>")`

	>– place the text you desire to link between a pair of (square) brackets `[]` and follow it by a pair of parentheses `()`, placing within it the _**URL**_ or **_relative path_** (to a file) where you want the link to point, along with an _optional_ title, after the said link, in the (same) parentheses, surrounded in quotes (`""`|`''`).

**Example:**

```
1. This is [an example](http://example.com/ "Title") inline link.

2. [This link](http://example.net/) has no title attribute.

3. See my [About](/about/) page for details.
```

Output:

> 1. This is [an example](http://example.com/ "Title") inline link.
> 2. [This link](http://example.net/) has no title attribute.
> 3. See my [About](/about/) page for details.
> 4. <https://www.fakewebsite.org> or <fake@example.com>

#### 3.1.1.1. Automatic Links
<small>`[Search Tags: >autolinks >automaticlinks >linksautomatic >linkautomatic >emails >linkemails >emaillinks >link.emails >links.emails >emaillinkage >emailslinkage >emailreferences >referenceemails]`</small>

-	Markdown supports a shortcut style for creating “automatic” links for URLs and email addresses.
-	_**Create an (automatic) Link:**_ `<<email-address>>`, `<<URL>>`

	> – enclose the email-address or URL in angle brackets.

**Example:**

```markdown
<http://example.com/>

<address@example.com>
```
Rendered Output:

<http://example.com/>

<address@example.com>


### 3.1.2. Reference Links
<small>`[Search Tags: >referencelinks >referencelinking >referencelinkage >references >link.references >links.references >linking.references >linkage.references >reflinks]`</small>

-	_**Create a (reference) link:**_

	-	***explicit reference***:
		```markdown
		[<linked-text>][<reference-id>] <!-- Creation -->
		...
		[<reference-id>]: <link | relative-path>  "<link-title>" <!-- Definition -->
		```

		>   – enclose the text you desire to link in a pair of square brackets `[]`, follow it by another pair of square brackets `[]`, inside of which write a `reference-id`, which can be understood as a label/tag/identifier, something to identify the reference with, it can be comprised of letters and/or digits. <br> <br> Then, the `reference-id`/label/tag/identifier must be defined, i.e assigned to a **URL** or **relative path** (to a file). <br> <br> To do so – and this can be done anywhere in the document – place between a pair of square brackets the `reference-id`/label/tag/identifier, follow it by a colon (`:`), then your **URL** or **relative path** (to a file) and, optionally, a title for your link, in quotes (`""`|`''`).


	-	***implicit reference***:

		```markdown
		[<linked-text>][] <!-- Creation -->
		...
		[<linked-text>]: <URL | relative-path> "<link-title> <!-- Definition -->
		```

		> – again do the exact same as with _explicit references_ only – in the _creation phase_ of the reference – leave the the pair of square brackets, that is supposed to have the `reference-id`, empty. <br><br> This is because in the _definition phase_ of the reference, it will be the `linked-text` that will serve as `reference-id`.

-	`reference-id`s may consist of *letters*, *numbers*, *spaces*, and *punctuation* — but they are **_not_ case sensitive**, i.e `a` $<=>$ `A`.

**Example:**

-	*Explicit Reference Links:*

```
These are explicit links: [Google][1], [Yahoo][2] or [MSN][3].

  [1]: http://google.com/        'Google'
  [2]: http://search.yahoo.com/  "Yahoo Search"
  [3]: http://search.msn.com/    "MSN Search"
```

-	*Implicit Reference Links:*

```
And these are implicit links: [Google][], [Yahoo][] or [MSN][].

  [google]: http://google.com/        "Google"
  [yahoo]:  http://search.yahoo.com/  "Yahoo Search"
  [msn]:    http://search.msn.com/    "MSN Search"
```

***Rendered Output:***

These are explicit links: [Google][1], [Yahoo][2] or [MSN][3].

  [1]: http://google.com/        'Google'
  [2]: http://search.yahoo.com/  "Yahoo Search"
  [3]: http://search.msn.com/    "MSN Search"

And these are implicit links: [Google][], [Yahoo][] or [MSN][].

  [google]: http://google.com/        "Google"
  [yahoo]:  http://search.yahoo.com/  "Yahoo Search"
  [msn]:    http://search.msn.com/    "MSN Search"


## 3.2. Emphasis
<small>`[Search Tags: >fonts >fontstyles >emphasis >styles]`</small>


### 3.2.1. Bold
<small>`[Search Tags: >bold >strong]`</small>

Markdown | HTML | Rendered Output
---------|------|----------------
`I just love **bold text**.` | I just love <strong>bold text</strong>. | `I just love bold text.`
`I just love __bold text__.` | I just love <strong>bold text</strong>. | `I just love bold text.`
`Love**is**bold` | Love<strong>is</strong>bold | Loveisbold


### 3.2.2. Italic
<small>`[Search Tags: >italics]`</small>

Markdown | HTML | Rendered Output
---------|------|----------------
`Italicized text is the *cat's meow*.` | Italicized text is the <em>cat's meow</em>. | Italicized text is the cat’s meow.
`Italicized text is the _cat's meow_.` | Italicized text is the <em>cat's meow</em>. | Italicized text is the cat’s meow.
`A*cat*meow` | A<em>cat</em>meow | Acatmeow


### 3.2.3. Bold & Italic

Markdown | HTML | Rendered Output
---------|------|----------------
`This text is ***really important***.` | This text is <strong><em>really important</em></strong>. | This text is really important.
`This text is ___really important___.` | This text is <strong><em>really important</em></strong>. | This text is really important.
`This text is __*really important*__.` | This text is <strong><em>really important</em></strong>. | This text is really important.
`This text is **_really important_**.` | This text is <strong><em>really important</em></strong>. | This text is really important.

### 3.2.4. Strikethrough (Extended Syntax)
<small>`[Search Tags: >strikethrough >strikes]`</small>

**Example:**
`~~The world is flat.~~`

**Output:**
~~The world is flat.~~


## 3.3. Images
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

_**Example:**_

`![Lion | King of the Animal Kingdom](Assets/lion.jpg)`

_**Rendered Output:**_

![Lion | King of the Animal Kingdom](Assets/lion.jpg)


## 3.4. Tables
<small>`[Search Tags: >tabls >tebles >tables >tabs >dictionaries >charts >grids]`</small>

-	To add a table, use three or more hyphens (`---`) to create each column’s header, and use pipes (`|`) to separate each column. You can optionally add pipes on either end of the table.

-	Cell widths can vary, as shown below. The rendered output will look the same.

***Example:***
```
| Syntax      | Description |
| ----------- | ----------- |
| Header      | Title       |
| Paragraph   | Text        |
```
```
| Syntax | Description |
| --- | ----------- |
| Header | Title |
| Paragraph | Text |
```

***Rendered Output:*** (for both)

| Syntax      | Description |
| ----------- | ----------- |
| Header      | Title       |
| Paragraph   | Text        |


### 3.4.1. Alignment
<small>`[Search Tags: >tabalignment >aligntables >aligntabs]`</small>

-	You can align text in the columns to the left, right, or center by adding a colon (`:`) to the left, right, or on both side of the hyphens within the header row.

	```markdown
	| Syntax      | Description | Test Text     |
	| :---        |    :----:   |          ---: |
	| Header      | Title       | Here's this   |
	| Paragraph   | Text        | And more      |
	```

	***Rendered Output:***

	| Syntax | Description | Test Text |
	|--------|-------------|-----------|
	| Super  | Title       | Here      |
	| Pad    | Text        | And more  |


## 3.5. Footnotes
<small>`[Search Tags: >footnotes >notesfoot]`</small>

> *<small>[Note: Not all Markdown processors support this feature. - end note]</small>*

-	***Footnotes allow you*** to add notes and references without cluttering the body of the document. When you create a footnote, a superscript number with a link appears where you added the footnote reference. Readers can click the link to jump to the content of the footnote at the bottom of the page.

-	*To create a* ***footnote reference***: `[^<footnote-id>]`, e.g.:

	```
	Here's a simple footnote,[^1] and here's a longer one.[^bignote]
	```


-	*To create the* ***footnote***: `[^<footnote-id]: <footnote>`

	```
	[^1]: This is a footnote example. If you are seeing this at the very bottom of the
	screen then your processor supports this feature, otherwise it doesn't.

	[^bignote]: Here's Here's another foot note example, one with multiple paragraphs
		and code.

	    Indent paragraphs to include them in the footnote.
	    `{ my code }`
	    Add as many paragraphs as you like.
	```

-	You don’t have to put footnotes at the end of the document. You can put them anywhere except inside other elements like lists, block quotes, and tables.

-	Identifiers can be numbers or words, but they can’t contain spaces or tabs. Identifiers only correlate the footnote reference with the footnote itself — in the output, footnotes are numbered sequentially.

_**Example:**_

Here's a simple footnote,[^1] and here's a longer one.[^bignote]

[^1]: This is a footnote example. If you are seeing this at the very bottom of the
screen then your processor supports this feature, otherwise it doesn't.

[^bignote]: Here's another foot note example, one with multiple paragraphs
	and code.

	Indent paragraphs to include them in the footnote.
		`{ my code }`
	Add as many paragraphs as you like.


## 3.6. Latex
<small>`[Search Tags: >LaTeX]`</small>

> *<small>[Note: Not all Markdown processors support this feature. - end note]</small>*

-	You can insert inline $\LaTeX$ by enclosing (source) text in dollar signs: `$<text>$`.

-	You can create a $\LaTeX$ environment with two enclosing double dollar signs (`$$`), e.g.:

	```markdown
	$$
	<latex>
	$$
	```

_**Example:**_

Here's Newton’s universal law of gravitation:

```markdown
$$
F = GM⋅m / r^{2}
$$

$$ ``If \space I \space have \space ever \space made \space any \space valuable \space discoveries, \space it \space has \space been \space owing \space more \space to \space patient \space attention, \space than \space to \space any \space other \space talent." \\  - Isaac \space Newton $$
```

_**Rendered Output:**_

$$
F = GM⋅m / r^{2}
$$

$$ ``If \space I \space have \space ever \space made \space any \space valuable \space discoveries, \space it \space has \space been \space owing \space more \space to \space patient \space attention, \space than \space to \space any \space other \space talent." \\  - Isaac \space Newton $$


## 3.7. Escape Characters
<small>`[Search Tags: >escapecharacers >escapechars >escchars >esccharacters >& >< >escapesequences >escpcharacters >escpchars >escpechars]`</small>

### 3.7.1. Automated Escaping
<small>`[Search Tags: >autoescapes >autoescapechars >autoescapecharacters]`</small>

-	In **HTML**, there are two characters that demand special treatment: `<` and `&`. Left angle brackets are used to start tags; ampersands are used to denote HTML entities. If you want to use them as entities, e.g. `&lt;`, and `&amp;`.

-	**Markdown** on the other hand allows you to use these character naturally. It takes care of all the necessary escaping for you. If you use an ampersand as part of an **HTML** entity, it remains unchanged; otherwise it will be translated into `&amp;`.

### 3.7.2. Backslash Escapes
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

# 4. Appendices
<small>`[Search Tags: >appendices]`</small>

## 4.1. Resources
<small>`[Search Tags: >resources >ressources >greatlinks >greatresources >guides >cheatsheets >documentation >docs]`</small>

| # | Type | Author | Link |
| - | ---- | ------ | ---- |
| 1 | Documentation | Markdown Author(s) | [Official Markdown Documentation][11] |
| 2 | Guide | Markdownguide | [Markdown Documentation][22] |
| 3 | Cheat Sheet | Markdownguide | [Markdown Cheat Sheet][33] |
| 4 | Documentation | VSCode Ext. Authors | [Markdown All in One \| Documentation][44] |


<!-- Links -->
[44]:https://shd101wyy.github.io/markdown-preview-enhanced/
	"VSCode Ext. Authors \| Markdown All in One \| Documentation"
[33]: https://www.markdownguide.org/cheat-sheet/
	"Markdownguide \| Markdown Cheat Sheet"
[22]: https://www.markdownguide.org/basic-syntax/
	"Markdownguide \| Markdown Documentation"
[11]: https://daringfireball.net/projects/markdown/syntax
	"Markdown Authors \| Official Documentation"
