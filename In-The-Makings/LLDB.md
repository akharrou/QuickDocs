<!-- ﷽ , In the name of God, the Most Gracious, the Most Merciful. -->

<!-- >Metadata -----------------------------------------------------------------

	AUTHOR(S)
		akharrou

	CONTACT
		idev.aymen@gmail.com

	MOTIVATION(S)
		Promote LLDB, because it is an amazing tool that can benefit in debugging. Explain/remind what LLDB is and how to use it.

	DESCRIPTION
		[Beginner to Intermediate Level] Tutorial on LLDB.


<!-- >Top Matter -------------------------------------------------------------->

QuickDocs \| Low Level Debugger (LLDB)
===

> ***January 2020***

---

<!-- Table of >Contents ------------------------------------------------------->

# Contents

- [1. Overview / Cheat Sheet](#1-overview--cheat-sheet)
- [2. What is it ?](#2-what-is-it-)
- [3. How do I use it ?](#3-how-do-i-use-it-)
	- [3.1. Compile Program](#31-compile-program)
		- [3.1.1. Debug Flags: `-g` &amp; `-O0`](#311-debug-flags--g---o0)
		- [3.1.2. Sanitizer Flags: `-fsanitize` family](#312-sanitizer-flags--fsanitize-family)
	- [3.2. Launch LLDB](#32-launch-lldb)
	- [3.3. Load LLDB](#33-load-lldb)
		- [3.3.1. Basic Commands](#331-basic-commands)
	- [3.4. Setup LLDB](#34-setup-lldb)
		- [3.4.1. Breakpoints](#341-breakpoints)
			- [3.4.1.1. Basic Commands](#3411-basic-commands)
			- [3.4.1.2. Basic (C++) Commands](#3412-basic-c-commands)
			- [3.4.1.3. Advanced Commands](#3413-advanced-commands)
		- [3.4.2. Watchpoints](#342-watchpoints)
			- [3.4.2.1. Basic Commands](#3421-basic-commands)
			- [3.4.2.2. Advanced Commands](#3422-advanced-commands)
	- [3.5. Begin Debugging](#35-start-or-attach-program)
		- [3.5.1. Launch Program](#351-launch-program)
		- [3.5.2. Attach to Program](#352-attach-to-program)
		- [3.5.3. Advanced Program Configurations](#353-advanced-program-configurations)
	- [3.6. Graphical User Interface (GUI)](#36-graphical-user-interface-gui)
	- [3.7. Examine Execution](#37-examine-execution)
		- [3.7.1. Source Code](#371-source-code)
		- [3.7.2. Variable(s)](#372-variables)
		- [3.7.3. Thread State(s)](#373-thread-states)
		- [3.7.4. Stack Frame State(s)](#374-stack-frame-states)
- [3. Tips &amp; Shortcuts](#3-tips-amp-shortcuts)
	- [3.1 Makfile]()


<!-- >Start --------------------------------------------------------------------
.
.
.
-->


---
[🏠](#contents) | [⬅️](#contents) | [➡️](#2-what-is-it-)
# 1. Overview / Cheat Sheet
<small>`[Search Tags: >overview >cheatsheet >brief >review >revision >reminder >quickreminder >viewover >fastreview >quickreview]`</small>
<br>
<br>


> TODO: 1. Overview / Cheat Sheet

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Ressources:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---


[🏠](#contents) | [⬅️](#contents) | [➡️](#3-how-do-i-use-it-)
# 2. What is it ?
<small>`[Search Tags: >lldb.what? >lldbwhat? >lldb.who? >lldb.why? >lldb.whocares? >lldb.whycare? >lldb.? >lldb? >whatisit ?isit >whatsit >about >description >whycare >caring? >info >intro >lldb.whatisit >lldb.whycare? >lldb.whyshouldicare?]`</small>
<br>
<br>


#### What is it ?

-	LLDB, is a program – that provides an interface for you to examine the execution of a program – instruction by instruction, or line by line, or breakpoint by breakpoint.

	> More detailed:
	>
	> LLDB, short for ***Low-Level-De-Bugger***, is a program – **that provides an interface** *(a way/channel/portal/access-point/control-panel)* **for you to examine the execution** *([individual] actions/steps taken-by/performed-by)* **of a** *[-nother]* **program** – *[CPU]* **instruction by instruction, or** *[source code]* **line by line, or breakpoint** *(checkpoint(s) set by you, in the source code)* **by breakpoint.** <br>

- "`lldb` is the default debugger in Xcode on macOS and supports debugging C, Objective-C and C++ on the desktop and iOS devices and simulator."

#### Why should I care ?

-	*The short answer;* you should care because it will save you *(***THOUSANDS*** of)* hours of [debugging](https://en.wikipedia.org/wiki/Debugging) – the process of locating [bugs](https://en.wikipedia.org/wiki/Software_bug) *[in source code]*, finding their cause(s) and [patching](https://en.wikipedia.org/wiki/Patch_(computing)) (i.e fixing/removing) them.


<br>
<br>

> ***Furthur Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [The LLDB Debugger \| Official Website](https://lldb.llvm.org/)
> | 2 | Encyclopedia | Wikipedia | [LLDB (debugger)](https://en.wikipedia.org/wiki/LLDB_(debugger))


---


[🏠](#contents) | [⬅️](#2-what-is-it-) | [➡️](#31-compile-program)
# 3. How do I use it ?
<small>`[Search Tags: >lldb.usage > lldb.use >use >usage >how? >howtouse >usinglldb >howtouse >howdoiuseit >howtousage >lldbhowtouse >uselldb >lldbusage]`</small>
<br>
<br>


-	***To use LLDB***:

	```shell
	$> clang <source-code-files> -g -O0
	$> lldb <execuable>
	$> (lldb) b main
	$> (lldb) r <arg-1> <arg-2> ... <arg-n>
	$> (lldb) gui
	```

	---

	>	In words;
	>
	>	- *1.* **Compile Program** ([§3.1](#31-compile-program)) with **Debug Flags** ([§3.1.1 ](#311-debug-flags--g---o0))
	>	- *2.* **Launch LLDB** ([§3.2](#32-launch-lldb))
	>	- *3.* **Load LLDB** *[with your program]* ([§3.3](#33-load-lldb))
	>	- *4.* **Setup LLDB** ([§3.4](#34-setup-lldb)) (e.g. entry-point, breakpoints, watchpoints) *[for your program]*
	>	- *5.* **Run your program** ([§3.5](#35-start-or-attach-program)) *(within LLDB)*
	>	- *6.* **Launch Graphical User Interface** ([3.6](#36-graphical-user-interface-gui)) mode
	>	- *7.* **Examine the Execution** ([§3.7](#37-examine-execution)) *[of your program]*. <br> <br>
	>
	> *Annotated Command Line:*
	>
	> ```shell
	> $> # 1. Compile
	> $> clang <source-code> -g -O0
	> $>
	> $> # 2,3. Launch & Load
	> $> lldb <execuable>
	> $>
	> $> # 4. Setup
	> $> (lldb) b main  # Choose your entry-point, I chose the `int main()` function
	> $> (lldb) b ...   # Add more breakpoints if you want
	> $>
	> $> # 5. Run (optionally, with arguments)
	> $> (lldb) run <arg-1> <arg-2> ... <arg-n>
	> $>
	> $> # 6. Launch 'gui' mode
	> $> (lldb) gui
	> $>
	> $> # 7. Examine Code
	> ```

	> *<small>[Note:*
	>
	> -	There is also a brief section on a set of *[compiler]* flags, which, basically, make up the other half of the [debugging](https://en.wikipedia.org/wiki/Debugging) tools/weapons available to you – ***the `"fsanitize"` family*** ([§3.1.2](#312-sanitizer-flags--fsanitize-family)) *[of flags]*. Don't miss it, you'll miss out on a LOT ! <br>
	>
	> *- end note]</small>*


<br>
<br>

> ***Ressources:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial](https://lldb.llvm.org/use/tutorial.html)
> | 2 | Documentation | Apple | [LLDB Debugging Guide](https://developer.apple.com/library/archive/documentation/General/Conceptual/lldb-guide/chapters/Introduction.html)


---
[🏠](#contents) | [⬅️](#3-how-do-i-use-it-) | [➡️](#311-debug-flags--g---o0)
## 3.1. Compile Program
<small>`[Search Tags: >lldb.compileprogram >compileprogram >db.compileprogram >compilationstep >compilestep >compprogram]`</small>
<br>
<br>


-	***LLDB works by loading it with*** *(i.e setting it up to run)* ***an execuable*** *[file]* *(compiled source code program)*. So first thing would be to [compile](http://www.cs.ecu.edu/~karl/3300/spr16/Notes/System/compile.html) a program.

-	***Demonstration:*** <br>
	> ![Demo: compile-with-debug-and-fsanitize-flags](https://media.giphy.com/media/JRPUPdiP8Awj39A6A0/giphy.gif) <!-- ../Assets/LLDB/compile-with-debug-and-fsanitize-flags.gif -->

	> *<small>[Note: These [compiler] flags work with both `gcc` and `clang` [compilers]. - end note]</small>*

-	Make sure to use *(compile with)* the debugging *[compiler]* flags ([§3.1.1](#311-debug-flags--g---o0)).

	>  *And, although unrelated to *`lldb`*, make sure *[when debugging]* to always compile with the *`fsanitize`* family of *[compiler]* flags ([3.1.2](#312-sanitizer-flags--fsanitize-family)). They are tremendously helpful *[with debugging]*, they pretty much do ***half of the debugging effort*** for you !*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | MacOS | `man clang`


---
[🏠](#contents) | [⬅️](#31-compile-program) | [➡️](#312-sanitizer-flags--fsanitize-family)
### 3.1.1. Debug Flags: `-g` & `-O0`
<small>`[Search Tags: >compileprogram >compileprg >programcompilation >compilation >lldb.compile.flags >lldb.compile.debugflags >lldb.debugflags >lldb.flags >debugflags >dbflags >deflags >bugflags >dbgflags >dbugflags]`</small>
<br>
<br>


-	***To see source code in the *"examination phase"**** *(instead of assembly code)*, you'll have to add *[in the compilation step]* the *[compiler]* flag *(specific to the compiler used)* that ***generates debug information***; but if your goal is to see *assembly*, then omit this step.

	> For `clang` and `gcc` *[compilers]*, the flag is: `-g`.

-	***To make sure that no source code is not optimized away*** *(i.e modified by the compiler in order to optimize the [speed and efficiency of a] program)*, you'll have to add *[in the compilation step]* the *[compiler]* flag *(specific to the compiler used)* that ***turns off optimizations***; if you don't do this, then during *"examination phase"*, `lldb` might appear to be excuting *[the source code]* in a non-linear manner *(i.e it will (seem to) jump (skip) over some lines and loops, etc)*.

	> For `clang` and `gcc` *[compilers]*, the flag is: `-O0`
	> <br> Uppercase letter /Oh/ `O`, followed by, the digit /zero/ '0'.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | Unix / Linux / MacOS | `man clang`
> | 2 | Documentation | Clang | [Compiler :: Debug Options](https://clang.llvm.org/docs/UsersManual.html#controlling-debug-information)
> | 3 | Documentation | Clang | [Compiler :: Documentation](https://clang.llvm.org/docs/UsersManual.html)
> | 4 | Documentation | GNU | [Compiler :: Debug Options](https://gcc.gnu.org/onlinedocs/gcc-9.2.0/gcc/Debugging-Options.html#Debugging-Options)
> | 5 | Documentation | GNU | [Compiler :: Documentation](https://gcc.gnu.org/onlinedocs/gcc-9.2.0/gcc/Debugging-Options.html#Debugging-Options)


---
[🏠](#contents) | [⬅️](#311-debug-flags--g---o0) | [➡️](#32-launch-lldb)
### 3.1.2. Sanitizer Flags: `-fsanitize` family
<small>`[Search Tags: >fsanitize=address >fsanitize=undefined >fsanitize=memory >fsanitize=leaks >fsanitize=threads >fsanitize=dataflag >fsanitize=cfi >fsanitize=safestack >fsanitize=safe-stack >fsanitize=data-flow >sanitizers >sanitizerflags >sanitizeflags >sanitizer.flags >flags.sanitizers >debug.sanitizers >debugsanitizers >debugfsanitizers >memoryflags >leakflags >threadflags >dataflowflags >undefinedbehaviorflags >safestackflags >cfiflags >memory.flags >leak.flags >thread.flags >dataflow.flags >undefinedbehavior.flags >safestack.flags >cfi.flags] >flags.memory >flags.leak >flags.thread >flags.dataflow >flags.undefinedbehavior >flags.safestack >flags.cfi`</small>
<br>
<br>

> *This section is unrelated to LLDB, but related to debugging.*

-	The `fsanitize` *[compiler]* flag family is an extraordinarily helpful set of *[compiler]* flags, with regards to debugging. They enable *[compiler]* *[runtime](https://en.wikipedia.org/wiki/Runtime_(program_lifecycle_phase))* checks – *which are disabled by default* – that detect and help avoid bugs. <br>

	If a check fails, a diagnostic message is produced *(at runtime)* explaining the problem.

	> *<small>[Note: Adding the `-g` flag causes better (i.e more detailed) diagnostic messages to be produced [by the sanitizers], so keep it ! - end note]</small>*

	Here are the ***available sanitizers***:

    | Sanitizer                     | Enabling Flag | Description
    | :---------------------------- |----------------------|-------------
    |  [AddressSanitizer](https://developer.apple.com/documentation/code_diagnostics/address_sanitizer)             |`-fsanitize=address`    | A fast ***memory error*** detector.
    |  [ThreadSanitizer](https://developer.apple.com/documentation/code_diagnostics/thread_sanitizer)              |`-fsanitize=thread`     | A ***data-race detector***.
    |  [MemorySanitizer](https://clang.llvm.org/docs/MemorySanitizer.html)              |`-fsanitize=memory`     | A detector of ***uninitialized reads***.
    |  [UndefinedBehaviorSanitizer](https://developer.apple.com/documentation/code_diagnostics/undefined_behavior_sanitizer)   |`-fsanitize=undefined`  | A fast ***undefined behavior*** detector.
    |  [DataFlowSanitizer](https://clang.llvm.org/docs/DataFlowSanitizer.html)            |`-fsanitize=dataflow`   | A general ***data flow analysis***.
    |  [Control Flow Integry](https://clang.llvm.org/docs/ControlFlowIntegrity.html)            |`-fsanitize=cfi`   | ***Control flow*** checks.
    |  [SafeStack](https://clang.llvm.org/docs/SafeStack.html)            |`-fsanitize=safe-stack`   | Protection against ***stack-based memory*** corruption errors.

	Each *[sanitizer]* performs multiple *(different)* checks, for example: the *UndefinedBehaviorSanitizer* – enabled by *[the sanitizer enabler flag:]* *`-fsanitize=undefined`* – performs all the checks listed [here](https://developer.apple.com/documentation/code_diagnostics/undefined_behavior_sanitizer#topics) (or [here](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html#available-checks), just another good resource).

-	***To enable a sanitizer***:

	> ***Synopsis:***
	> ```shell
	> $> <compile-command> [-g] [<sanitizer-enabling-flags> ...]
	> ```
	>
	> ***Example:***
	> ```shell
	> $> gcc source.c -g -fsanitize=address -fsanitize=undefined
	> ```
	>
	> – add it *[the sanitizer's corresponding [enabler] flag]* to the compilation command. <br>
	>
	>	The shown above *[command]*, adds/activates the *[runtime checks of the]* *AddressSanitizer* and the *UndefinedBehaviorSanitizer*, respectively.
	>
	> *<small>[Note:* It is not possible to have more than one the following sanitizers: *"`-fsanitize=address`"*, *"`-fsanitize=thread`"*, and *"`-fsanitize=memory`"*, at the same time. *- end note]*
	>

<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | Apple |[Sanitizers Family](https://developer.apple.com/documentation/code_diagnostics/)
> | 2 | Documentation | Clang | [Sanitizers Family](https://clang.llvm.org/docs/UsersManual.html#controlling-code-generation)
> | 3 | Documentation | GNU | [Sanitizers Family (scroll down) ](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html#-fsanitize=address)

---
[🏠](#contents) | [⬅️](#312-sanitizer-flags--fsanitize-family) | [➡️](#33-load-lldb)
## 3.2. Launch LLDB
<small>`[Search Tags: >lldb.launch >debugger.launch >lldblaunch >debuggerlaunch >launchlldb >launchdebugger]`</small>
<br>
<br>


-	***To launch/start LLDB:***

	>
	> ```shell
	> $> lldb
	> (lldb)
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | Unix / Linux / MacOS | [`man lldb`](http://www.manpagez.com/man/1/lldb/)


---
[🏠](#contents) | [⬅️](#32-launch-lldb) | [➡️](#34-setup-lldb)
## 3.3. Load LLDB
<small>`[Search Tags: >loadprogram >loadprocess >loadexecutable >programload >processload >executableload >lldb.loadprogram >loadlldb >loaddebugger >debugger.loadprogram >db.loadprogram >programload >program.load >lldb.unloadprogram >unloadlldb >unloaddebugger >debugger.unloadprogram >db.unloadprogram >programunload >program.unload]`</small>
<br>
<br>


-	`lldb` must *[then]* be informed of which program we intend to debug – this step is referred to as: ***"loading a program"*** . <br>

	> To be more pedantic, we say – we are ***loading*** *[`lldb` with]* a ***debugger target***, i.e setting `lldb` up to target a specific process *(program)*, for debugging/examination-phase.

-	***Demonstration:*** <br>
	> ![Demo: lldb-load](https://media.giphy.com/media/Ur15mVAN0o0QcyuMQY/giphy.gif) <!-- ../Assets/LLDB/lldb-load.gif --> <br>


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Loading a Program into LLDB](https://lldb.llvm.org/use/tutorial.html#loading-a-program-into-lldb)
> | 2 | Manual Page | Unix / Linux / MacOS | `(lldb) help target`


---
[🏠](#contents) | [⬅️](#32-launch-lldb) | [➡️](#34-setup-lldb)
### 3.3.1. Basic Commands
<small>`[Search Tags: >lldbloadcomands >lldb.load.commands >lldbloadcmds >lldb.load.cmds >debuggerloadcomands >debugger.load.commands >debuggerloadcmds >debugger.load.cmds >loadcomands >load.commands >loadcmds >load.cmds]`</small>
<br>
<br>

> *<small>[Note: `lldb`'s lexicon for a ***"program [executable] intended for debugging"*** is a ***"[debugger] target"*** . - end note]</small>*

-	***To create a [debugger] target (i.e load a program executable):***

	> *From outside [`lldb`]:*
	>
	> > ***Synopsis:***
	> > ```shell
	> > $> lldb --file <program-execuable-filename> [<run-args>]
	> > ```
	> >
	> > ***Example(s):***
	> > ```shell
	> > $> lldb --file a.out "arg1" "arg2"
	> > $> lldb -f a.out
	> > $> lldb a.out
	> > ```

	> *From inside [`lldb`]:*
	>
	> > ***Synopsis:***
	> >
	> > ```shell
	> > (lldb) target create <program-execuable-filename>
	> > ```
	> >
	> > ***Example(s):***
	> > ```shell
	> > (lldb) target create a.out
	> > (lldb) ta cr a.out
	> > (lldb) ta c a.out
	> > (lldb) file a.out
	> > ```

	> <small>`[Search Tags: >trcreate >createtr >crtr >targetcreate >createtarget]`</small>

	<!-- - *[From] outside `lldb`:* <br> <br>
		```shell
		$> lldb [--file|-f] <program-execuable-filename> [<run-args>]
		```
		```shell
		$> lldb --file a.out "arg1" "arg2" "youGetIt"
		$> lldb -f a.out "arg1" "arg2" "youGetIt"
		$> lldb a.out
		```
	- *[From] inside `lldb`:* <br> <br>
		```shell
		(lldb) target create <program-execuable-filename>
		```
		```shell
		(lldb) target create a.out
		(lldb) ta cr a.out
		(lldb) file a.out
		``` -->

-	***To list (all) targets:***

	> ***Synopsis:***
	>
	> ```shell
	> (lldb) target list
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) target list
	> (lldb) ta l
	> ```

	> <small>`[Search Tags: >trlist >listtr >litr >targetlist >listtarget]`</small>

-	***To select a [different] target [as current target]:***

	> ***Synopsis:***
	>
	> ```shell
	> (lldb) target select <target-index>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) target select 3       # select the third target, as current debugging target
	> (lldb) ta se 5
	> ```

	> <small>`[Search Tags: >trselect >targetselect >setr >selecttr >selecttarget]`</small>

-	***To delete a target (i.e unload an program execuable):***

	> ***Synopsis:***
	>
	> ```shell
	> (lldb) target delete [<target-ids>]
	> (lldb) target delete [--all]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) target delete 3       # delete the target with `target-id`: #3
	> (lldb) tar del 7 5 2         # delete the list of targets: #7 #5 #2
	> (lldb) ta de --all           # delete all targets
	> (lldb) ta d -a               # delete all targets
	> ```

	> <small>`[Search Tags: >trdelete >targetdelete >detr >deletetr >deletetarget]`</small>

> *<small>[Note:*
>
> - "From **outside** *[`lldb`]*"; i.e before, and at the same time as, launch *[of `lldb`] [, on the *[terminal]* command prompt]*.
>
> - "From **inside** *[`lldb`]*"; i.e after launch *[of `lldb`]* *[, on the 	*[`lldb`]* command prompt]*.
>
> - *`[<run-args>]`* represents the argument(s) that you pass to a program.
>
> -	`file` is an *(built-in)* alias/abbreviation for `target create`, see `help file`.
>
> -	To load/debug Python *[scripts]*:
>
> 	```shell
> 	$> lldb -f python -- <script>
> 	```
> 	or
> 	```shell
> 	(lldb) ta cr /path/to/<python>
> 	(lldb) r <script>
> 	```
>
>	> *This also works for other scripting language interpreters and their *[type of]* scripts.*
>
> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Loading a Program into LLDB](https://lldb.llvm.org/use/tutorial.html#loading-a-program-into-lldb)
> | 2 | Manual Page | Unix / Linux / MacOS | `man lldb`
> | 3 | Manual Page | Unix / Linux / MacOS | `(lldb) help target create`
> | 4 | Manual Page | Unix / Linux / MacOS | `(lldb) help target list`
> | 5 | Manual Page | Unix / Linux / MacOS | `(lldb) help target select`
> | 6 | Manual Page | Unix / Linux / MacOS | `(lldb) help target delete`


---
[🏠](#contents) | [⬅️](#33-load-lldb) | [➡️](#341-breakpoints)
## 3.4. Setup LLDB
<small>`[Search Tags: >lldb.setup >debugger.setup >lldbsetup >debuggersetup >setuplldb >setupdebugger]`</small>
<br>
<br>


-	Set your ***breakpoints** ([§ TODO ](#})) and ***watchpoints*** ([§ TODO ](#})).

<!-- BREAKPOINT ANALOGY:

-	An analogy *(a situation/narrative same, or resembling, in essence)* *[for the above concepts]* would be that of city *metros or buses*. The *bus* *(**`lldb`**)* stops at designated *bus stops* *(**breakpoints**)*. The *bus stops* are known by *address or reference number* *(**a particular line, in a *[source code]* file**)*, they may also be known by *(a significant) structure/building, junction or area* *(**a particular function [in your code]**)*. Sometimes the *bus* doesn't stop at a particular *bus stop*, because conditions have been tied to it; the *bus* only stops at the *bus stop* at certain hours and/or certain days of the week; i.e the bus stopping at that station is conditional, i.e relies on certain ***condition(s)*** being met, e.g: *"in the morning hours (6am-11am), if it is a weekday"* *(`if (morning == true && (week_day >= 0 && week_day <= 5))`)*.
-->


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint [<command>]`
> | 2 | Manual Page | LLDB | `(lldb) help watchpoint [<command>]`
> | 3 | Documentation | LLDB | [(Official) Tutorial :: Setting Breakpoints](https://lldb.llvm.org/use/tutorial.html#setting-breakpoints)
> | 4 | Documentation | LLDB | [(Official) Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)
> | 5 | Documentation | LLDB | [(Official) Tutorial :: Setting Watchpoints](https://lldb.llvm.org/use/tutorial.html#setting-watchpoints)


---
[🏠](#contents) | [⬅️](#34-setup-lldb) | [➡️](#3411-basic-commands)
### 3.4.1. Breakpoints
<small>`[Search Tags: >lldb.breakpoints >debugger.breakpoints >lldbbreakpoints >debuggerbreakpoints >breakpointcommands >breakpointcmds >brcmds >bmain >blist >bfile >bfunc >setbrpts >brmain >brsmain >brkpts >breakpts >bpts >brpoints >bapts >bapoints]`</small>
<br>
<br>


-	`lldb` gives you the option to set it *[`lldb`]* up to stop *(pause/halt/break/rest)* *[during execution [of your program]]*, everytime it reaches a certain point/location *(e.g. at a particular line *[in source code]* or at a particular function)* – optionally you can add conditions, so as to only stop at that point/location when the *[added]* condition is met *(fulfilled/reached)*. <br>

	*"A location at which *[`lldb`'s]* execution is setup to stop *[at]*"* is what is referred to as: a ***breakpoint*** ([§3.4.1](#341-breakpoints)) – you can kind of think of them *[breakpoints]* as ***checkpoints***. <br>


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint [<command>]`
> | 3 | Documentation | LLDB | [(Official) Tutorial :: Setting Breakpoints](https://lldb.llvm.org/use/tutorial.html#setting-breakpoints)
> | 4 | Documentation | LLDB | [(Official) Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)


[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.1. Basic Commands
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: #### 3.4.1.1. Basic Commands

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


> *Commands for operating on breakpoints:*

-	***Set a breakpoint, on a function:***

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint set --name <function-name>
	> b <function-name>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --name main
	> (lldb) br s -n main
	> (lldb) b main
	> ```

-	***Set a breakpoint, on a [source file] line:***

	> ***Synopsis:***
	> ```shell
	> breakpoint set --file <filename> --line <line-number>
	> b <filename>:<line-number>
	>```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set -f hello.c -l 10
	> (lldb) br s -f hello.c -l 10
	> (lldb) b hello.c:10
	> ```

-	***List breakpoints:***

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint list -[bfv] [<breakpt-ids>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint list --brief 3 2    # --brief    (minimum description)
	> (lldb) br l -f 1                      # --full     (full description, default
	> (lldb) br l -v                        # --verbose  (extensive description)
	> ```

-	***Delete breakpoint(s):***

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint delete [<breakpt-ids>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint delete 5
	> (lldb) br de 1 2 3
	> (lldb) br d                         # delete all breakpts
	> ```
	>
	> *<small>[Note:*
	>
	> - *If no breakpoint *[id]* is specified, delete them *[the breakpoints]* all.*
	>
	> - *`lldb`, automatically, deletes breakpoints of a [particular] target when the target is deleted.*
	>
	> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.2. Basic (C++) Commands
<small>`[Search Tags: >lldb.breakpoints >debugger.breakpoints >lldbbreakpoints >debuggerbreakpoints >breakpointcommands >breakpointcmds >brcmds >bmain >blist >bfile >bfunc >setbrpts >brmain >brsmain >brkpts >breakpts >bpts >brpoints >bapts >bapoints]`</small>
<br>
<br>


> TODO: #### 3.4.1.2. Basic (C++) Commands

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


> *Commands for operating on breakpoints, concerning C++ (only):*


-	***Set a breakpoint, on function(s)**, by fullname:*

<!-- C++ FUNCTIONS BY FULLNAME (NAMESPACES + BASENAME) -->

       -F <fullname> ( --fullname <fullname> )
            Set the breakpoint by fully qualified function names. For C++ this means namespaces and all arguments. Can be repeated multiple times to make one breakpoint for multiple names.

	> ***Synopsis:***
	>
	> ```shell
	> ```
	>
	> ***Example(s):***
	> ```shell
	> ```

-	***Set a breakpoint, on function(s)**, by basename:*

<!-- C++ FUNCTIONS BY BASENAME -->

       -b <function-name> ( --basename <function-name> )
            Set the breakpoint by function basename (C++ namespaces and arguments will be ignored). Can be repeated multiple times to make one breakpoint for multiple symbols.

	> ***Synopsis:***
	>
	> ```shell
	> ```
	>
	> ***Example(s):***
	> ```shell
	> ```

-	***Set a breakpoint, on method(s):***

<!-- C++ (OBJECT) METHODS -->

       -M <method> ( --method <method> )
            Set the breakpoint by C++ method names. Can be repeated multiple times to make one breakpoint for multiple methods.

	> ***Synopsis:***
	>
	> ```shell
	> ```
	>
	> ***Example(s):***
	> ```shell
	> ```


-	***Set a breakpoint, on exception(s):***

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint set --language-exception <source-code-language>
	> br s -E c++
	> ```
	>
	> ***Example(s):***
	> ```shell
	> ```

<!-- ALL EXCEPTIONS -->

	-E <source-language> ( --language-exception <source-language> )
		Set the breakpoint on exceptions thrown by the specified language (without options, on throw
		but not catch.)


-	***Set a breakpoint, on catch(es):***

	> ***Synopsis:***
	>
	> ```shell
	> ```
	>
	> ***Example(s):***
	> ```shell
	> ```

-	***Exception / Catch breakpoint option(s):***

	> ***Synopsis:***
	>
	> ```shell
	> ```
	>
	> ***Example(s):***
	> ```shell
	> ```

OPTIONS FOR EXCEPTION BREAKPOINTS:

       -O <type-name> ( --exception-typename <type-name> )
            The breakpoint will only stop if an exception Object of this type is thrown. Can be repeated multiple times to stop for multiple object types. If you just specify the type's base name it will match against that type in all modules, or you can specify the full type name including modules.  Other submatches are not supported at present.Only supported for Swift at present.

       -w <boolean> ( --on-throw <boolean> )
            Set the breakpoint on exception throW.

       -h <boolean> ( --on-catch <boolean> )
            Set the breakpoint on exception catcH.



<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.3. Advanced Commands
<small>`[Search Tags: >advlldb.breakpoints >advdebugger.breakpoints >advlldbbreakpoints >advdebuggerbreakpoints >advbreakpointcommands >advbreakpointcmds >advbrcmds >advbmain >advblist >advbfile >advbfunc >advsetbrpts >advbrmain >advbrsmain >advbrkpts >advbreakpts >advbpts >advbrpoints >advbapts >advbapoints]`</small>
<br>
<br>


> TODO: #### 3.4.1.3. Advanced Commands

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.

> *Advanced commands for operating on breakpoints:*


-	***Set a breakpoint, on line(s), in file(s)**, using regular-expressions:*

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint set --all-files <regular-expression>                # Search all files
	> breakpoint set --source-pattern-regexp <regular-expression>    # Search (only) specified files
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --all-files ''
	> (lldb) br s -A ''
	> ```
	> ```shell
	> (lldb) breakpoint set --source-pattern-regexp ''
	> (lldb) breakpoint set -p ''
	> ```
	>
	>*<small>[Note: Source file(s) are specified with the `-f` option. The `-f` option can be specified more than once. If no source files are specified, uses the current "default source file". - end note]</small>*

-	***Set a breakpoint, on function(s)**, using regular-expressions:*

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint set --func-regex <regular-expression>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --func-regex 'Parser.{3,4,5}_Command\(\)'
	> (lldb) br s -r "Parser.{3,4,5}_Command\(\)"
	> ```
	>
	> > *<small>[Note: Function call-sites also count as matches, and get a breakpoint. - end note]</small>*


<br>

> **Know that** *--* *"Breakpoints carry two orthognal sets of information: one specifies where to set the breakpoint, and the other how to react when the breakpoint is hit. The latter set of information (e.g. commands, conditions, hit-count, auto-continue…) we call breakpoint options." – [LLDB :: Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)*

> **Note** *--* *We'll refer to options that are neither [breakpoint] conditions nor [breakpoint] commands as: *"[breakpoint] attributes"*, e.g.: hit-count, auto-continue, etc…*

-	***Set breakpoint options** (e.g. conditions, comamnds, attributes):*

	> ***Conditions:***
	>
	> *Set [New] Breakpoint w/ Conditions:*
	>
	> > ***Synopsis:***
	> >
	> > ```shell
	> > breakpoint set <breakpt-definition> [--condition <condition-expr>]
	> > ```
	> >
	> > ***Example(s):***
	> > ```shell
	> > (lldb) breakpoint set -r 'core' --condition 'argc < 2'
	> > (lldb) br s -n bar -c 'res < 0'
	> > (lldb) br s -n baz -c '(int)strcmp(y, "hello") == 0'
	> > ```
	>
	> *Add Conditions to [Existing] Breakpoints::*
	>
	> > ***Synopsis:***
	> >
	> > ```shell
	> > breakpoint modify [--condition <condition-expr>] [<breakpt-ids | breakpt-name>]
	> > ```
	> >
	> > ***Example(s):***
	> > ```shell
	> > (lldb) breakpoint modify --condition 'my_var == 42' 3
	> > (lldb) br m -c 'my_var < 42' 4 2 8
	> > ```

	> ***Commands:***
	> ```shell
	> ... [--command <lldb-command>]
	> ... [-C <lldb-command>]
	>```
	>
	> ***Attributes:***
	> ```shell
	> ... [--attribute [<boolean>]]
	> ... [-<attribute-flag> [<boolean>]]
	>```
	>
	> ```shell
	> -G <boolean> ( --auto-continue <boolean> )
	>	The breakpoint will auto-continue after running its commands.
	>
	> -o <boolean> ( --one-shot <boolean> )
	>	The breakpoint is deleted the first time it stop causes a stop.
	>
	> -h <boolean> ( --on-catch <boolean> )
	>	Set the breakpoint on exception catcH.
	>
	> -w <boolean> ( --on-throw <boolean> )
	>	Set the breakpoint on exception throW.
	> ```

-	***Enable / Disable breakpoints:***

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint set <breakpt-definition> [--disable]
	> ```
	> ```shell
	> (lldb) breakpoint modify [--disable] [--enable] <breakpt-ids | breakpt-names>
	> ```
	> ```shell
	> (lldb) breakpoint disable <breakpt-ids | breakpt-names>
	> (lldb) breakpoint enable  <breakpt-ids | breakpt-names>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --name foo --disable          # set a breakpt, that is, initially, disabled
	> (lldb) breakpoint modify --disable 'controlFlow'    # disables all breakpts with the name: 'controlFlow'
	> (lldb) breakpoint modify --enable 4 3 2             # enables breakpts with id: 4, 3 and 2
	> (lldb) breakpoint disable 'safetyCheck'             # disables all breakpts with the name: 'safetyCheck'
	> (lldb) breakpoint enable 5                          # enables breakpts with id: 5
	>
	> (lldb) br s -n foo -d
	> (lldb) br m -d 'controlFlow'
	> (lldb) br m -e 4 3 2
	> (lldb) br di 'safetyChecks'
	> (lldb) br en 5
	> ```

-	***Set breakpoint, on thread:***

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint set ... [ -T or --thread-name  <thread-name>  ]
	> (lldb)   "   "            [ -t or --thread-id    <thread-id>    ]
	> (lldb)   "   "            [ -x or --thread-index <thread-index> ]
	> ```
	>  > The breakpoint stops only for the thread whose *`<name | id | index>`* matches.
	>
	> ***Example(s):***
	> ```shell
	> (lldb) br s -r 'Parser.+_Response' -t
	> (lldb) br s -n foo -c '(int)strcmp(y,"hello") == 0'
	> ```
	> ```shell
	> (lldb) breakpoint modify --condition 'my_var == 42' 3
	> (lldb) br m -c 'my_var < 42' 4 2 8
	> ```
	>
	> ```shell

	> -q <queue-name> ( --queue-name <queue-name> )
	>	The breakpoint stops only for threads in the queue whose name is given by this argument.
	> ```

	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --name foo --condition '(int)strcmp(y,"hello") == 0'
	> (lldb) br s -n foo -c '(int)strcmp(y,"hello") == 0'
	> ```
	> ```shell
	> (lldb) breakpoint modify --condition 'my_var == 42' 3
	> (lldb) br m -c 'my_var < 42' 4 2 8
	> ```
	>
	> > *To clarify – the first command sets a condition to (only) the breakpoint that has the breakpoint-ID: `3`. The second command adds a condition, to all breakpoints found in the list of breakpoint-IDs [the breakpoints of ID: `4`, `2` and `8`].*
	>
	> ```shell
	> (lldb) breakpoint set -n baz -N controlFlow
	> (lldb) br m -c 'my_var > 42' -N controlFlow
	> ```
	>
	> > *To clarify – the first command sets a breakpoint, on the function of name `baz`, then adds to the list of names, of that breakpoint, the name: `"controlFlow"`. Following that, the second command, adds a condition to all the breakpoints that have the name: `"controlFlow"` [added to their list of names].*
	>
	> This suffers from the problem that when new breakpoints get added, they don’t pick up these modifications, and the options only exist in the context of actual breakpoints, so they are hard to store & reuse.

-	***Set a breakpoint options** (e.g. conditions, comamnds, ...):*

	> ***Synopsis:***
	> ```shell
	> breakpoint set ... [-c <condition-expr>] [-C <lldb-command>] [-N <breakpt-name>]
	> breakpoint modify [-c <condition-expr>] [-C <lldb-command>] [<breakpt-ids | breakpt-name>]
	>```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --name foo --condition '(int)strcmp(y,"hello") == 0'
	> (lldb) br s -n foo -c '(int)strcmp(y,"hello") == 0'
	> ```
	> ```shell
	> (lldb) breakpoint modify --condition 'my_var == 42' 3
	> (lldb) br m -c 'my_var < 42' 4 2 8
	> ```
	>
	> > *To clarify – the first command sets a condition to (only) the breakpoint that has the breakpoint-ID: `3`. The second command adds a condition, to all breakpoints found in the list of breakpoint-IDs [the breakpoints of ID: `4`, `2` and `8`].*
	>
	> ```shell
	> (lldb) breakpoint set -n baz -N controlFlow
	> (lldb) br m -c 'my_var > 42' -N controlFlow
	> ```
	>
	> > *To clarify – the first command sets a breakpoint, on the function of name `baz`, then adds to the list of names, of that breakpoint, the name: `"controlFlow"`. Following that, the second command, adds a condition to all the breakpoints that have the name: `"controlFlow"` [added to their list of names].*
	>
	> This suffers from the problem that when new breakpoints get added, they don’t pick up these modifications, and the options only exist in the context of actual breakpoints, so they are hard to store & reuse.

	***Create a configured breakpoint name***:
	>
	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint name configure <breakpt-options> <breakpt-name>
	> (lldb) breakpoint name configure <breakpt-condition> <breakpt-command> <breakpt-other-options> <breakpt-name>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint name configure -c "my_var > 42" -C bt --auto-continue 'controlFlow'
	> ```
	>
	> Then you can apply the name to your breakpoints, and they will all pick up these options. The connection from name to breakpoints remains live, so when you change the options configured on the name, all the breakpoints pick up those changes.

	***Add a breakpoint command***:
	>
	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint command add <breakpt-ids | breakpt-name>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#341-breakpoints) | [➡️](#35-start-or-attach-program)
### 3.4.2. Watchpoints
<small>`[Search Tags: >lldb.watchpoints >debugger.watchpoints >lldbwatchpoints >debuggerwatchpoints >watchpointcommands >watchpointcmds >wacmds >wapts >watchpts >wpts >wpoints >wapoints >setwapts >wapts]`</small>
<br>
<br>


-	`lldb`, also, gives you the option to set it up to stop and log activities of a certain variable *(e.g. accesses (`read`) and/or modifications (`write`)*) – `lldb` logs its *[the variable's]* *(before and after)* values – optionally you can add conditions, so as to only log when it *[the variable]* has met *(fulfilled/reached)* certain condition(s), e.g.: if it *[the variable]* has reached or has gone above or below a certain value or the value of another variable; you could also have conditions that are unrelated *[to the variable]*, e.g.: when it is 6am, or when some function was called, or some other variable reaches some value, etc, you get the point. <br>

	*"A tell *[to `lldb`]* to keep a special eye and log the activity of a particular variable *(more precisely and generally, an object)*"* is what is referred to as: a ***watchpoint*** ([§3.4.2](#341-watchpoints)) – you can kind of think of them *[watchpoints]* as ***surveillance cameras pointed towards a particular objects (variables, etc)*** , *adding a watchpoint* is ***putting an object on the watchlist*** - so to speak. <br>


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help watchpoint [<command>]`
> | 2 | Documentation | LLDB | [(Official) Tutorial :: Setting Watchpoints](https://lldb.llvm.org/use/tutorial.html?highlight=watchpoints#setting-watchpoints)
> | 3 | Documentation | LLDB | [GDB to LLDB Command Map](https://lldb.llvm.org/use/map.html?highlight=watchpoints#watchpoint-commands)


---

[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.2.1. Basic Commands
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: #### 3.4.2.1. Basic Commands

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.

> *Commands for operating on watchpoints:*

-	***Set a watchpoint:***

	> ***Synopsis:***
	>
	> > - ... on a variable:
	> ```shell
	> watchpoint set variable [--watch <watch-type>] [--size <byte-size>] <variable-name>
	> ```
	>
	> > - ... on an address *[by supplying an expression]*:
	> ```shell
	> watchpoint set expression [--watch <watch-type>] [--size <byte-size>] -- <expr>
	> watchpoint set expression <expr>
	> ```
	>
	> ***Option(s):***
	> ```shell
	> -s <byte-size> ( --size <byte-size> )
	> 		Number of bytes to use to watch a region.
	> 		Values: 1 | 2 | 4 | 8
	>
	> -w <watch-type> ( --watch <watch-type> )
	> 		Specify the type of watching to perform.
	> 		Values: read | write | read_write
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) watchpoint set variable --watch read_write my_var
	> (lldb) wa s v -w read_write my_var
	> ```
	>
	> ```shell
	> (lldb) watchpoint set expression --watch read_write --size 8 -- my_PtrToLongInt
	> (lldb) watchpoint set variable   --watch read_write --size 8 -- my_PtrToLongInt
	>
	> (lldb) wa s e -w read_write -s 8 -- my_PtrToLongInt
	> (lldb) wa s v -w read_write -s 8 -- my_PtrToLongInt
	> ```
	>
	> ```shell
	> (lldb) watchpoint set expression --watch read --size 4 -- 0x00007ffeefbff510
	> (lldb) wa s e -w read -s 4 -- 0x00007ffeefbff510
	> ```
	>
	>
	> *<small>[Note:*
	>
	> We say:
	>
	> - `breakpoint set variable` – sets watctpoints to watch for `<watch-type>` accesses for the `<size>`-byte **variable**, `<variable-name>`.
	>
	> - `breakpoint set expression` – sets watctpoints to watch for `<watch-type>` accesses for the `<size>`-byte **region, pointed to by the address** `<expr>`.
	>
	> *- end note]</small>*

-	***List watchpoints:***

	> ***Synopsis:***
	> ```shell
	> watchpoint list -[bv] [<watchpt-ids>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) watchpoint list -b 4 5 2       # --brief    (minimum description)
	> (lldb) wa l -f 8                      # --full     (full description, default)
	> (lldb) w l -v                         # --verbose  (extensive description)
	> ```

-	***Delete watchpoint(s):***

	> ***Synopsis:***
	>
	> ```shell
	> watchpoint delete [<watchpt-ids>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) watchpoint delete 1 2 3
	> (lldb) wa de 5
	> ```
	>
	> *<small>[Note: If no watchpoints are specified, delete them all. - end note]</small>*

	> *<small>[Note:*
	>
	> - *Trying to set watchpoints before launching a process (i.e running a program) will not work, you'll get this: "`error: invalid process` (or `thread`)". You have to load and launch/run the program first.*
	>
	> <br> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help watchpoint [<command>]`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.2.2. Advanced Commands
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: #### 3.4.2.2. Advanced Commands

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.

> *Advanced commands for operating on watchpoints:*


> **Note** *--* *We'll refer to options that are neither [watchpoint] conditions nor [watchpoint] commands as: *"[watchpoint] attributes"*, e.g.: , etc…*

-	***Set watchpoint options:***

	-	***Conditions:***

		> ***Synopsis:***
		> ```
		> watchpoint modify [-c <expr>] [<watchpt-ids>]
		> watchpoint command [-c <expr>] [<watchpt-ids>]
		> ```
		>
		> ***Example(s):***
		> ```
		> (lldb) watch set var global
		> (lldb) watchpoint modify -c '(global == 5)'
		> ```

    -	***Commands:***

		> ***Synopsis:***
		> ```
		> watchpoint modify [-C <lldb-command>] [<watchpt-ids>]
		> watchpoint command add [<watchpt-ids>]
		> ```
		>
		> ***Example(s):***
		> ```
		> (lldb) watch set var global
		> (lldb) watchpoint modify -c '(global == 5)'
		> ```

    -	***Attributes:***

		> ***Synopsis:***
		> ```
		> watchpoint modify [-C <lldb-command>] [<watchpt-ids>]
		> watchpoint command add [<watchpt-ids>]
		> ```
		>
		> ***Example(s):***
		> ```
		> (lldb) watch set var global
		> (lldb) watchpoint modify -c '(global == 5)'
		> ```

-	***Set watchpoint scripts:***

	> ***Synopsis:***
	> ```
	> watchpoint modify [-C <lldb-command>] [<watchpt-ids>]
	> watchpoint command add [<watchpt-ids>]
	> ```
	>
	> ***Example(s):***
	> ```
	> (lldb) watch set var global
	> (lldb) watchpoint modify -c '(global == 5)'
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help watchpoint [<command>]`


---
[🏠](#contents) | [⬅️](#342-watchpoints) | [➡️](#36-graphical-user-interface-gui)
## 3.5. Begin Debugging
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.5. Begin Debugging

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.



<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help process [<command>]`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
### 3.5.1. Launch Program
<small>`[Search Tags: >lldb.runprocess >lldb.launchprocess >lldb.startprocess >lldb.runprogram >lldb.launchprogram >lldb.startprogram >startprogram >launchprogram >runprogram >startprocess >launchprocess >runprocess  >startexecutable >launchexecutable >runexecutable >programstart >programrun >programlaunch >debugger.runprocess >debugger.launchprocess >debugger.startprocess >debugger.runprogram >debugger.launchprogram >debugger.startprogram >processes >processlaunch >runprocess >lldb.processlaunch]`</small>
<br>
<br>


> TODO: ### 3.5.1. Launch Program

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.

> *Commands for running/starting/launching [loaded] programs:*

<br>


-	***To launch/run a program:***

	> ***Synopsis:***
	>
	> ```shell
	> process launch [<run-args>]
	> run [<run-args>]
	> r [<run-args>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) process launch                              # without arguments
	> (lldb) pr la "arg1" "arg2" "youGetThePoint"        # with arguments
	> (lldb) run "arg1" "arg2" "youGetThePoint"          # with arguments
	> (lldb) r                                           # without arguments
	> ```
	>
	> *<small>[***Note:****
	>
	> - *`<run-args>`* represent the arguments you normally pass to your program.
	>
	> - *`run`* is an abbreviation for *'`process launch -X true --`'* , see *`h run`*.
	>
	> - *`r`* is an abbreviation for *`'run'`* , see *`h r`*.
	>
	> *- end note]</small>*



<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help process launch`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
### 3.5.2. Attach to Program
<small>`[Search Tags: >lldb.attachprocess >lldb.attachprogram >attachprogram >attachprocess >attachexecutable]`</small>
<br>
<br>


> TODO: ### 3.5.2. Attach to Program

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.

> *Commands for attaching to processes (i.e running programs):*

<br>


- ***(Definition) – Attach:** Take over control [of the execution] of a process (running program) [, in this case, for debugging], at the instruction that the process has reached.*

-	***To attach to a process:***

	> ***Synopsis:***
	>
	> ```shell
	> process attach [--pid <pid>]
	> process attach [--wait-for] [--name <process-name>]
	> ```
	>
	> *****Example(s):*****
	> ```shell
	> (lldb) process attach --pid 123
	> (lldb) pr a -p 123
	>
	> (lldb) process attach --name a.out
	> (lldb) pr a -n a.out
	>
	> (lldb) process attach --waitfor --name a.out
	> (lldb) pr a -w -n a.out
	> ```
	>
	> *<small>[Note:*
	>
	> - *To clarify – you can attach to a process by process-ID (`pid`) or process name (e.g. `a.out`).* <br>
	>
	>	*When attaching to a process by name, `lldb` also supports the '`--waitfor`' option – which waits for the next process that has that name to show up, and attaches to it.*
	>
	> *- end note]</small>*



<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help process attach`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
### 3.5.3. Advanced Program Configurations
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.5.3. Advanced Program Configurations

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.

> *Advanced commands for process launch:* <br>

<br>


-	***To redirect [program] [standard in/out/err streams](https://en.wikipedia.org/wiki/Standard_streams):***

	> ***Synopsis:***
	>
	> ```shell
	> process launch [--stdin <filename>] [--stdout <filename>] [--stderr <filename>] [<run-args>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) process launch --stdin   file-1.txt      # text file, w/ name: 'file-1.txt'
	> (lldb) process launch --stdout  file-2.txt
	> (lldb) process launch --stderr  file-3.txt
	> ```
	> ```shell
	> (lldb) pr la -i  /dev/ttys001                   # terminal shell [device] file, w/ name: '/dev/ttys001'
	> (lldb) pr la -o  /dev/ttys002
	> (lldb) pr la -e  /dev/ttys003
	> ```
	> ```shell
	> (lldb) process launch -i /dev/ttys001 -o outFile.log -e errFile.log -- "arg1" "arg2" "youGetThePoint"
	> (lldb) pr la -i /dev/ttys001 -o outFile.log -e errFile.log -- "arg1" "arg2" "youGetThePoint"
	> ```
	>
	> > *To clarify [, this [last] example] –* <br>
	> > - we redirect *[the]* standard input *[stream]* (`stdin`) *[of the program]* to *(i.e to be or come or be-given from or originate from)* a *[terminal [device]]* file, by the name of: `/dev/ttys001` – this is a running *[terminal]* shell *[instance]*, <br>
	> > - we redirect the standard output (`stdout`) to *[be written/printed to]* a `.log` file, by the name of: "`outFile`", <br>
	> > - we do the same *[, as `stdout`,]* with the standard error (`stderr`), this time, the file goes by the name: "`errFile`", <br>
	> > - we delimit the *`lldb`* command options that we have given, from *[, that which we will give as,]* program arguments, with: "` -- `" *[,  `lldb`*'s parser delimiter], <br>
	> > - we pass *[to our program]* three arguments,
	> > <br>
	> > respectively.



<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help process launch`
> | 2 | Documentation | LLDB | [(Official) Tutorial :: Starting or Attaching to Your Program](https://lldb.llvm.org/use/tutorial.html#starting-or-attaching-to-your-program)
> | 3 | Encyclopedia | Wikipedia | [Device files](https://en.wikipedia.org/wiki/Device_file)
> | 4 | Q&A Forum | StackOverflow | [How to get the current terminal name ?](https://unix.stackexchange.com/questions/77796/how-to-get-the-current-terminal-name)
> | 5 | Article | `opensource.com` | [Managing devices in Linux](https://opensource.com/article/16/11/managing-devices-linux)
> | 6 | Q&A Forum | StackOverflow | [What is the difference between shell, console and terminal ?](https://superuser.com/questions/144666/what-is-the-difference-between-shell-console-and-terminal)


---
[🏠](#contents) | [⬅️](#35-start-or-attach-program) | [➡️](#37-examine-execution)
## 3.6. Graphical User Interface (GUI)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 3.6. Graphical User Interface (GUI)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#36-graphical-user-interface-gui) | [➡️](#371-source-code)
## 3.7. Examine Execution
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 3.7. Examine Execution

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#37-examine-execution) | [➡️](#372-variables)
### 3.7.1. Source Code
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.7.1. Source Code

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#371-source-code) | [➡️](#373-thread-states)
### 3.7.2. Variable(s)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.7.2. Variable(s)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#372-variables) | [➡️](#374-stack-frame-states)
### 3.7.3. Thread State(s)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.7.3. Thread State(s)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#373-thread-states) | [➡️](#39-graphical-user-interface-gui)
### 3.7.4. Stack Frame State(s)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.7.4. Stack Frame State(s)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---

<!-- # 3. Tips & Shortcuts -->


<!--
.
.
.
<!-- >Footnotes --------------------------------------------------------------->
---





<!-- >End --------------------------------------------------------------------->
<!-- >References -------------------------------------------------------------->





<!-- >Notes --------------------------------------------------------------------

	- issue with lldb is it takes time to get back to the orginal point

	ex:

		- how to skip loops, cuz it takes too long

		- and be able to see stderr, stdout

		- segfaults when a variable reaches a value of 3
		but it takes time to get there, so how can you
		run the code till it reaches 2 then go line by
		line from there.

	VSCODE Breakpoint Types:

		Expression :: Break when expression evaluates to true.
		Hit-Count  :: Log boolean when expression evaluates to true.
		Logpoint   :: Log <Inputed-Message> when breakpoint is hit.

------------------------------------------------------------------------------->
