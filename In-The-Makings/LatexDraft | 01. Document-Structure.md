
---
[🏠](#part-01-common-elements) | [⬅️](#contents) | [➡️](#2-text-formatting)
# 1. Document Structure
<small>`[Search Tags: >docstructure >docstructs >docstrcts >documentstructures]`</small>
<br>

>	*The main objective in writing is to convey ideas, information, or knowledge to the reader. The better these ideas are structured, the better the reader will understand and retain them. And in addition, the more the typographical form reflects this logical/semantic structure, the better this structure will appear and be felt [by the reader]*
>
>	*This is where LaTeX, in contrast to other typesetting systems, shines. LaTeX allows you to simply tell it the logical/semantical structure of the text that you want, using commands DO (e.g. `\part{}`, `\chapter{}`, `\section{}`). It then derives the typographical form of the text according to the “rules” given in the _document class file_ (and in various style files).*
>
>	*LaTeX allows users to structure their documents with a variety of hierarchical constructs, including parts, chapters, sections, subsections, paragraphs and even subparagraphs.*

-	*1*. [Global structure](#1-global-structure)
-	*2*. [Preamble](#2-preamble)
	-	*2.1*. [Document classes](#21-document-classes)
	-	*2.2*. [Packages](#22-packages)
-	*3*. [The document environment](#3-the-document-environment)
	-	*3.1*. [Top matter](#31-top-matter)
	-	*3.2*. [Table of contents](#32-table-of-contents)
		-	*3.2.1*. [Depth](#321-depth)
	-	*3.3*. [Abstract](#33-abstract)
	-	*3.4*. [Sectioning commands](#34-sectioning-commands)
		-	*3.4.1*. [Section numbering](#341-section-numbering)
		-	*3.4.2*. [Section number style](#342-section-number-style)
	-	*3.5*. [Paragraphs](#35-paragraphs)
-	*4*. [Book structure](#4-book-structure)
	-	*4.1*. [Page order](#41-page-order)
-	*5*. [Special pages](#5-special-pages)
	-	*5.1*. [Bibliography](#51-bibliography)
-	*6*. [Resources](#6-resources)

---


[🏠](#1-document-structure) | [⬅️](#1-document-structure) | [➡️](#2-preamble)
# 1. Global structure
<small>`[Search Tags: >document.structure.global >document.global.structure >structure.global >global.structure >globalstructure >structureglobal >globaldocumentstructure >globadocstructure >docglobalstructure >gstructures >gdocstructures]`</small>
<br>
<br>

-	***LaTeX document global structure***:

	```latex
	\documentclass{...}

	% Preamble

	\begin{document}

	% Document Environment

	\end{document}
	```
	>
	> *The reason for marking off the beginning of your text is that LaTeX allows you to insert extra setup specifications (e.g. document class, packages, etc) before it.*
	>
	> *The reason for marking off the end of your text is to provide a place for LaTeX to be programmed to do extra stuff automatically at the end of the document, like making an index.*
	>
	> *See preamble ([§2](#2-preamble)), document environment ([§3](#3-the-document-environment)).*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Encyclopedia       | Wikipedia              | [Latex :: Document :: Global Structure](https://en.wikibooks.org/wiki/LaTeX/Document_Structure#Global_structure)


---
[🏠](#1-document-structure) | [⬅️](#1-global-structure) | [➡️](#21-document-classes)
# 2. Preamble
<small>`[Search Tags: >preamble >perambule]`</small>

The preambule area is meant to be a place where **things affecting the entire document** are supposed to be declared / defined. Things like, the **document class** ([§2.1](#21-document-classes)) and **packages** ([§2.2](#22-packages)) which we will discuss below.

---
[🏠](#1-document-structure) | [⬅️](#2-preamble) | [➡️](#22-packages)
## 2.1. Document classes
<small>`[Search Tags: >documentclass >docclass >init >documentclass >docclass >doclass >classes >doctype >doclayoutclass >doclasslayout >layout]`</small>
<br>
<br>

-	A ***document class*** is an abstraction – of a set of commands <!--(§ SECTION )-->, defined in a file, governing a documents' typographical form (i.e layout, style, etc), when imported.

-	A *document class* is defined in a ***document class file*** – a file with a `.cls` extention (name), containing "rules" that describe *[to the LaTeX processor]* the typographical form of a document – i.e how to format a document, i.e how to make it look in print.

-	***To specify which document class [to use]:***
	```latex
	\documentclass[<options>]{<class>}
	```
	> – write the above command at the very top of your document.

	**Example:**
	```latex
	\documentclass[12pt, a4paper, oneside, draft]{report}
	```

<br>

Replace the `<class>` field with one of the following **standard document classes**:

Class     | Description
----------|--------------
`article` | For articles in scientific journals, presentations, short reports, program documentation, invitations, ...
`IEEEtran` | For articles with the IEEE Transactions format.
`proc` | A class for proceedings based on the article class.
`report` | For longer reports containing several chapters, small books, thesis, ...
`book` | For real books.
`slides` | For slides. The class uses big sans serif letters.
`memoir` | For changing sensibly the output of the document. It is based on the `book` class, but you can create any kind of document with it
`letter` | For writing letters.
`beamer` | For writing presentations (see [LaTeX/Presentations](https://en.wikibooks.org/wiki/LaTeX/Presentations)).

<small>`[Search Tags: >documentoptions >docoptions >documentoptions >docoptions >dooptions >optionses >doclayoutoptions >dooptionslayout >docops >layoutoptions >layoutops]`</small>

... and replace the `<option>` field with one or more of the common **class options**:

Option | Description
-------|--------------
`10pt`, `11pt`,`12pt` | Sets the size of the main font in the document. If no     option is specified, 10pt is assumed.
`a4paper`, `letterpaper`, <br>... | Defines the paper size. The default size is     `letterpaper`; However, many European distributions of TeX now come pre-set     for A4, not Letter, and this is also true of all distributions of pdfLaTeX.     Besides that, `a5paper`, `b5paper`, `executivepaper`, and `legalpaper` can be     specified.
`fleqn` | Typesets displayed formulas left-aligned instead of centered.
`leqno` | Places the numbering of formulas on the left hand side instead of the     right.
`titlepage`, `notitlepage` | Specifies whether a new page should be started     after the document title or not. The article class does not start a new     page by default, while report and book do.
`twocolumn` | Instructs LaTeX to typeset the document in two columns instead of     one.
`twoside`, oneside | Specifies whether double or single sided output should be     generated. The classes `article` and `report` are single sided and the `book`     class is double sided by default. Note that this option concerns the style     of the document only. The option `twoside` does not tell the printer you use     that it should actually make a two-sided printout.
`landscape` | Changes the layout of the document to print in landscape mode.
`openright`, `openany` | Makes chapters begin either only on right hand pages     or on the next page available. This does not work with the `article` class,     as it does not know about chapters. The `report` class by default starts     chapters on the next page available and the `book` class starts them on right     hand pages.
`draft` | Makes LaTeX indicate hyphenation and justification problems with a     small square in the right-hand margin of the problem line so they can be     located quickly by a human. It also suppresses the inclusion of images and     shows only a frame where they would normally occur.

-	Non-generic classes (e.g. some provided by university departments or publication houses) may have different options than those shown above or no options at all. Normally, third-party classes come with their own documentation.

	>	A [document] class's documentation (and other relevant information) can be found (and downloaded) on the – [Comprehensive TeX Archive Network (CTAN)](https://ctan.org) – *"central place for all kinds of material around TeX"*.

-	It is also possible to create & use your own *document class(es)*.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Encyclopedia | Wikipedia | [Latex :: Document :: Classes](https://en.wikibooks.org/wiki/LaTeX/Document_Structure#Document_classes)
> | 2 | Documentation | Overleaf | [Latex :: Understanding [...] class files](https://www.overleaf.com/learn/latex/Understanding_packages_and_class_files)
> | 3 | Documentation | Overleaf | [Latex :: Writing your own class](https://www.overleaf.com/learn/latex/Writing_your_own_class)
> | 4 | Documentation | Overleaf | [The Preamble of a Document](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes#The_preamble_of_a_document)
> | 5 | Archive | CTAN | [Classes](https://ctan.org/topic/class)


---
[🏠](#1-document-structure) | [⬅️](#21-document-classes) | [➡️](#3-the-document-environment)
## 2.2. Packages
<small>`[Search Tags: >packages >packs >libs >libraries >modules >mods >imports >includes >usepackage >pcks >pckgs >pkgs >exts >extensions >extens]`</small>
<br>
<br>

-	A **pacakge** is an abstraction – of a set of commands <!--(§ SECTION )--> and macros <!--(§ SECTION )-->, defined in a file, that add features and functionalities *[to the LaTeX processor]*, when imported, giving you new or enhanced capabilties. Packages are imported – *so to speak* – independantly from *document classes*.

-	A *package* is defined in a ***package file*** – a file with a `.sty` extention (name), containing commands and macros, that extend LaTeX's *[processor]* capabilties.

-	***To use packages:***
	```latex
	\usepackage[<options>]{<package>}
	```
	> – write the above command at the top of your file, after the `\documentclass[]{}` command.

	**Example:**
	```latex
	\documentclass[12pt, a4paper, oneside, draft]{report}

	\usepackage[ampersand]{easylist}  % Introduces an Enhanced & (More) Flexible Enums/Lists
	\usepackage[utf8]{inputenc}       % Added [UTF8] (Input) Encoding Capability
	\usepackage{tasks}                % Added Horizontal Enum Items Capability
	\usepackage{amsmath}              % Added Math Capabilities
	...
	```

-	Each package comes with its documentation. In it is specified the option(s) that come with it *[the package]* and that can be used *[in the `<options>` field]* when importing it *[the package]*, via `\usepackage[]{}`. <br>

	Package documentation also details the added features and functionalities *[to the LaTeX processor]* and how to use them *[in your document]*.

	>	A package's documentation (and other relevant information) can be found (and downloaded) on the – [Comprehensive TeX Archive Network (CTAN)](https://ctan.org) – *"central place for all kinds of material around TeX. CTAN has currently 5781 packages. 2651 contributors have contributed to it. Most of the packages are free and can be downloaded and used immediately"*.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Encyclopedia | Wikipedia | [Latex :: Document :: Packages](https://en.wikibooks.org/wiki/LaTeX/Document_Structure#Packages)
> | 2 | Documentation | Overleaf | [Latex :: Understanding [...] packages](https://www.overleaf.com/learn/latex/Understanding_packages_and_class_files)
> | 3 | Documentation | Overleaf | [Writing your own package](https://www.overleaf.com/learn/latex/Writing_your_own_package)
> | 4 | Archive | CTAN | [Packages](https://ctan.org/pkg)


---
[🏠](#1-document-structure) | [⬅️](#22-packages) | [➡️](#31-top-matter)
# 3. The document environment
<small>`[Search Tags: >docenvironment >documentenvironment >envdocument]`</small>
<br>

> The document environment <!--(§ SECTION )--> can be divided into five subdivisions: ***top matter*** ([§3.1](#31-top-matter)), ***table of contents*** ([§3.2](#32-table-of-contents)), ***abstract*** ([§3.3](#33-abstract)), ***subdivisions of the actual content*** ([§3.4](#34-sectioning-commands)) *(e.g. parts, chapters, sections, subsections)* and lastly *(ordinary)* ***paragraphs*** ([§3.5](#35-paragraphs)).

---
[🏠](#1-document-structure) | [⬅️](#3-the-document-environment) | [➡️](#33-abstract)
## 3.1. Top matter
<small>`[Search Tags: >topmatter >top.matter >matter.top >document.topmatter >doctopmatter >docmattertop >doc.topmatter >tpmatter]`</small>
<br>
<br>

-	***Top matter:***

	```latex
	% Preamble

	\begin{document}

	\title     {<title>}
	\author    {<author>}
	\date      {<date>}
	\maketitle

	\end{document}
	```

	– *[the term]* refers to all of the information about the document itself (e.g. title, date, etc) and also information about the author(s) (e.g. name, address, email, etc).


	> The commands: `\title{}`, `\author{}`, and `\date{}` are self-explanatory.
	>
	> <small>*Example:*</small>
	> ```latex
	> \title     {The Boy and the Whale}
	> \author    {Fredrich Stevenson}
	> \date      {January 1974}
	> ```
	>
	> With regards to the `\date` command; <br>
	>	-	omitting it (i.e not writing it at all),  causes LaTeX to typeset the title with the current day's date. <br>
	>	-	not passing any arguments (i.e leaving the curly brackets blank: `\date{}`) causes LaTeX to typeset the title without any date. <br> <br>
	>
	> `\maketitle` is the command that tells *[the]* LaTeX *[processor]* to typeset *(i.e process for printing)* the title. Omitting it, causes no title to be typeset.
	>
	> *<small>[Note:*
	>
	> -	In this *[the shown above]* manner, you can only create titles with a fixed layout. To have greater flexibility, see Title Creation ([§11](#11-title-creation)). <br>
	> -	Remember, however, that the goal of LaTeX is to leave formatting to the document class designer, and if you wish to submit your work to multiple publishers then you should avoid designing a custom title.
	>
	> <br> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Encyclopedia | Wikipedia | [Latex :: Document :: Top matter](https://en.wikibooks.org/wiki/LaTeX/Document_Structure#Top_matter)
> | 2 | Documentation | Overleaf | [Adding a titlem author and date](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes#Adding_a_title.2C_author_and_date)


---
[🏠](#1-document-structure) | [⬅️](#31-top-matter) | [➡️](#321-depth)
## 3.2. Table of contents
<small>`[Search Tags: >toc, >lof, >lot, >tableofcontents, >tableoffigures >tableoftable]`</small>
<br>
<br>


-	***To create the table of contents:***

	```latex
	\tableofcontents
	```

	> – write this command. It tells LaTeX to generate the table of contents, *according to the predefined settings and styles*.

-	To change the title of the ToC:

	```latex
	\renewcommand{\contentsname}{<New table of contents title>}
	```

	>
	>	you have to paste this command  in your document preamble. The List of Figures (LoF) and List of Tables (LoT) names can be changed by replacing the \contentsname with \listfigurename for LoF and \listtablename for LoT.

To manually add entries, for example when you want an unnumbered section, use the command \addcontentsline as shown in the example.

Note: For the table of contents to work properly you must compile the document twice or use latexmk -pdf

The default title for the table of contents is "Contents", this can be changed into whatever you need.
\renewcommand*\contentsname{Summary}

The commands \listoffigures and \listoftables work in exactly the same way as \tableofcontents to automatically list all your tables and figures. They normally go after the \tableofcontents command.

The \tableofcontents command normally shows only numbered section headings, and only down to the level defined by the tocdepth counter, but you can add extra entries with the \addcontentsline command.

For example if you use an unnumbered section heading command to start a preliminary piece of text like a Foreword or Preface, you can write:

\subsection*{Preface}
\addcontentsline{toc}{subsection}{Preface}

> This will format an unnumbered ToC entry for "Preface" in the "subsection" style. You can use the same mechanism to add lines to the List of Figures or List of Tables by substituting lof or lot for toc.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Encyclopedia | Wikipedia | [Latex :: Document :: Table of Contents](https://en.wikibooks.org/wiki/LaTeX/Document_Structure#Table_of_contents)
> | 2 | Documentation | Overleaf | [Overleaf :: Table of Contents](https://www.overleaf.com/learn/latex/Table_of_contents#Introduction)


---
[🏠](#1-document-structure) | [⬅️](#32-table-of-contents) | [➡️](#33-abstract)
### 3.2.1. Depth
<small>`[Search Tags: >tocdepth >depthtoc >toc.depth >tableofcontentsdepth >depthtableofcontents]`</small>
<br>
<br>

> TODO: Depth

The default ToC will list headings of level 3 and above.

To change how deep the table of contents displays automatically the following command can be used in the preamble:

\setcounter{tocdepth}{4}

> This will make the table of contents include everything down to paragraphs.


In order to further tune the display or the numbering of the table of contents, for instance if the appendix should be less detailed, you can make use of the tocvsec2 package ([CTAN](https://www.ctan.org/pkg/tocvsec2), [doc](http://mirror.utexas.edu/ctan/macros/latex/contrib/tocvsec2/tocvsec2.pdf)). "The tocvsec2 package provides means of controlling the sectional numbering and/or the entries in the Table of Contents on a section by section basis."


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Encyclopedia | Wikipedia | [Latex :: Table of Contents :: Depth](https://en.wikibooks.org/wiki/LaTeX/Document_Structure#Depth)


---
[🏠](#1-document-structure) | [⬅️](#31-top-matter) | [➡️](#34-sectioning-commands)
## 3.3. Abstract
<small>`[Search Tags: >abstract >documentabstract >articleabstract >docabstract]`</small>
<br>
<br>

> TODO: Abstract

overleaf:In LATEX there's the abstract environment for this. The abstract environment will put the text in a special format at the top of your document.

wikibooks:
there are predefined commands for telling LaTeX which part of the content makes up the abstract. This should appear in its logical order, therefore, after the top matter, but before the main sections of the body. This command is available for the document classes article and report, but not book.

\documentclass{article}

\begin{document}

\begin{abstract}
Your abstract goes here...
...
\end{abstract}
...
\end{document}
By default, LaTeX will use the word "Abstract" as a title for your abstract. If you want to change it into anything else, e.g. "Executive Summary", add the following line before you begin the abstract environment:

\renewcommand{\abstractname}{Executive Summary}



<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | Overleaf | [Basic Formatting :: Abstract](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes#Abstracts)
> | 2 | Video | Overleaf | [Including an abstract in an article](https://www.overleaf.com/learn/latex/Questions%2FIncluding_an_abstract_in_your_article)


---
[🏠](#1-document-structure) | [⬅️](#33-abstract) | [➡️](#341-section-numbering)
## 3.4. Sectioning commands
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Sectioning commands
-	LaTeX offers specific commands to insert sections.

	***Section inserting commands:***

	```latex
	\part{Introduction}
	This part's content...

	\chapter{Introduction}
	This chapter's content...

	\section{Structure}
	This section's content...

	\subsection{Top Matter}
	This subsection's content...

	\subsubsection{Article Information}
	This subsubsection's content...
	```

> *<small>[Note:*
>
>
> <br> *- end note]</small>*

-	LaTeX provides 7 levels of depth for defining sections (see table below). Each section in this table is a subsection of the one above it.

    | Command                          | Level | Comment
    |:---------------------------------|:------|:------------------------
    | `\part{<part>}`                  |  -1   | *not in letters*
    | `\chapter{<chapter>}`            |   0   | *only books and reports*
    | `\section{<section>}`            |   1   | *not in letters*
    | `\subsection{<subsection>}`      |   2   | *not in letters*
    | `\subsubsection{<subsubsection>}`|   3   | *not in letters*
    | `\paragraph{<paragraph>}`        |   4   | *not in letters*
    | `\subparagraph{<subparagraph>}`  |   5   | *not in letters*

-	Notice: <br>

	-	You do not need to specify section numbers; LaTeX will sort that out for you.
	-	You do not need to use `\begin{}` and `\end{}` commands to indicate which content belongs to a given block. <br>

-	All the titles of the sections *(parts, chapters, sections, etc)* are added automatically to the table of contents

if you make manual styling changes to your heading, for example a very long title, or some special line-breaks or unusual font-play, this would appear in the Table of Contents as well, which you almost certainly don't want. LaTeX allows you to give an optional extra version of the heading text which only gets used in the Table of Contents and any running heads, if they are in effect. This optional alternative heading goes in [square brackets] before the curly braces:

\section[Effect on staff turnover]{An analysis of the
effect of the revised recruitment policies on staff
turnover at divisional headquarters}


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#34-sectioning-commands) | [➡️](#342-section-number-style)
### 3.4.1. Section numbering
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Section numbering

-	***Numbering of the sections is performed automatically by LaTeX***, so don't bother adding them explicitly.

	>	Parts get roman numerals (Part I, Part II, etc.); chapters and sections get decimal numbering like this document, and appendices (which are just a special case of chapters, and share the same structure) are lettered (A, B, C, etc.).

-	***To set depth of section numbering:***
	```latex
	\setcounter{secnumdepth}{1} % Default=3
	```
	>	– that's *[the above source code]* if you only wanted parts, chapters, and sections numbered, not subsections or subsubsections etc.

-	***To set depth of table of contents:***
	```latex
	\setcounter{tocdepth}{3}
	```

	> – it is modified in exactly the same way as `secnumdepth`.

-	***To add unnumbered sections, which aren't added to the Table of Contents:***

	```latex
	\subsection*{Introduction}
	```

	>	– follow the *[sectionning]* command name with an asterisk `*` before the opening curly brace `*{}`.
	>
	>	– All the divisional commands from `\part*` to `\subparagraph*` have this "starred" version which can be used on special occasions for an *unnumbered heading* when the setting of `secnumdepth` would normally mean it would be numbered.

-	***To add unnumbered sections, which are added to the table of contents:***
	```latex
	\usepackage{unnumberedtotoc}

	...

	\addpart{Introduction}
	This part's contents ...

	\addchap{Introduction}
	This chapter's contents ...

	\addsec{Introduction}
	This section's contents ...
	```
	– you can use these *[the shown above]* commands, from the *`unnumberedtotoc`* package.
	> *<small>[Note: KOMA classes provide those commands by default. - end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#341-section-numbering) | [➡️](#35-paragraphs)
### 3.4.2. Section number style
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Section number style







<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#342-section-number-style) | [➡️](#4-book-structure)
# 3.5. Paragraphs
<small>`[Search Tags: >paragraphs >ordinaryparagraphs >paras >texts >textboxes]`</small>
<br>
<br>

> TODO: Ordinary paragraphs







<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#35-paragraphs) | [➡️](#41-page-order)
# 4. Book structure
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Book structure







<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#4-book-structure) | [➡️](#5-special-pages)
## 4.1. Page order
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Page order







<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#41-page-order) | [➡️](#51-bibliography)
# 5. Special pages
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Special pages







<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#5-special-pages) | [➡️](#6-resources)
## 5.1. Bibliography
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Bibliography







<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#1-document-structure) | [⬅️](#2-text-formatting) | [➡️](#51-bibliography)
# 6. Resources
<small>`[Search Tags: >]`</small>
<br>
<br>

> TODO: Resources







---

### Mohamëeeeeeeeeeeeeed's Plan:
1. Today:
	1. Building 1 decoder
	2. Test it
2. Some Other Day:
   1. Encrypting the message
