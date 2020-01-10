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

Low Level Debugger (LLDB)
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
<small>`[Search Tags: >lldb.what? >lldb.who? >lldb.why? >lldb.whocares? >lldb.whycare? >lldb.? >lldb? >whatisit ?isit >whatsit >about >description >whycare >caring? >info >intro >lldb.whatisit >lldb.whycare? >lldb.whyshouldicare?]`</small>
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
		*In short; an error in (code) logic, committed by a programmer causing unintended/undesired/unplanned for behavior(s) and/or output(s).*


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
	> -	There is also a brief section on a set of *[compiler]* flags that make debugging as easy as pie, ***the `fsanitize` family*** [§3.1.2](#312-helpful-flags-the-fsanitize-family) *[of flags]*. Don't miss it, you'll miss out on a LOT ! `lldb` and the `fsanitize` family of flags are two debugging tools that go hand in hand !
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
<small>`[Search Tags: >lldb.compile >db.compile]`</small>
<br>
<br>


-	***LLDB works by loading it with*** *(i.e setting it up to run)* ***an execuable*** *[file]* *(compiled source code program)*. So first thing would be to [compile](http://www.cs.ecu.edu/~karl/3300/spr16/Notes/System/compile.html) a program.

-	During *"examination phase"*, ***to see source code*** – as opposed to *[assembly instructions (code)](https://en.wikipedia.org/wiki/Assembly_language)* – ***that executes in a linear fashion*** (i.e line by line, statement by statement), you might want to add *[in the compilation step [of your program]]* the options/flags : `-g -O0`, see ([§3.1.1](#311-debug-flags--g-amp--o0)).

-	Unrelated to `lldb`, but ***assisting tremendously in debugging***, doing, arguably, half the debugging effort for you, again, is the ***`fsanitize` family*** ([3.1.2](#312-helpful-flags-the-fsanitize-family)) of *[compiler]* flags. Don't jump over reading this section ! You'll miss out on WAY more than you think !

-	***Demonstration:*** <br> <br>
	> ![Demo: compile-with-debug-and-fsanitize-flags](https://media.giphy.com/media/JRPUPdiP8Awj39A6A0/giphy.gif) <!-- ../Assets/LLDB/compile-with-debug-and-fsanitize-flags.gif -->
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

	```shell
	$> lldb
	(lldb)
	```

	> – write `lldb` *[on the terminal command prompt]* and press `enter`.


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
<small>`[Search Tags: >lldb.load >loadlldb >loaddebugger >debugger.load >db.load]`</small>
<br>
<br>


-	***To load a program into `lldb`*** ; *(i.e set `lldb` up to target a specific program [for examination, when run])*:

	>- ***From (outside) `lldb`** (i.e before launch, on the [terminal] command prompt):*
	>	```shell
	>	$> lldb <program-execuable-name>
	>	```
	>
	>- ***From (inside) `lldb`** (i.e after launch, on the `lldb` prompt):*
	>	```shell
	>	file <program>   | OR |   target create <program>   | OR |   ta cr <program>
	>	```
	>
	>	The output of `lldb` *[for all the commands above]* will be something along the lines of:
	>	```shell
	>	Current executable set to '<program>' (<system-architecture>).
	>	```

-	***To un-load [a program] from `lldb`:***

	```shell
	(lldb) target delete
	```
	> or, *for short*:
	```shell
	(lldb) ta de
	```
	> This happens inside `lldb`, after having loaded a program already. <br>
	>
	> The output of `lldb` should be something along the lines of:
	> ```shell
	> 1 targets deleted.
	> ```
	> If no 'target' program was found, the output will be something along these lines instead:
	> ```shell
	> error: no target is currently selected
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Load a Program into LLDB](https://lldb.llvm.org/use/tutorial.html#id2)


---
[🏠](#contents) | [⬅️](#33-load-lldb) | [➡️](#341-breakpoints)
## 3.4. Setup LLDB
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 3.4. Setup LLDB

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#34-setup-lldb) | [➡️](#342-watchpoints)
### 3.4.1. Breakpoints
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.4.1. Breakpoints

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#341-breakpoints) | [➡️](#35-run-program)
### 3.4.2. Watchpoints
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.4.2. Watchpoints

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#342-watchpoints) | [➡️](#36-graphical-user-interface-gui)
## 3.5. Run Program
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ## 3.5. Run Program

-	***To run a (loaded) program:***

	```shell
	(lldb) target delete
	```
	> or, *for short*:
	```shell
	(lldb) ta de
	```
	> This happens inside `lldb`, after having loaded a program already. <br>
	>
	> The output of `lldb` should be something along the lines of:
	> ```shell
	> 1 targets deleted.
	> ```
	> – if it found a 'target' to delete, else:
	> ```shell
	> error: no target is currently selected
	> ```

<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


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

	– Empty –

-->
