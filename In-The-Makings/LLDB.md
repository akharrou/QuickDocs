<!-- ﷽ -->

<!-- Metadata ------------------------------------------------------------------

	AUTHOR(S)
		akharrou

	CONTACT
		idev.aymen@gmail.com

	OBJECTIVE(S)
		Promote, explain and reminder what LLDB is and how to use it.

	DESCRIPTION
		[Beginner to Intermediate Level] Tutorial on LLDB.

------------------------------------------------------------------------------->

QuickDocs \| Low Level Debugger (LLDB)
===

> ***January 2020***

---

<!--
--------------------------------------------------------------------------------
> Table of >Contents
-->

# Contents

- [1. Overview / Cheat Sheet](#1-overview--cheat-sheet)
- [2. What is it ?](#2-what-is-it-)
- [3. How do I use it ?](#3-how-do-i-use-it-)
	- [3.1. Compile Program](#31-compile-program)
		- [3.1.1. Debug Flags: `-g` &amp; `-O0`](#311-debug-flags--g---o0)
		- [3.1.2. Helpful Flags: The `fsanitize` Family](#312-helpful-flags-the-fsanitize-family)
	- [3.2. Launch LLDB](#32-launch-lldb)
	- [3.3. Load LLDB](#33-load-lldb)
	- [3.4. Setup LLDB](#34-setup-lldb)
		- [3.4.1. Breakpoints](#341-breakpoints)
		- [3.4.2. Watchpoints](#342-watchpoints)
	- [3.5. Run Program](#35-run-program)
	- [3.6. Graphical User Interface (GUI)](#36-graphical-user-interface-gui)
	- [3.7. Examine Execution](#37-examine-execution)
		- [3.7.1. Source Code](#371-source-code)
		- [3.7.2. Variable(s)](#372-variables)
		- [3.7.3. Thread State(s)](#373-thread-states)
		- [3.7.4. Stack Frame State(s)](#374-stack-frame-states)
- [3. Tips &amp; Shortcuts](#3-tips-amp-shortcuts)

---

<!--
--------------------------------------------------------------------------------
> Start
.
.
.
-->

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

-	***LLDB, is a program – that provides an interface for you to examine the execution of a program – instruction by instruction, or line by line, or breakpoint by breakpoint.***

	> Further broken down:
	>
	> LLDB, short for ***Low-Level-De-Bugger***, is a program – **that provides an interface** *(a way/channel/portal/access-point/control-panel)* **for you to examine the execution** *([individual] actions/steps taken-by/performed-by)* **of a** *[-nother]* **program** – *[CPU]* **instruction by instruction, or** *[source code]* **line by line, or breakpoint** *(checkpoint(s) set by you, in the source code)* **by breakpoint.**

#### Why should I care ?

-	*The short answer;* ***you should care because it will save you *(thousands of)* hours of debugging.***

	> Further broken down:
	>
	> *The short answer,* **YES !** – you should definitely care, and here's why: ***it will save you hours, of debugging*** – ***the process of trying to figure out:***
    >	- where a bug lies in source code
	>	- its cause
	>	- *(possibly even)* how to fix it <br> <br>

	> ***Bug*** <br>
		*In short; an error in (code) logic, committed by a programmer, causing unintended/undesireable/unplanned-for behavior(s) and/or output(s).*


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
	>	- *5.* **Run your program** ([§3.5](#35-run-program)) *(within LLDB)*
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
	> -	There is also a brief section on a set of *[compiler]* flags, which, basically, make up the other half of the [debugging](https://en.wikipedia.org/wiki/Debugging) tools/weapons available to you – ***the `"fsanitize"` family*** ([§3.1.2](#312-helpful-flags-the-fsanitize-family)) *[of flags]*. Don't miss it, you'll miss out on a LOT ! <br>
	>
	> <br> *- end note]</small>*


<br>
<br>

> ***Ressources:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial](https://lldb.llvm.org/use/tutorial.html)


---
[🏠](#contents) | [⬅️](#3-how-do-i-use-it-) | [➡️](#311-debug-flags--g---o0)
## 3.1. Compile Program
<small>`[Search Tags: >lldb.compileprogram >compileprogram >db.compileprogram >compilationstep >compilestep >compprogram]`</small>
<br>
<br>


-	***LLDB works by loading it with*** *(i.e setting it up to run)* ***an execuable*** *[file]* *(compiled source code program)*. So first thing would be to [compile](http://www.cs.ecu.edu/~karl/3300/spr16/Notes/System/compile.html) a program.

-	During *"examination phase"*, ***to see source code*** – as opposed to *[assembly instructions (code)](https://en.wikipedia.org/wiki/Assembly_language)* – ***that executes in a linear fashion*** (i.e line by line, statement by statement), you might want to ***add*** *[in the compilation step [of your program]]* the options/flags : **`-g -O0`**, see ([§3.1.1](#311-debug-flags--g-amp--o0)).

-	Unrelated to `lldb`, but ***assisting tremendously in debugging***, doing, arguably, half the debugging effort for you, again, is the ***`fsanitize` family*** ([3.1.2](#312-helpful-flags-the-fsanitize-family)) ***of *[compiler]* flags***. Don't jump over reading this section ! You'll miss out on WAY more than you think !

-	***Demonstration:*** <br> <br>
	> ![Demo: compile-with-debug-and-fsanitize-flags](https://media.giphy.com/media/JRPUPdiP8Awj39A6A0/giphy.gif) <!-- ../Assets/LLDB/compile-with-debug-and-fsanitize-flags.gif -->
	>
	> *<small>[Note: (works fine with both the `gcc` and `clang` [compilers]) * - end note]</small>*
	>
	> If you're *(really)* in a hurry, just do as the demonstration shows, and skip reading subsections of [§3.1](#31-compile-program).
	>
	> ```shell
	> -g -O0 -fsanitize=address -fsanitize=undefined
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#31-compile-program) | [➡️](#312-helpful-flags-the-fsanitize-family)
### 3.1.1. Debug Flags: `-g` & `-O0`
<small>`[Search Tags: >compileprogram >compileprg >programcompilation >compilation >lldb.compile.flags >lldb.compile.debugflags >lldb.debugflags >lldb.flags >debugflags]`</small>
<br>
<br>


-	***To see source code in the *"examination phase"**** *(instead of assembly code)*, you'll have to add *[in the compilation step]* the *[compiler]* flag, specific to the compiler used, that ***generates debug information***; but if your goal is to see *assembly*, then omit this step.

	> For `clang` and `gcc` *[compilers]* the flag is: `-g`.

-	***To make sure that no source code is not optimized away*** *(i.e modified by the compiler in order to optimize the [speed and efficiency of a] program)*, you'll have to add *[in the compilation step]* the *[compiler]* flag, specific to the compiler used, that ***turns off optimizations***; if you don't do this, then during *"examination phase"*, `lldb` might appear to be excute *[the source code]* in a non-linear manner *(i.e it will (seem to) jump (skip) over some lines and loops, etc)*.

	> For `clang` and `gcc` *[compilers]* the flag is: `-O0`
	> <br> Uppercase letter /Oh/ `O`, followed by, the digit /zero/ '0'.

-	***Demonstration:*** <br> <br>
	> ![Compilation Step with Debug Flags](https://media.giphy.com/media/lPAhT8fwh0K6VEwoDM/giphy.gif) <!-- ../Assets/LLDB/compile-with-debug-flags.gif -->

<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | Clang | [Compiler :: Debug Options](https://clang.llvm.org/docs/UsersManual.html#controlling-debug-information)
> | 2 | Documentation | Clang | [Compiler :: Documentation](https://clang.llvm.org/docs/UsersManual.html)
> | 3 | Documentation | GNU | [Compiler :: Debug Options](https://gcc.gnu.org/onlinedocs/gcc-9.2.0/gcc/Debugging-Options.html#Debugging-Options)
> | 4 | Documentation | GNU | [Compiler :: Documentation](https://gcc.gnu.org/onlinedocs/gcc-9.2.0/gcc/Debugging-Options.html#Debugging-Options)


---
[🏠](#contents) | [⬅️](#311-debug-flags--g---o0) | [➡️](#32-launch-lldb)
### 3.1.2. Helpful Flags: The `fsanitize` Family
<small>`[Search Tags: >fsanitize=address >fsanitize=undefined >fsanitize=memory >fsanitize=leaks >fsanitize=threads >fsanitize=dataflag >fsanitize=cfi >fsanitize=safestack >fsanitize=safe-stack >fsanitize=data-flow >sanitizers >sanitizerflags >sanitizeflags >sanitizer.flags >flags.sanitizers >debug.sanitizers >debugsanitizers >debugfsanitizers >memoryflags >leakflags >threadflags >dataflowflags >undefinedbehaviorflags >safestackflags >cfiflags >memory.flags >leak.flags >thread.flags >dataflow.flags >undefinedbehavior.flags >safestack.flags >cfi.flags] >flags.memory >flags.leak >flags.thread >flags.dataflow >flags.undefinedbehavior >flags.safestack >flags.cfi`</small>
<br>
<br>

> This section is unrelated to LLDB, but related to debugging.

-	The `fsanitize` *[compiler]* flag family is an extraordinarily helpful set of flags, with regards to debugging. They enable *[compiler]* *([runtime](https://en.wikipedia.org/wiki/Runtime_(program_lifecycle_phase)))* checks – which are disabled by default – that detect and help avoid bugs. <br>

	If a check fails, a diagnostic message is produced *(at runtime)* explaining the problem.

	> *<small>[Note: Adding the `-g` flag causes the sanitizers to give you better (i.e more detailed) diagnostic messages, so keep it ! - end note]</small>*

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

	Each *[sanitizer]* performs multiple (different) checks, for example: the *UndefinedBehaviorSanitizer*, enabled by *`-fsanitize=undefined`*, performs all the checks listed [here](https://developer.apple.com/documentation/code_diagnostics/undefined_behavior_sanitizer#topics) (or [here](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html#available-checks), just another good resource).

-	***To enable a sanitizer***:

	```shell
	$> clang <source-code-files> -g -O0 -fsanitize=address -fsanitize=undefined ...
	```

	> – add it *[it's corresponding (enabler) flag]* to the compilation step. The shown above *(command)*, adds the *AddressSanitizer* and the *UndefinedBehaviorSanitizer*, respectively.

	> *<small>[Note:* It is not possible to combine the following sanitizers: *`-fsanitize=address`*, *`-fsanitize=thread`*, and *`-fsanitize=memory`* at the same time. *- end note]*
	>

<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | Apple |[Sanitizers Family](https://developer.apple.com/documentation/code_diagnostics/)
> | 2 | Documentation | Clang | [Sanitizers Family](https://clang.llvm.org/docs/UsersManual.html#controlling-code-generation)
> | 4 | Documentation | GNU | [Sanitizers Family (scroll down) ](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html#-fsanitize=address)

---
[🏠](#contents) | [⬅️](#312-helpful-flags-the-fsanitize-family) | [➡️](#33-load-lldb)
## 3.2. Launch LLDB
<small>`[Search Tags: >lldb.start >startlldb >startdebugger >debugger.start >db.start >lldb.launch >launchlldb >launchdebugger >debugger.launch >db.launch]`</small>
<br>
<br>


-	***To launch/start LLDB:***

	> *Command:*
	>
	> ```shell
	> lldb [-hvdexw] [-a arch] [-c core-file] [-l script-language] [-s lldb-commands] [-n process-name] [-p pid] [[--] <PROGRAM-ARG1> <PROGRAM-ARG2> ...]
	>
	> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	>
    > -f, --file filename
    >         Specifies the executable file that lldb will be launching /
    >         attaching to.

	> ```
	>
	> *Example:*
	> ```shell
	> $> lldb
	> (lldb)
	> ```
	>
	> ```shell
	> $> lldb
	> (lldb)
	> ```

	> – write `lldb` *[on the terminal command prompt]* and press `enter`.

> *<small>[Note:*

-	***To debug Python [scripts]:***

	```shell
	lldb -f /path/to/<python> -- <script>
	```

	or

	```shell
	(lldb) ta cr /path/to/<python>
	(lldb) r <script>
	```

<br> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#32-launch-lldb) | [➡️](#34-setup-lldb)
## 3.3. Load LLDB
<small>`[Search Tags: >lldb.loadprogram >loadlldb >loaddebugger >debugger.loadprogram >db.loadprogram >programload >program.load >lldb.unloadprogram >unloadlldb >unloaddebugger >debugger.unloadprogram >db.unloadprogram >programunload >program.unload]`</small>
<br>
<br>


-	***To load a program [into `lldb`]*** ; *(i.e set `lldb` up to target a specific program [for debugging/examination, when run])*:

	> ***From outside [`lldb`]** (i.e before, and at the same time as, launch *[of `lldb`]* , on the *[terminal]* command prompt):*
	>	```shell
	>	$> lldb --file <program-execuable-name>
	>	$> lldb -f <program-execuable>
	>	$> lldb <program-execuable>
	>	```
	>

	> ***From inside [`lldb`]** (i.e after launch *[of `lldb`]*, on the `lldb` prompt):*
	>	```shell
	>	(lldb) target create <program-execuable>
	>	(lldb) ta cr <program-execuable>
	>	(lldb) file <program-execuable>
	>	```
	>
	> *<small>[Note: `file` is a [built-in] alias/abbreviation for `target create`, see `help file`- end note]</small>*

-	***To un-load a program [from `lldb`]:***

	> ```shell
	> (lldb) target delete
	> (lldb) ta de
	> ```

-	***Demonstration:*** <br> <br>
	![Demo: lldb-load](https://media.giphy.com/media/Ur15mVAN0o0QcyuMQY/giphy.gif) <!-- ../Assets/LLDB/lldb-load.gif -->

	> *<small>[Note: `lldb`'s lexicon refers to an ***"[executable] program"*** , that is to be debugged, as a ***"[debugger] target"*** – to avoid confusion. - end note]</small>*

<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Loading a Program into LLDB](https://lldb.llvm.org/use/tutorial.html#loading-a-program-into-lldb)


---
[🏠](#contents) | [⬅️](#33-load-lldb) | [➡️](#341-breakpoints)
## 3.4. Setup LLDB
<small>`[Search Tags: >lldb.setup >debugger.setup >lldbsetup >debuggersetup >setuplldb >setupdebugger]`</small>
<br>
<br>


-	`lldb` gives you the option to set it *[`lldb`]* up to stop *(pause/halt/break/rest)* *[during execution [of your program]]*, everytime it reaches a certain point/location *(e.g. at a particular line *[in source code]* or at a particular function)* – optionally you can add conditions, so as to only stop at that point/location when the *[added]* condition is met *(fulfilled/reached)*. <br>

	*"A location at which *[`lldb`'s]* execution is setup to stop *[at]*"* is what is referred to as: a ***breakpoint*** ([§3.4.1](#341-breakpoints)) – you can kind of think of them *[breakpoints]* as ***checkpoints***. <br>

-	`lldb`, also, gives you the option to set it up to stop and log activities of a certain variable *(e.g. accesses (`read`) and/or modifications (`write`)*) – `lldb` logs its *[the variable's]* *(before and after)* values – optionally you can add conditions, so as to only log when it *[the variable]* has met *(fulfilled/reached)* certain condition(s), e.g.: if it *[the variable]* has reached or has gone above or below a certain value or the value of another variable; you could also have conditions that are unrelated *[to the variable]*, e.g.: when it is 6am, or when some function was called, or some other variable reaches some value, etc, you get the point. <br>

	*"A tell to *[`lldb`]* to keep a special eye and log the activity of a particular variable *(more precisely and generally, an object)*"* is what is referred to as: a ***watchpoint*** ([§3.4.2](#341-watchpoints)) – you can kind of think of them *[watchpoints]* as ***surveillance cameras pointed towards a particular objects (variables, etc)*** , *adding a watchpoint* is ***putting an object on the watchlist*** - so to speak. <br>

<!-- BREAKPOINT ANALOGY:

-	An analogy *(a situation/narrative same, or resembling, in essence)* *[for the above concepts]* would be that of city *metros or buses*. The *bus* *(**`lldb`**)* stops at designated *bus stops* *(**breakpoints**)*. The *bus stops* are known by *address or reference number* *(**a particular line, in a *[source code]* file**)*, they may also be known by *(a significant) structure/building, junction or area* *(**a particular function [in your code]**)*. Sometimes the *bus* doesn't stop at a particular *bus stop*, because conditions have been tied to it; the *bus* only stops at the *bus stop* at certain hours and/or certain days of the week; i.e the bus stopping at that station is conditional, i.e relies on certain ***condition(s)*** being met, e.g: *"in the morning hours (6am-11am), if it is a weekday"* *(`if (morning == true && (week_day >= 0 && week_day <= 5))`)*.
-->


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Setting Breakpoints](https://lldb.llvm.org/use/tutorial.html#setting-breakpoints)
> | 2 | Documentation | LLDB | [(Official) Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)
> | 3 | Documentation | LLDB | [(Official) Tutorial :: Setting Watchpoints](https://lldb.llvm.org/use/tutorial.html#setting-watchpoints)


---
[🏠](#contents) | [⬅️](#34-setup-lldb) | [➡️](#342-watchpoints)
### 3.4.1. Breakpoints
<small>`[Search Tags: >lldb.breakpoints >debugger.breakpoints >lldbbreakpoints >debuggerbreakpoints >breakpointcommands >breakpointcmds >brcmds >bmain >blist >bfile >bfunc >setbrpts >brmain >brsmain >brkpts >breakpts >bpts >brpoints >bapts >bapoints]`</small>
<br>
<br>


> *Commands for operating on breakpoints:*

-	***Set a breakpoint, on a function:***

	> *Command:*
	>
	> ```shell
	> breakpoint set --name <function-name>
	> br s -n <function-name>
	> b <function-name>
	> ```
	>
	> *Example:*
	> ```shell
	> (lldb) breakpoint set --name main
	> (lldb) br s -n main
	> (lldb) b main
	> ```

-	***Set a breakpoint, on a [source file] line:***

	> *Command:*
	>
	> ```shell
	> breakpoint set --file <filename> --line <line-number>
	> br s -f <filename> -l <line-number>
	> b <filename>:<line-number>
	>```
	>
	> *Example:*
	> ```shell
	> (lldb) breakpoint set -f hello.c -l 10
	> (lldb) br s -f hello.c -l 10
	> (lldb) b hello.c:10
	> ```

-	***Set a breakpoint condition:***

	> *Command:*
	> ```
	> breakpoint modify [-c <expr>]
	>
	> breakpoint modify [-Dde] [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>]  [-G <boolean>] [<breakpt-id | breakpt-id-list>]
	>```
	>
	> *Manual Page Extract:*
	>```shell
	>	-c <expr> ( --condition <expr> )
	>	     The breakpoint stops only if this condition expression evaluates to true.
	>
	>	-G <boolean> ( --auto-continue <boolean> )
    >		The breakpoint will auto-continue after running its commands.
	>
	>	-o <boolean> ( --one-shot <boolean> )
	>		The breakpoint is deleted the first time it stop causes a stop.
	> ```
	>
	> *Example*:
	> ```
	> (lldb) b main
	>
	> (lldb) breakpoint list -b
	> Current breakpoints:
	> 1: name = 'main', locations = 1
	>
	> (lldb) breakpoint command add `<command>` 1
	> ```

-	***Set a breakpoint command:***

	> *Command:*
	> ```
	> breakpoint command add <cmd-options> <breakpt-id>
	>
	>
	>
	> ```
	>
	> *Example*:
	> ```
	> (lldb) breakpoint set --name main
	> (lldb) breakpoint modify -c '' TODO : adding commands to breakpoints
	> ```

	> *<small>[Note:*
	>
	> 	- "Breakpoints carry two orthognal sets of information: one specifies where to set the breakpoint, and the other how to react when the breakpoint is hit. The latter set of information (e.g. commands, conditions, hit-count, auto-continue…) we call breakpoint options."
	>
	> <br> *- end note]</small>*

-	***List breakpoints:***

	> *Command:*
	>
	> ```shell
	> breakpoint list -[bfv] [<breakpt-id | breakpt-id-list>]
	>
	>     -b ( --brief   )  :: brief description
	>     -f ( --full    )  :: full description
	>     -v ( --verbose )  :: extensive full description
	>```
	>
	> *Example*:
	> ```shell
	> (lldb) breakpoint list --verbose
	> (lldb) br l -v
	> ```

-	***Delete breakpoint(s):***

	> *Command:*
	>
	> ```shell
	> breakpoint delete [<breakpt-id | breakpt-id-list>]
	> ```
	>
	> *Example*:
	> ```shell
	> (lldb) breakpoint delete 1 2 3
	> (lldb) br de 1 2 3
	> ```
	>
	> *<small>[Note: If no breakpoint *[id]* is specified, delete them *[breakpoints]* all. - end note]</small>*

-	***Set a breakpoint (full):***

	> *(Full) Command:*
	> ```shell
	> breakpoint set [-w <watch-type>] [-s <byte-size>] <variable-name> breakpoint set [-DHd] -l <linenum> [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>] [-c <expr>] [-G <boolean>] [-C <command>] [-s <shlib-name>] [-f <filename>] [-K <boolean>] [-N <breakpoint-name>] [-R <address>] [-m <boolean>] breakpoint set [-DHd] -a <address-expression> [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>] [-c <expr>] [-G <boolean>] [-C <command>] [-s <shlib-name>] [-N <breakpoint-name>] breakpoint set [-DHd] -n <function-name> [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>] [-c <expr>] [-G <boolean>] [-C <command>] [-s <shlib-name>] [-f <filename>] [-L <source-language>] [-K <boolean>] [-N <breakpoint-name>] [-R <address>] breakpoint set [-DHd] -F <fullname> [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>] [-c <expr>] [-G <boolean>] [-C <command>] [-s <shlib-name>] [-f <filename>] [-L <source-language>] [-K <boolean>] [-N <breakpoint-name>] [-R <address>] breakpoint set [-DHd] -S <selector> [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>] [-c <expr>] [-G <boolean>] [-C <command>] [-s <shlib-name>] [-f <filename>] [-L <source-language>] [-K <boolean>] [-N <breakpoint-name>] [-R <address>] breakpoint set [-DHd] -M <method> [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>] [-c <expr>] [-G <boolean>] [-C <command>] [-s <shlib-name>] [-f <filename>] [-L <source-language>] [-K <boolean>] [-N <breakpoint-name>] [-R <address>] breakpoint set [-DHd] -r <regular-expression> [-i <count>] [-o <boolean>] [-x <thread-index>] [-t <thread-id>] [-T <thread-name>] [-q <queue-name>] [-c <expr>] [-G <boolean>] [-C <command>] [-s <shlib-name>] [-f <filename>] [-L <source-language>] [-K <boolean>] [-N <breakpoint-name>] [-R <address>]
	> ```
	>
	> *<small>[Note: Listed above are only the common usages *[of `breakpoint set`]*. To discover the full extent *[of `breakpoint set`'s]* powers, you can consult its manual page, type: `h br s` - end note]</small>*

	> *<small>[Note:*
	>
	> - *For more information on `breakpoint` and its commands and their options and what they do, consult its [`breakpoint`'s] manual page, type: "`help breakpoint`", "`help breakpoint <command>`".*
	>
	> <br> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Setting Breakpoints](https://lldb.llvm.org/use/tutorial.html#setting-breakpoints)
> | 2 | Documentation | LLDB | [(Official) Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html?highlight=watchpoints#breakpoint-names)
> | 3 | Documentation | LLDB | [GDB to LLDB command map](https://lldb.llvm.org/use/tutorial.html?highlight=watchpoints#setting-breakpoints)


---
[🏠](#contents) | [⬅️](#341-breakpoints) | [➡️](#35-run-program)
### 3.4.2. Watchpoints
<small>`[Search Tags:>lldb .watchpoints >debugger.watchpoints >lldbwatchpoints >debuggerwatchpoints >watchpointcommands >watchpointcmds >wacmds >wapts >watchpts >wpts >wpoints >wapoints >setwapts >wapts]`</small>
<br>
<br>


> *Commands for operating on watchpoints:*

-	***Set watchpoint, on a variable:***

	> *Command:*
	> ```shell
	> watchpoint set variable [-w <watch-type>] [-s <byte-size>] <variable-name>
	> ```
	>
	> *Example:*
	> ```shell
	> (lldb) watchpoint set variable my_var
	> (lldb) wa s v my_var
	> ```

-	***Set watchpoint, on an address [by supplying an expression]:***

	> *Command:*
	> ```shell
	> watchpoint set expression [-w <watch-type>] [-s <byte-size>] -- <expr>
	> watchpoint set expression <expr>
	> ```
	>
	> *Example*:
	> ```shell
	> (lldb) watchpoint set expression my_ptr
	> (lldb) wa s e my_ptr
	> ```

	> *<small>[Note:*
	>
	> - *Where `-s` and `-w` [for both commands [above]]:*
	>
	> 	```shell
	> 	-s <byte-size> ( --size <byte-size> )
	> 			Number of bytes to use to watch a region.
	> 			Values: 1 | 2 | 4 | 8
	>
	> 	-w <watch-type> ( --watch <watch-type> )
	> 			Specify the type of watching to perform.
	> 			Values: read | write | read_write
	> 	```
	>
	> - *For more information, consult its *[`watchpoint set`'s]* manual page: "`help watchpoint set`".*
	>
	> <br> *- end note]</small>*

-	***Set a watchpoint condition:***

	> *Command:*
	> ```
	> watchpoint modify [-c <expr>] [<watchpt-id | watchpt-id-list>]
	> ```
	>
	> *Example*:
	> ```
	> (lldb) watch set var global
	> (lldb) watchpoint modify -c '(global == 5)'
	> ```

-	***List watchpoints:***

	> *Command:*
	>
	> ```shell
	> watchpoint list -[bfv] [<watchpt-id | watchpt-id-list>]
	>
	>     -b ( --brief   )  :: brief description
	>     -f ( --full    )  :: full description
	>     -v ( --verbose )  :: extensive full description
	>```
	>
	> *Example*:
	> ```shell
	> (lldb) watchpoint list
	> (lldb) wa l
	> ```

-	***Delete watchpoint(s):***

	> *Command:*
	>
	> ```shell
	> watchpoint delete [<watchpt-id | watchpt-id-list>]
	> ```
	>
	> *Example*:
	> ```shell
	> (lldb) watchpoint delete 1 2 3
	> (lldb) wa de 1 2 3
	> ```
	>
	> *<small>[Note: If no watchpoints are specified, delete them all. - end note]</small>*

	> *<small>[Note:*
	>
	> - *For more information on `watchpoint` and its commands and their options and what they do, consult its [`watchpoint`'s] manual page, type: "`help watchpoint`", "`help watchpoint <command>`".* <br>
	>
	> - *Trying to set watchpoints before launching a process (i.e running a program) will not work, you'll get this: `error: invalid process` (or `thread`). You have to load and launch/run the program first.*
	>
	> <br> *- end note]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Setting Watchpoints](https://lldb.llvm.org/use/tutorial.html?highlight=watchpoints#setting-watchpoints)
> | 2 | Documentation | LLDB | [GDB to LLDB Command Map](https://lldb.llvm.org/use/map.html?highlight=watchpoints#watchpoint-commands)


---
[🏠](#contents) | [⬅️](#342-watchpoints) | [➡️](#36-graphical-user-interface-gui)
## 3.5. Run Program
<small>`[Search Tags: >lldb.runprocess >lldb.launchprocess >lldb.startprocess >lldb.runprogram >lldb.launchprogram >lldb.startprogram >startprogram >launchprogram >runprogram >startprocess >launchprocess >runprocess  >startexecutable >launchexecutable >runexecutable >programstart >programrun >programlaunch >debugger.runprocess >debugger.launchprocess >debugger.startprocess >debugger.runprogram >debugger.launchprogram >debugger.startprogram]`</small>
<br>
<br>


-	***To launch/run a *[loaded]* program:***

	```shell
	(lldb) process launch
	```

	```shell

	```

	```shell
	(lldb) run
	(lldb) r
	```

	> – we use the *`process launch`* command, or one of its built in aliases.
	>
	> If you need to pass arguments to your program, you can append them *[the arguments]* as you would on normally, after the launching command. The form follows: `<launch-cmd> [<run-args>]`*
	>
	> *Example:*
	>
	> ```shell
	> (lldb) run <arg1> <arg2> ... <argN>
	> ```

	> *<small>[Note:*
	>
	> - *`run`* is an abbreviation for *`process launch -X true --`* , see *`h run`*.
	>
	> - *`r`* is an abbreviation for *`run`* , see *`h r`*.
	>
	> <br> *- end note]</small>*

-	***To redirect stdout:***

	```shell
	(lldb) process launch
	(lldb) pr la -o <filename-terminal>
	```
	> – we use the *`process launch`* command, or one of its built in aliases.
	>
	> If you need to pass arguments to your program, you can append them *[the arguments]* as you would on normally, after the launching command. The form follows: `<launch-cmd> [<run-args>]`*
	>
	> *Example:*
	>
	> ```shell
	> (lldb) run <arg1> <arg2> ... <argN>
	> ```

-	***Set a process launch (full):***

	> *(Full) Command:*
	> ```shell
	> process launch [-s] [-A <boolean>] [-p <plugin>] [-w <directory>] [-a <arch>] [-v <none>] [-c[<filename>]] [-i <filename>] [-o <filename>] [-e <filename>] [<run-args>]
	> ```
	>
	> *<small>[Note: Listed above are only the common usages *[of `process launch`]*. To discover the full extent of *[`process launch`'s]* powers, you can consult it's manual page, type: `h pr la` - end note]</small>*


TODO: demo

<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Starting or Attaching to Your Program](https://lldb.llvm.org/use/tutorial.html#starting-or-attaching-to-your-program)


---
[🏠](#contents) | [⬅️](#35-run-program) | [➡️](#37-examine-execution)
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

# 3. Tips & Shortcuts



<!--
.
.
.
> End
--------------------------------------------------------------------------------
> Footnotes:
-->



<!--
> Document End
--------------------------------------------------------------------------------
> References:
-->




<!--
--------------------------------------------------------------------------------
> Notes:

	- issue with lldb is it takes time to get back to the orginal point

	ex:

		- how to skip loops, cuz it takes too long

		- and be able to see stderr, stdout

		- segfaults when a variable reaches a value of 3
		but it takes time to get there, so how can you
		run the code till it reaches 2 then go line by
		line from there.

-->
