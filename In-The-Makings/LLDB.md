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
	- [3.8. Controlling Process Execution](#38-examine-execution)
		- [3.8.1. Move to Line](#)
		- [3.8.2. Step In, Out of Functions](#)
		- [3.8.3. Run, Stop, Continue Execution](#)
	- [3.8. Examine Execution](#38-examine-execution)
		- [3.8.1. Source Code](#381-source-code)
		- [3.8.2. Variable(s)](#382-variables)
		- [3.8.3. Thread State(s)](#383-thread-states)
		- [3.8.4. Stack Frame State(s)](#384-stack-frame-states)
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


[🏠](#HOME) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
## 1.1. Beginner Usage Overview
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 1.1. Beginner Usage Overview

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#HOME) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
## 1.2. Intermediate Usage Overview
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 1.2. Intermediate Usage Overview

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#HOME) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
## 1.3. Cheat Sheet
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 1.3. Cheat Sheet

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---

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
	>	- *7.* **Examine the Execution** ([§3.7](#38-examine-execution)) *[of your program]*. <br> <br>
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

TODO : ADD leak and thread sanitizer.

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

	> <small>`[Search Tags: >trcreate >createtr >crtr >targetcreate >createtarget >trload >loadtr >ldtr >targetload >loadtarget]`</small>

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

	> <small>`[Search Tags: >trlist >listtr >litr >targetlist >listtarget]`</small>

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

-	***To select a [different] target [as current target]:***

	> <small>`[Search Tags: >trselect >targetselect >setr >selecttr >selecttarget]`</small>

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

-	***To delete a target (i.e unload an program execuable):***

	> <small>`[Search Tags: >trdelete >targetdelete >detr >deletetr >deletetarge >trunload >unloadtr >uldtr >targetunload >unloadtargett]`</small>

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


-	`lldb` *[then]* gives you the possibility of setting up [*breakpoints*](https://en.wikipedia.org/wiki/Breakpoint) ([§3.4.1](#341-breakpoints)) and [*watchpoints*](https://en.wiktionary.org/wiki/watchpoint#English) ([§3.4.2](#342-watchpoints)).

> *<small>[Note: Watchpoints can only be set after the launch of the program. - end note]</small>*


<!-- BREAKPOINT ANALOGY:

-	An analogy *(a situation/narrative same, or resembling, in essence)* *[for the above concepts]* would be that of city *metros or buses*. The *bus* *(**`lldb`**)* stops at designated *bus stops* *(**breakpoints**)*. The *bus stops* are known by *address or reference number* *(**a particular line, in a *[source code]* file**)*, they may also be known by *(a significant) structure/building, junction or area* *(**a particular function [in your code]**)*. Sometimes the *bus* doesn't stop at a particular *bus stop*, because conditions have been tied to it; the *bus* only stops at the *bus stop* at certain hours and/or certain days of the week; i.e the bus stopping at that station is conditional, i.e relies on certain ***condition(s)*** being met, e.g: *"in the morning hours (6am-11am), if it is a weekday"* *(`if (morning == true && (week_day >= 0 && week_day <= 5))`)*.
-->


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint`
> | 2 | Manual Page | LLDB | `(lldb) help watchpoint`
> | 3 | Documentation | LLDB | [(Official) Tutorial :: Setting Breakpoints](https://lldb.llvm.org/use/tutorial.html#setting-breakpoints)
> | 5 | Documentation | LLDB | [(Official) Tutorial :: Setting Watchpoints](https://lldb.llvm.org/use/tutorial.html#setting-watchpoints)


---
[🏠](#contents) | [⬅️](#34-setup-lldb) | [➡️](#3411-basic-commands)
### 3.4.1. Breakpoints
<small>`[Search Tags: >lldb.breakpoints >debugger.breakpoints >lldbbreakpoints >debuggerbreakpoints >breakpointcommands >breakpointcmds >brcmds >bmain >blist >bfile >bfunc >setbrpts >brmain >brsmain >brkpts >breakpts >bpts >brpoints >bapts >bapoints]`</small>
<br>
<br>


>	*"In software development, a breakpoint is an intentional stopping or pausing place in a program, put in place for debugging purposes. It is also sometimes simply referred to as a 'pause'.*
>
>	*More generally, a breakpoint is a means of acquiring knowledge about a program during its execution. During the interruption, the programmer inspects the test environment (general purpose registers, memory, logs, files, etc.) to find out whether the program is functioning as expected. In practice, a breakpoint consists of one or more conditions that determine when a program's execution should be interrupted. [...]"*
>
>	*––	[Wikipedia :: Breakpoints](https://en.wikipedia.org/wiki/Breakpoint)*

---

The following subsections dive into the commands for operating-on/using breakpoints.

We discuss ***basic commands*** ([§3.4.1.1](#3411-basic-commands)), like for ***setting breakpoints*** on functions and source code lines, as well as ***listing*** and ***deleting*** them *[the set breakpoints]* – also, commands ***only concerning C++*** ([§3.4.1.2](#3412-basic-c-commands)).

Furhter below, we discover together more ***advanced commands*** ([§3.4.1.3](#3413-advanced-commands)) like ***using *regex* to set breakpoints*** on function(s) and source code line(s) *[that match]*, we see how to set/add ***breakpoint options*** (e.g. conditions, commands/scripts, auto-continue, hit-count...), we see how to ***enable/disable breakpoints*** and also discuss, among other things, the breakpoint facilities offered *[by `lldb`]* when it comes to ***debugging multi-threaded*** processes.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Encyclopedia | Wikipedia | [Breakpoints](https://en.wikipedia.org/wiki/Breakpoint)
> | 2 | Documentation | LLDB | [(Official) Tutorial :: Setting Breakpoints](https://lldb.llvm.org/use/tutorial.html#setting-breakpoints)
> | 3 | Documentation | LLDB | [(Official) Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)
> | 4 | Manual Page | LLDB | `(lldb) help breakpoint`


[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.1. Basic Commands
<small>`[Search Tags: >breakpointbasiccommands >breakpointbasiccmds >breakptbasiccommands >breakptbasiccmds >brkptbasiccommands >brkptbasiccmds >brbasiccommands >brbasiccmds >bbasiccommands >bbasiccmds >breakpointbasics >breakptbasics >brkptbasics >brbasics >bbasics >brptcommands >brptcmds >brptbasiccommands >brptbasiccmds >brptbasics >breakpointcreate >createbreakpoint >crbreakpoint >breakptcreate >createbreakpt >crbreakpt >brkptcreate >createbrkpt >crbrkpt >brptcreate >createbrpt >crbrpt >brcreate >createbr >crbr]`</small>
<br>
<br>


-	***Set a breakpoint, on a function:***

	> <small>`[Search Tags: >brset >setbr >sbr >sebr >breakpointset  >breakpointfunctions >breakpointfuncs >breakpointfts >breakpointfcs  >breakpointmain >setbreakpoint >brkptset >setbrkpt >breakptset >setbreakpt >brsetfunctions >brfunctions >brfuncs >brfts >brfcs >brsfunctions >brsfuncs >brsfts >brsfcs >brsmain]`</small>

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
	>
	> *<small>[Note: Only the function **itself** has a breakpoint set on it – call-sites [of the said function] are ignored. - end note]</small>*

-	***Set a breakpoint, on a [source code] line:***

	> <small>`[Search Tags: >brsrcs >brssrcs >brsetsrcs >breakpointsetsrcs  >brsources >brssources >brsetsources >breakpointsetsources >brsetfiles >brfiles >brsrcs >brpages >brpgs >brsfiles >brssrcs >brspages >brspgs] >brsetlines >brlines >brlis >brpages >brslines >brslis >brspages >brsls >breakpointlines >breakpointlis >breakpointls >breakpointfcs  >breakpointmainlines`</small>

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

	> <small>`[Search Tags: >brlist >listbr >brlst >libr >breaklist >listbreak >breakptslist >breakptptlists >listbreakpts, >breakpointlist]`</small>

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

	> <small>`[Search Tags: >brdelete >deletebr >deletebrpt >deletebrkpt >deletebreakpt >deletebreakpoint >brdelete >brptdelete >brkptdelete >breakptdelete >breakpointdelete >debr >deletebr >deletetarge >brunload >unloadtr >uldtr >targetunload >unloadtargett >delbr >brdel >delbrpt >brptdel >delbrkpt >brkptdel >delbreakpt >breakptdel >delbreakpoint >breakpointdel]`</small>

	> ***Synopsis:***
	> ```shell
	> breakpoint delete [<breakpt-ids | breakpt-name>]
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
	> - *If no breakpoint *[id]* is specified, [the command will] delete them *[the current breakpoints]* all.*
	>
	> - *`lldb`, automatically, deletes breakpoints of targets that are deleted.*
	>
	> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint set`
> | 2 | Manual Page | LLDB | `(lldb) help breakpoint list`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint delete`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.2. Basic (C++) Commands
<small>`[Search Tags: >cppbreakpointcommands >cppbreakpointcmds >cppbreakptcommands >cppbreakptcmds >cppbrkptcommands >cppbrkptcmds >cppbrcommands >cppbrcmds >cppbcommands >cppbcmds >cppbreakpointbasiccommands >cppbreakpointbasiccmds >cppbreakptbasiccommands >cppbreakptbasiccmds >cppbrkptbasiccommands >cppbrkptbasiccmds >cppbrbasiccommands >cppbrbasiccmds >cppbbasiccommands >cppbbasiccmds >cppbreakpointbasics >cppbreakptbasics >cppbrkptbasics >cppbrbasics >cppbbasics >cppbrptcommands >cppbrptcmds >cppbrptbasiccommands >cppbrptbasiccmds >cppbrptbasics >breakpointcreate >createbreakpoint >crbreakpoint >breakptcreate >createbreakpt >crbreakpt >brkptcreate >createbrkpt >crbrkpt >brptcreate >createbrpt >crbrpt >brcreate >createbr >crbr]`</small>
<br>
<br>


-	***Set a breakpoint**, on function(s), **by fullname:***

	> <small>`[Search Tags: >breakpointfullname >breakptfullname >brkptfullname >brptfullname >brfullname >fullnamebreakpoint >fullnamebreakpt >fullnamebrkpt >fullnamebrpt >fullnamebr >breakpointfullnamefunc >breakpointfullnamefunction >breakpointfuncfullname >breakpointfunctionfullname >breakptfullnamefunc >breakptfullnamefunction >breakptfuncfullname >breakptfunctionfullname >brkptfullnamefunc >brkptfullnamefunction >brkptfuncfullname >brkptfunctionfullname >brptfullnamefunc >brptfullnamefunction >brptfuncfullname >brptfunctionfullname >brfullnamefunc >brfullnamefunction >brfuncfullname >brfunctionfullname]`</small>

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint set --fullname <full-function-name>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --fullname 'Temperature::getter'
	> (lldb) br s -F 'Temperature::getter'
	> ```

<br>

-	***Set a breakpoint**, on function(s), **by basename:***

	> <small>`[Search Tags: >breakpointbasename >breakptbasename >brkptbasename >brptbasename >brbasename >basenamebreakpoint >basenamebreakpt >basenamebrkpt >basenamebrpt >basenamebr]`</small>

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint set --basename <base-function-name>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --basename 'getter'
	> (lldb) br s -b 'getter'
	> ```
	>
	> *<small>[Note: Both, **namespace functions** and **class methods** with the given basename will have a breakpoint set on them. - end note]</small>*

<br>

-	***Set a breakpoint, on [class] method(s):***

	> <small>`[Search Tags: >breakpointmethods >breakptmethods >brkptmethods >brptmethods >brmethods >methodsbreakpoint >methodsbreakpt >methodsbrkpt >methodsbrpt >methodsbr >breakpointclassmethods >breakptclassmethods >brkptclassmethods >brptclassmethods >brclassmethods >classmethodsbreakpoint >classmethodsbreakpt >classmethodsbrkpt >classmethodsbrpt >classmethodsbr]`</small>

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint set --method <method>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --method 'getter'
	> (lldb) br s -M 'getter'
	> ```

<br>

-	***Set a breakpoint, on (all) exceptions** [on `throw`] **:***

	> <small>`[Search Tags: >breakpointexceptions >breakptexceptions >brkptexceptions >brptexceptions >brexceptions >exceptionsbreakpoint >exceptionsbreakpt >exceptionsbrkpt >exceptionsbrpt >exceptionsbr]`</small>

	> ***Synopsis:***
	> ```shell
	> breakpoint set --language-exception <source-code-language>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> breakpoint set --language-exception c++
	> br s -E c++
	> ```
	>
	> *<small>[Note: To set a breakpoint on specific exception objects, there exists the `--exception-typename <type-name>` option, but it is unfortunately only supported for **Swift**, at the moment (22/01/2020). - end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint set`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.3. Advanced Commands
<small>`[Search Tags: >advlldb.breakpoints >advdebugger.breakpoints >advlldbbreakpoints >advdebuggerbreakpoints >advbreakpointcommands >advbreakpointcmds >advbrcmds >advbmain >advblist >advbfile >advbfunc >advsetbrpts >advbrmain >advbrsmain >advbrkpts >advbreakpts >advbpts >advbrpoints >advbapts >advbapoints >breakpointcreate >createbreakpoint >crbreakpoint >breakptcreate >createbreakpt >crbreakpt >brkptcreate >createbrkpt >crbrkpt >brptcreate >createbrpt >crbrpt >brcreate >createbr >crbr]`</small>
<br>
<br>


-	***Set a breakpoint,** on function(s), **using regular-expressions:***

	> <small>`[Search Tags: >brfunctionregex >brfuncregex >brsfunctionregex >brsfuncregex >brsetfunctionregex >brsetfuncregex >brregexfunction >brregexfunc >brsregexfunction >brsregexfunc >brsetregexfunction >brsetregexfunc >funcregex >regexfunc >functionregex >regexfunction  >ftregex >regexfts >funcrgx >rgxfunc >functionrgx >rgxfunction  >ftrgx >rgxfts]`</small>

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
	> *<small>[Note: Function call-sites also count as matches, and get a breakpoint. - end note]</small>*

-	***Set a breakpoint,** on line(s), in file(s), **using regular-expressions:***

	> <small>`[Search Tags: >brsourceregex >brsrcregex >brssourceregex >brssrcregex >brsetsourceregex >brsetsrcregex >brregexsource >brregexsrc >brsregexsource >brsregexsrc >brsetregexsource >brsetregexsrc >srcregex >regexsrc >srctionregex >regexsrction  >sourceregex >regexsources >srcrgx >rgxsrc >srctionrgx >rgxsrction  >sourcergx >rgxsources >sourcepatternregex >srcpatternregex >sourcepatregex >srcpatregex]`</small>

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

-	***Enable / Disable breakpoints:***

	> <small>`[Search Tags: >breakpointenable >breakptenable >brkptenable >brptenable >brenable >breakpointdisable >breakptdisable >brkptdisable >brptdisable >brdisable >enablebreakpoint >enablebreakpt >enablebrkpt >enablebrpt >enablebr >disablebreakpoint >disablebreakpt >disablebrkpt >disablebrpt >disablebr]`</small>

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint disable <breakpt-ids | breakpt-names>
	> (lldb) breakpoint enable  <breakpt-ids | breakpt-names>
	> ```
	> ```
	> (lldb) breakpoint modify [--disable] [--enable] <breakpt-ids | breakpt-names>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint disable 1
	> (lldb) br di 1
	> ```
	> ```shell
	> (lldb) breakpoint disable 3.*      # disable all breakpoints of ID 3.
	> (lldb) br di 3.*
	> ```
	> ```shell
	> (lldb) breakpoint enable 2 6 3.2   # enable breakpoints: 2, 6 and 3.2
	> (lldb) br en 2 6 3.2
	> ```
	>
	> *<small>[Note:*
	>
	> - To enable only certain locations of a logical breakpoint, use the breakpoint disable command, passing the breakpoint ID followed by a dot-separated wildcard character (`*`), e.g.: `1.*` or `3.*`.
	>
	> - It is also possible to set, initialy disabled, breakpoints:
	>
	> 	```shell
	> 	(lldb) breakpoint set <breakpt-definition> [--disable]
	> 	```
	>
	> *- end note]</small>*


---

>	*(**Know that**) –– "Breakpoints carry two orthognal sets of information: one specifies where to set the breakpoint, and the other how to react when the breakpoint is hit. The latter set of information (e.g. commands, conditions hit-count, auto-continue…) we call breakpoint options."*
>
>	*––	[LLDB :: Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)*

>	*(**Note**) –– We'll refer to options that are neither [breakpoint] conditions nor [breakpoint] commands as: *"[breakpoint] attributes"*, e.g.: hit-count, auto-continue, etc…* <br>

<br>

<small>`[Search Tags: >breakpointoptions >optionsbreakpoint >breakptoptions >optionsbreakpt >brkptoptions >optionsbrkpt >brptoptions >optionsbrpt >broptions >optionsbr]`</small>

- ***Breakpoint Conditions:***

	> <small>`[Search Tags: >breakpointsetcondition >breakptsetcondition >brkptsetcondition >brptsetcondition >brsetcondition >breakpointaddcondition >breakptaddcondition >brkptaddcondition >brptaddcondition >braddcondition >conditionbreakpoint >conditionbreakpt >conditionbrkpt >conditionbrpt >conditionbr >breakpointconditions >breakptconditions >brkptconditions >brptconditions >brconditions]`</small>

	- ***Set breakpoint, with condition:***

		> ***Synopsis:***
		> ```shell
		> breakpoint set <breakpt-definition> [--condition <expr>]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint set --line 14 --condition 'argc < 2'
		> (lldb) br s -l 14 -c 'argc < 2'
		> ```
		> ```shell
		> (lldb) breakpoint set --name baz --condition '(int)strcmp(y, "hello") == 0'
		> (lldb) br s -n baz -c '(int)strcmp(y, "hello") == 0'
		> ```

	- ***Add breakpoint condition [to an existing breakpoint]:***
		>
		> ***Synopsis:***
		> ```shell
		> breakpoint modify [--condition <expr>] [<breakpt-ids | breakpt-name>]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint modify --condition 'my_var == 42' 3     # add condition to breakpt with ID: 3
		> (lldb) br m -c 'my_var < 42' 4 2 8
		> ```

- ***Breakpoint Commands:***

	> <small>`[Search Tags: >breakpointsetcommands >breakptsetcommands >brkptsetcommands >brptsetcommands >brsetcommands >breakpointaddcommands >breakptaddcommands >brkptaddcommands >brptaddcommands >braddcommands >commandbreakpoint >commandbreakpt >commandbrkpt >commandbrpt >commandbr >breakpointcommands >breakptcommands >brkptcommands >brptcommands >brcommands >breakpointconfigcommands >breakpointconfigurecommands >breakptconfigcommands >breakptconfigurecommands >brkptconfigcommands >brkptconfigurecommands >brptconfigcommands >brptconfigurecommands >brconfigcommands >brconfigurecommands]`</small>

	- ***Add [breakpoint] command(s) [to an existing breakpoint]:***

		> <small>`[Search Tags: >breakpointaddcommand >breakpointaddcmd >breakpointacmd >breakptaddcommand >breakptaddcmd >breakptacmd >brkptaddcommand >brkptaddcmd >brkptacmd >brptaddcommand >brptaddcmd >brptacmd >braddcommand >braddcmd >bracmd >breakpointaddscript >breakpointaddscrpt >breakpointascrpt >breakptaddscript >breakptaddscrpt >breakptascrpt >brkptaddscript >brkptaddscrpt >brkptascrpt >brptaddscript >brptaddscrpt >brptascrpt >braddscript >braddscrpt >brascrpt]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint command add [--script-type <type>] [<breakpt-ids | breakpt-name>]
		> ```
		> ```
		> > Enter your debugger command(s). Type 'DONE' to end.
		> > <lldb-commands> ...
		> > ...
		> > DONE
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint command add 1.1
		> Enter your debugger command(s). Type 'DONE' to end.
		> > thread backtrace
		> > frame variable
		> > DONE
		> ```
		> ```shell
		> (lldb) breakpoint command add -s python 4
		> Enter your Python command(s). Type 'DONE' to end.
		> > print "Hit this breakpoint!"
		> > DONE
		> ```
		> ```shell
		> (lldb) script
		> >>> bp_count = 0
		> >>> quit()
		> ...
		> (lldb) breakpoint command add -s python 3.2
		> Enter your Python command(s). Type 'DONE' to end.
		> > global bp_count
		> > bp_count = bp_count + 1
		> > print "Hit this breakpoint " + repr(bp_count) + " times!"
		> > DONE
		> ```
		>
		> *<small>[Note:*
		>
		> - In this case, since there is a reference to a global variable, `bp_count`, you will also need to make sure `bp_count` exists and is initialized:
		>
		> 	```python
		> 	(lldb) script
		> 	>>> bp_count = 0
		> 	>>> quit()
		>	```
		>
		> 	Your Python code, however organized, can optionally return a value. If the returned value is `False`, that tells LLDB not to stop at the breakpoint to which the code is associated. Returning anything other than `False`, or even returning None, or even omitting a return statement entirely, will cause `lldb` to stop.
		>
		> *- end note]</small>*

	- ***Delete [breakpoint] command(s):***

		> <small>`[Search Tags: >breakpointdeletecommand >breakpointdeletecmd >breakpointdecmd >breakptdeletecommand >breakptdeletecmd >breakptdecmd >brkptdeletecommand >brkptdeletecmd >brkptdecmd >brptdeletecommand >brptdeletecmd >brptdecmd >brdeletecommand >brdeletecmd >brdecmd]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint command delete <breakpt-id>
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint command delete 1.1
		> (lldb) br co de 1.1
		> ```

<!--
- ***Breakpoint Attributes:***

	> <small>`[Search Tags: >breakpointsetcommands >breakptsetcommands >brkptsetcommands >brptsetcommands >brsetcommands >breakpointaddcommands >breakptaddcommands >brkptaddcommands >brptaddcommands >braddcommands >commandbreakpoint >commandbreakpt >commandbrkpt >commandbrpt >commandbr >breakpointcommands >breakptcommands >brkptcommands >brptcommands >brcommands >breakpointconfigcommands >breakpointconfigurecommands >breakptconfigcommands >breakptconfigurecommands >brkptconfigcommands >brkptconfigurecommands >brptconfigcommands >brptconfigurecommands >brconfigcommands >brconfigurecommands]`</small>


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
 -->




<!--
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
 -->





<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint set`
> | 2 | Manual Page | LLDB | `(lldb) help breakpoint name`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint modify`
> | 4 | Manual Page | LLDB | `(lldb) help breakpoint command`
> | 5 | Manual Page | LLDB | `(lldb) help breakpoint command add`
> | 5 | Manual Page | LLDB | `(lldb) help breakpoint command delete`


---
[🏠](#contents) | [⬅️](#341-breakpoints) | [➡️](#35-start-or-attach-program)
### 3.4.2. Watchpoints
<small>`[Search Tags: >lldb.watchpoints >debugger.watchpoints >lldbwatchpoints >debuggerwatchpoints]`</small>
<br>
<br>


>	*(**Definition**) Watchpoint: is a (special) kind of breakpoint (debugging mechanism) whereby execution is suspended every time a specified variable or memory-location is accessed for reading and/or writing.*
>
>	*––  [Wikitionary :: Watchpoint](https://en.wiktionary.org/wiki/watchpoint)*

---

-	Down below, we explore basic commands for operating on watchpoints ([§3.4.2.1](#3421-basic-commands)) – setting, listing and deleting watchpoints.

-	Further below we go into more advanced commands ([§3.4.2.2](#3422-advanced-commands)) – setting watchpoint options.

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
<small>`[Search Tags: >watchpointbasiccommands >watchpointbasiccmds >watchptbasiccommands >watchptbasiccmds >wakptbasiccommands >wakptbasiccmds >wabasiccommands >wabasiccmds >bbasiccommands >bbasiccmds >watchpointbasics >watchptbasics >wakptbasics >wabasics >bbasics >waptcommands >waptcmds >waptbasiccommands >waptbasiccmds >waptbasics >watchpointcreate >createwatchpoint >crwatchpoint >watchptcreate >createwatchpt >crwatchpt >wakptcreate >createwakpt >crwakpt >waptcreate >createwapt >crwapt >wacreate >createwa >crwa]`</small>
<br>
<br>


-	***Set a watchpoint:***

	> <small>`[Search Tags: >waset >setwa >swa >sewa >watchpointset  >watchpointfunctions >watchpointfuncs >watchpointfts >watchpointfcs  >watchpointmain >setwatchpoint >wakptset >setwakpt >watchptset >setwatchpt >wasetvariables >wavariables >wavars >wavrs >wavas >wasvariables >wasvars >wasvrs >wasvas >wasvs]`</small>

	> ***Synopsis:***
	>
	> *on a variable:*
	> > ```shell
	> > watchpoint set variable [--watch <watch-type>] [--size <byte-size>] <variable-name>
	> > ```
	>
	> *on an address *[by supplying an expression]*:*
	> > ```shell
	> > watchpoint set expression [--watch <watch-type>] [--size <byte-size>] -- <expr>
	> > watchpoint set expression <expr>
	> > ```
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
	> (lldb) watchpoint set variable   --watch write --size 8 -- my_PtrToLongInt
	> (lldb) watchpoint set expression --watch write --size 8 -- my_PtrToLongInt
	>
	> (lldb) wa s v -w write -s 8 -- my_PtrToLongInt
	> (lldb) wa s e -w write -s 8 -- my_PtrToLongInt
	> ```
	>
	> ```shell
	> (lldb) watchpoint set expression --watch read --size 4 -- 0x00007ffeefbff510
	> (lldb) wa s e -w read -s 4 -- 0x00007ffeefbff510
	> ```
	>
	> *<small>[Note:*
	>
	> We say:
	>
	> - `breakpoint set variable` – sets watctpoints to watch for `<watch-type>` accesses on the `<size>`-byte **variable**, `<variable-name>`.
	>
	> - `breakpoint set expression` – sets watctpoints to watch for `<watch-type>` accesses on the `<size>`-byte **region, pointed to by the address** `<expr>`.
	>
	> *- end note]</small>*

-	***List watchpoints:***

	> <small>`[Search Tags: >walst >walist >listwa >liwa >watchlist >listwatch >watchptslist >watchptptlists >listwatchpts, >watchpointlist]`</small>

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

	> <small>`[Search Tags: >wadelete >dewatchpoint >brdelete >deletebr >deletebrpt >deletebrkpt >deletebreakpt >deletebreakpoint >brdelete >brptdelete >brkptdelete >breakptdelete >breakpointdelete >debr >deletebr >deletetarge >brunload >unloadtr >uldtr >targetunload >unloadtargett >delbr >brdel >delbrpt >brptdel >delbrkpt >brkptdel >delbreakpt >breakptdel >delbreakpoint >breakpointdel]`</small>

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


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help watchpoint set`
> | 2 | Manual Page | LLDB | `(lldb) help watchpoint list`
> | 3 | Manual Page | LLDB | `(lldb) help watchpoint delete`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.2.2. Advanced Commands
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: #### 3.4.2.2. Advanced Commands

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.

> *Advanced commands for operating on watchpoints:*

-	***Enable / Disable watchpoints:***

	> <small>`[Search Tags: >watchpointenable >watchptenable >brkptenable >brptenable >brenable >watchpointdisable >watchptdisable >brkptdisable >brptdisable >brdisable >enablewatchpoint >enablewatchpt >enablebrkpt >enablebrpt >enablebr >disablewatchpoint >disablewatchpt >disablebrkpt >disablebrpt >disablebr]`</small>

	> ***Synopsis:***
	> ```shell
	> (lldb) watchpoint disable <watchpt-ids | watchpt-names>
	> (lldb) watchpoint enable  <watchpt-ids | watchpt-names>
	> ```
	> ```
	> (lldb) watchpoint modify [--disable] [--enable] <watchpt-ids | watchpt-names>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) watchpoint disable 1
	> (lldb) br di 1
	> ```
	> ```shell
	> (lldb) watchpoint disable 3.*      # disable all watchpoints of ID 3.
	> (lldb) br di 3.*
	> ```
	> ```shell
	> (lldb) watchpoint enable 2 6 3.2   # enable watchpoints: 2, 6 and 3.2
	> (lldb) br en 2 6 3.2
	> ```
	>
	> *<small>[Note:*
	>
	> - To enable only certain locations of a logical watchpoint, use the watchpoint disable command, passing the watchpoint ID followed by a dot-separated wildcard character (*), e.g. `1.*` or `3.*`.
	>
	> - It is also possible to set, initialy disabled, watchpoints:
	>
	> 	```shell
	> 	(lldb) watchpoint set <watchpt-definition> [--disable]
	> 	```
	>
	> *- end note]</small>*


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


-	There are two main ways to start debugging a process (program):

	- Launching one ([§3.5.1](#351-launch-program))
	- Attaching to *[an already running]* one ([§3.5.2](#352-attach-to-program)) – (i.e joining a running one at whatever point in execution it has reached).

-	*`lldb`* also gives the possibility of configuring things like: where you want the process to be run *(terminal, shell)*, setting environment variables, setting the current working directory, redirecting `stdin`/`out`/`err`, etc – all of which is dicussed in **Advanced Program Configurations** ([§3.5.3](#353-advanced-program-configurations)).


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


> TODO: ### 3.5.1. Launch Program ; Commands for running/starting/launching [loaded] programs:


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


> TODO: ### 3.5.2. Attach to Program ; Commands for attaching to processes (i.e running programs):

> *(**Definition**) –– Attach: Take over control [of the execution] of a process (running program) [in this case, for debugging purposes], at the instruction that the process has reached.*
>
> *––	[Attaching to a Running Process Using Code :: Blocks](https://www.dummies.com/programming/cpp/attaching-to-a-running-process-using-codeblocks/)*
>
> *(**Commentary**) –– When you are debugging, essentially, the instructions of the process you are debugging are sent to a debugger *[program]* before they’re executed by the CPU. The debugger becomes a middle man between the program instructions and the CPU.*

<br>

-	***To attach to a process:***

	> ***Synopsis:***
	>
	> ```shell
	> process attach [--pid <pid>]                           # by pid
	> process attach [--wait-for] [--name <process-name>]    # by name
	> ```
	>
	> *****Example(s):*****
	> ```shell
	> (lldb) process attach --pid 123
	> (lldb) pr a -p 123
	> ```
	> ```shell
	> (lldb) process attach --name a.out
	> (lldb) pr a -n a.out
	> ```
	> ```shell
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
<small>`[Search Tags: > TODO ]`</small>
<br>
<br>


> TODO: ### 3.5.3. Advanced Program Configurations ; Advanced commands for process launch


-	***Run process (program) in different terminal or shell:***

	<small>`[Search Tags: > TODO ]`</small>

	> ***Synopsis:***
	> ```shell
	> process launch --tty -- [<run-args>]                  # terminal
	> process launch --shell=[<filename>] -- [<run-args>]   # shell
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) process launch --tty
	> (lldb) pr la -t
	> ```
	> ```shell
	> process launch --shell=/dev/ttys002
	> pr la -c=/dev/ttys003
	> ```
	>
	> *<small>[Note: Not supported on all platforms. - end note]</small>*

-	***Set environment variables:***

	<small>`[Search Tags: > TODO ]`</small>

	> ***Synopsis:***
	> ```shell
	> process launch --environment [<NAME=VALUE> ...] -- [<run-args>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> process launch --environment BIG_ENDIAN=true OPTIMIZATIONS=false
	> pr la -v YEAR=2020
	> ```
	>
	> *<small>[Note: Can be specified multiple times for subsequent environment entries. - end note]</small>*

-	***Set current working directory:***

	<small>`[Search Tags: > TODO ]`</small>

	> ***Synopsis:***
	> ```shell
	> process launch --working-dir <directory> -- [<run-args>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> process launch --working-dir /Volumes/DISK3/emails
	> pr la -w ../
	> ```


-	***To redirect [program] [standard in/out/err streams](https://en.wikipedia.org/wiki/Standard_streams):***

	<small>`[Search Tags: > TODO ]`</small>

	> ***Synopsis:***
	>
	> ```shell
	> process launch [--stdin <filename>] [--stdout <filename>] [--stderr <filename>] -- [<run-args>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) process launch --stdin   file-1.txt  # text file, w/ name: 'file-1.txt'
	> (lldb) process launch --stdout  file-2.txt
	> (lldb) process launch --stderr  file-3.txt
	> ```
	> ```shell
	> (lldb) pr la -i  /dev/ttys001               # terminal shell [device] file, w/ name: '/dev/ttys001'
	> (lldb) pr la -o  /dev/ttys002
	> (lldb) pr la -e  /dev/ttys003
	> ```
	> ```shell
	> (lldb) process launch -i /dev/ttys001 -o outFile.log -e errFile.log -- "arg1" "arg2" "youGetThePoint"
	> (lldb) pr la -i /dev/ttys001 -o outFile.log -e errFile.log -- "arg1" "arg2" "youGetThePoint"
	> ```
	>
	> *<small>[Note:*
	>
	> - *To clarify [, in this [last] example] –* <br>
	>
	>	- we redirect *[the]* standard input *[stream]* (`stdin`) *[of the program]* to *(i.e to be or come or be-given from or originate from)* a *[terminal [device]]* file, by the name of: `/dev/ttys001` – this is a running *[terminal]* shell *[instance]*, <br>
	>	- we redirect the standard output (`stdout`) to *[be written/printed to]* a `.log` file, by the name of: "`outFile`", <br>
	>	- we do the same *[, as `stdout`,]* with the standard error (`stderr`), this time, the file goes by the name: "`errFile`", <br>
	>	- we delimit the *`lldb`* command options that we have given, from *[, that which we will give as,]* program arguments, with: "` -- `" *[,  `lldb`*'s parser delimiter], <br>
	>	- we pass *[to our program]* three arguments.
	>
	> <br> *- end note]</small>*
	>



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
[🏠](#contents) | [⬅️](#35-start-or-attach-program) | [➡️](#38-examine-execution)
## 3.6. Graphical User Interface (GUI)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 3.6. Graphical User Interface (GUI)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


-	Source Code (Pane)

	| Key         | Action
	| :---------- | :--------------------------------------------
	| `return`    | Run to selected line with one shot breakpoint
	| `up`        | Select previous source line
	| `down`      | Select next source line
	| `page-up`   | Page up
	| `page-down` | Page down
	| `b`         | Set breakpoint on selected source/disassembly line
	| `c`         | Continue process
	| `d`         | Detach and resume process
	| `D`         | Detach with process suspended
	| `h`         | Show help dialog
	| `k`         | Kill process
	| `n`         | Step over (source line)
	| `N`         | Step over (single instruction)
	| `o`         | Step out
	| `s`         | Step in (source line)
	| `S`         | Step in (single instruction)
	| `,`         | Page up
	| `.`         | Page down


-	Variables & Registers (Pane)

	| Key         | Action
	| :---------- | :--------------------------------------------
	| `up`        | Select previous item
	| `down`      | Select next item
	| `right`     | Expand selected item
	| `left`      | Unexpand selected item or select parent if not expanded
	| `page-up`   | Page up
	| `page-down` | Page down
	| `A`         | Format as annotated address
	| `b`         | Format as binary
	| `B`         | Format as hex bytes with ASCII
	| `c`         | Format as character
	| `d`         | Format as a signed integer
	| `D`         | Format selected value using the default format for the type
	| `f`         | Format as float
	| `h`         | Show help dialog
	| `i`         | Format as instructions
	| `o`         | Format as octal


-	Thread & Stack Frames (Pane)

	| Key         | Action
	| :---------- | :--------------------------------------------
	| `up`        | Select previous item
	| `down`      | Select next item
	| `right`     | Expand the selected item
	| `left`      | Unexpand the selected item or select parent if
	| `page-up`   | Page up
	| `page-down` | Page down
	| `h`         | Show help dialog
	| `space`     | Toggle item expansion
	| `,`         | Page up
	| `.`         | Page down

<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#36-graphical-user-interface-gui) | [➡️](#381-source-code)
## 3.8. Examine Execution
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 3.8. Examine Execution

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#38-examine-execution) | [➡️](#382-variables)
### 3.8.1. Source Code
<small>`[Search Tags: >sourcecodelldb >lldb.sourcecode >lldbsourcecode]`</small>
<br>
<br>

> *`gui` mode displays the source code that is currently executing, in one of the window panes.*

-	***List source code:***

	> <small>`[Search Tags: >sourcelist >solist >listsource >listso >sourcedisplay >sodisplay >displaysource >displayso >sourceshow >soshow >showsource >showso]`</small>

	> ***Synopsis:***
	> ```shell
	> source list [--show-breakpoints] [--count <count>] [--file <filename>] [--line <linenum>]
	> source list [--show-breakpoints] [--count <count>] [--name <symbol>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) source list --count 20 --file main.c --line 5
	> (lldb) so li -c 20 -f main.c -l 5
	> ```
	> ```shell
	> (lldb) source list --count 25 --name foo
	> (lldb) so li -c 25 -n foo
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | Unix / Linux / MacOS | `(lldb) help source list`


---
[🏠](#contents) | [⬅️](#381-source-code) | [➡️](#383-thread-states)
### 3.8.2. Variable(s)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.8.2. Variable(s)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#382-variables) | [➡️](#384-stack-frame-states)
### 3.8.3. Thread State(s)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.8.3. Thread State(s)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#383-thread-states) | [➡️](#39-graphical-user-interface-gui)
### 3.8.4. Stack Frame State(s)
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.8.4. Stack Frame State(s)

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
