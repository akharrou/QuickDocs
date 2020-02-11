<!-- ﷽ , In the name of God, the All-Merciful, the All-Compassionate. -->

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
	- [3.2. Run LLDB](#32-run-lldb)
	- [3.3. Load LLDB](#33-load-lldb)
	- [3.4. Setup LLDB](#34-setup-lldb)
		- [3.4.1. Breakpoints](#341-breakpoints)
		- [3.4.2. Watchpoints](#342-watchpoints)
	- [3.5. Start Debugging](#35-start-debugging)
		- [3.5.1. Launch](#351-launch)
		- [3.5.2. Attach](#352-attach)
	- [3.6. Graphical User Interface (`GUI`)](#36-graphical-user-interface-gui)
		- [3.6.1 About](#about)
		- [3.6.2 Usage Commands *[Help Menus]*](#usage-commands)
	- [3.7. Control Process Execution](#37-control-process-execution)
	- [3.8. Examine](#38-examination)
		- [3.8.1. Source Code](#381-source-code)
		- [3.8.2. State of Threads](#382-state-of-threads)
		- [3.8.3. State of Stack Frames](#383-state-of-stack-frames)
		- [3.8.4. State of Variables](#384-state-of-variables)
- [3. Tips &amp; Shortcuts](#3-tips-amp-shortcuts)
	- [3.1 Makfile](#)


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


[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
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
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
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
> | # | Type                  | Author                 | Link
> | - | --------------------- | ---------------------- | --------------------
> | 1 | Documentation Archive | Apple                  | [GDB and LLDB Command Examples](https://developer.apple.com/library/archive/documentation/IDEs/Conceptual/gdb_to_lldb_transition_guide/document/lldb-command-examples.html#//apple_ref/doc/uid/TP40012917-CH3-SW1)


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
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
> | 1 | PDF                | nesono                 | [`lldb` Cheat Sheet](https://www.nesono.com/sites/default/files/lldb%20cheat%20sheet.pdf)


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

TODO : # 3. How do I use it ?

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

	> *<small>[**Note**:*
	>
	> -	*There is also a brief section on a set of *[compiler]* flags, which, basically, make up the other half of the [debugging](https://en.wikipedia.org/wiki/Debugging) tools/weapons available to you – ***the `"fsanitize"` family*** ([§3.1.2](#312-sanitizer-flags--fsanitize-family)) *[of flags]*. Don't miss it, you'll miss out on a LOT ! <br>*
	>
	> *- **end note**]</small>*


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

Contents
---
- [1 Debug Flags: `-g` & `-O0`](#311-debug-flags--g---o0)
- [2 Sanitize Flags: `fsanitize` family](#312-sanitizer-flags--fsanitize-family)

---


-	***LLDB works by loading it with*** *(i.e setting it up to run)* ***an execuable*** *[file]*.

-	First thing would be to [compile](http://www.cs.ecu.edu/~karl/3300/spr16/Notes/System/compile.html) a program; and when debugging, don't forget to compile with the ***debugging*** ([§3.1.1](#311-debug-flags--g---o0)) and ***sanitizer*** ([3.1.2](#312-sanitizer-flags--fsanitize-family)) *[compiler]* flags.

-	***Demonstration:*** <br>
	> ![Demo: compile-with-debug-and-fsanitize-flags](https://media.giphy.com/media/JRPUPdiP8Awj39A6A0/giphy.gif) <!-- ../Assets/LLDB/compile-with-debug-and-fsanitize-flags.gif -->


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
	> <br> Uppercase letter /Oh/ `O`, followed by, the digit /zero/ `0`.


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
<small>`[Search Tags: >fsanitize=address >fsanitize=undefined >fsanitize=memory >fsanitize=leaks >fsanitize=threads >fsanitize=dataflag >fsanitize=cfi >fsanitize=safestack >fsanitize=safe-stack >fsanitize=data-flow >sanitizers >sanitizerflags >sanitizeflags >sanitizer.flags >flags.sanitizers >debug.sanitizers >debugsanitizers >debugfsanitizers >memoryflags >leakflags >leaksflags >threadflags >dataflowflags >undefinedbehaviorflags >safestackflags >cfiflags >memory.flags >leaks.flags >leak.flags >thread.flags >dataflow.flags >undefinedbehavior.flags >safestack.flags >cfi.flags] >flags.memory >flags.leak >flags.thread >flags.dataflow >flags.undefinedbehavior >flags.safestack >flags.cfi`</small>
<br>
<br>

> *This section is unrelated to LLDB, but related to debugging.*

-	The `fsanitize` family of *[compiler]* flags, is an extraordinarily helpful set of *[compiler]* flags, with regards to debugging. They enable *[compiler]* *[runtime](https://en.wikipedia.org/wiki/Runtime_(program_lifecycle_phase))* checks –– *which are disabled by default* –– that detect and help avoid bugs. If a check fails, a diagnostic message is produced *(at runtime)* explaining the problem.

	Each *[sanitizer]* performs multiple *(different)* checks, for example: the *UndefinedBehaviorSanitizer* –– enabled by *`-fsanitize=undefined`* –– performs all the checks listed [here](https://developer.apple.com/documentation/code_diagnostics/undefined_behavior_sanitizer#topics) (or [here](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html#available-checks) (just another good resource)).

	> *<small>[**Note:** For the better diagnostic messages, compile with the `-g` [compiler] flag; the `-O0` [compiler] flag comes naturally along as well, to disable [compiler] optimizations. - **end note**]</small>*

-	***Enable sanitizer** [checks] **:***

	> ***Synopsis:***
	> ```shell
	> $> <compile-command> [-g -O0] [-fsanitize=<sanitizer-flag> ...]
	> ```
	>
	> ***Option(s):***
    >
    > | Sanitizer                                                                                                             | Flag                    | Description                                                         |
    > | :-------------------------------------------------------------------------------------------------------------------- | ----------------------- | ------------------------------------------------------------------- |
    > | [UndefinedBehaviorSanitizer](https://developer.apple.com/documentation/code_diagnostics/undefined_behavior_sanitizer) | `undefined`             | *A detector for ***undefined behavior***.*                            |
    > | [AddressSanitizer](https://developer.apple.com/documentation/code_diagnostics/address_sanitizer)                      | `address`               | *A detector for ***memory errors*** (e.g. segmentation faults).*      |
    > | [MemorySanitizer](https://clang.llvm.org/docs/MemorySanitizer.html)                                                   | `memory`                | *A detector for ***uninitialized reads***.*                           |
    > | [LeakSanitizer](https://clang.llvm.org/docs/LeakSanitizer.html)                                                       | `leak`                  | *A detector for ***memory leakage***.*                                |
    > | [ThreadSanitizer](https://developer.apple.com/documentation/code_diagnostics/thread_sanitizer)                        | `thread`                | *A detector for ***data-race***.*                                     |
    > | [DataFlowSanitizer](https://clang.llvm.org/docs/DataFlowSanitizer.html)                                               | `dataflow`              | *A general ***data flow analysis***.*                                 |
    > | [Control Flow Integry](https://clang.llvm.org/docs/ControlFlowIntegrity.html)                                         | `cfi`                   | ****Control flow*** checks.*                                          |
    > | [SafeStack](https://clang.llvm.org/docs/SafeStack.html)                                                               | `safe-stack`            | *Protection against ***stack-based memory*** corruption errors.*      |
	>
	> ***Example:***
	> ```shell
	> $> gcc source.c -g -O0 -fsanitize=address -fsanitize=undefined
	> ```

	> *<small>[**Note:***
	>
	> - *It is not possible to have more than one the following sanitizers: *`-fsanitize=address`*, *`-fsanitize=thread`*, and *`-fsanitize=memory`*, at the same time.*
	>
	> - *Not all sanitizers are, always, supported, on all machines. Just try them.*
	>
	> *- **end note**]</small>*


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
## 3.2. Run LLDB
<small>`[Search Tags: >lldb.run >debugger.run >lldbrun >debuggerrun >run.lldb >run.debugger >runlldb >rundebugger]`</small>
<br>
<br>


Run the `lldb` debugger *[program]* by typing *[in your command prompt]*:

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

Contents
---
- [1 Basic Commands](#331-basic-commands)
---

-	`lldb` must *[then]* be informed of which program we intend to debug – this step is referred to as: ***"loading a program"*** . The following subsection explores the basic commands ([§3.3.1](#331-basics)) of loading programs. <br>

	> In `lldb`'s lexicon, a ***"program [executable] intended for debugging"*** is a referred to as a ***"[debugger] target"***.
	>
	> So technically you could say; we are ***loading*** *[`lldb` with]* a ***debugger target***; i.e setting *[`lldb`]* up to target a specific process *(program)*, for debugging/examination-phase.

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
<small>`[Search Tags: >lldbloadcomands >lldb.load.commands >lldbloadcmds >lldb.load.cmds >debuggerloadcomands >debugger.load.commands >debuggerloadcmds >debugger.load.cmds >loadcomands >load.commands >loadcmds >load.cmds >loadbasiccommands >loadbasics >ldbasiccommands >ldbasics >basiccommandsload >basicsload >basiccommandsld >basicsld >loadbasiccmds >loadbasics >ldbasiccmds >ldbasics >basiccmdsload >basicsload >basiccmdsld >basicsld >loadbsccommands >loadbscs >ldbsccommands >ldbscs >bsccommandsload >bscsload >bsccommandsld >bscsld]`</small>
<br>

Commands to:
---
- [1 Create a Target](#create-a-target-ie-load-a-program-executable)
	- [1.1 From outside *\[`lldb`\]*](#from-outside-lldb)
	- [1.2 From inside *\[`lldb`\]*](#from-inside-lldb)
- [2 List Targets](#list-all-targets)
- [3 Select a *[different]* Target](#select-a-different-target-as-current-target)
- [4 Delete a Target](#delete-target-ie-unload-an-program-execuable)
---

-	#### Create a target *(i.e load a program executable)*:

	> <small>`[Search Tags: >crtarget >crttarget >createtarget >targetcreate >ldtarget >lodtarget >loadtarget >targetload >crtargt >crttargt >createtargt >targtcreate >ldtargt >lodtargt >loadtargt >targtload >crtrgt >crttrgt >createtrgt >trgtcreate >ldtrgt >lodtrgt >loadtrgt >trgtload >crtr >crttr >createtr >trcreate >ldtr >lodtr >loadtr >trload]`</small>

	> ##### *From outside [`lldb`]:*
	>
	> > ***Synopsis:***
	> > ```shell
	> > $> lldb --file <program-execuable-filename> [<arg> ...]
	> > ```
	> >
	> > ***Example(s):***
	> > ```shell
	> > $> lldb --file a.out "arg1" "arg2"    # OR
	> > $> lldb -f a.out "arg1" "arg2"        # OR
	> > $> lldb a.out "arg1" "arg2"
	> > ```

	> ##### *From inside [`lldb`]:*
	>
	> > ***Synopsis:***
	> >
	> > ```shell
	> > (lldb) target create <program-execuable-filename>
	> > ```
	> >
	> > ***Example(s):***
	> > ```shell
	> > (lldb) file a.out                   # OR
	> > (lldb) target create a.out          # OR
	> > (lldb) ta cr a.out                  # OR
	> > (lldb) ta c a.out
	> > ```

<br>

-	#### List *(all)* targets:

	> <small>`[Search Tags: >lsttarget >listtarget >lstarget >targetlst >targetlist >targetls >lsttargt >listtargt >lstargt >targtlst >targtlist >targtls >lsttrgt >listtrgt >lstrgt >trgtlst >trgtlist >trgtls >lsttr >listtr >lstr >trlst >trlist >trls >litarget >targetli >litargt >targtli >litrgt >trgtli >litr >trli]`</small>

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

<br>

-	#### Select *[a different]* target *[as current target]*:

	> <small>`[Search Tags: >selcttarget >setarget >selecttarget >targetselect >selcttargt >setargt >selecttargt >targtselect >selcttrgt >setrgt >selecttrgt >trgtselect >selcttr >setr >selecttr >trselect]`</small>

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

<br>

-	#### Delete target *(i.e unload an program execuable)*:

	> <small>`[Search Tags: >detarget >deltarget >deletetarget >targetdelete >detargt >deltargt >deletetargt >targtdelete >detrgt >deltrgt >deletetrgt >trgtdelete >detr >deltr >deletetr >trdelete >ultarget >unltarget >unletetarget >targetunload >ultargt >unltargt >unloadtargt >targtunload >ultrgt >unltrgt >unloadtrgt >trgtunload >ultr >unltr >unloadtr >trunload]`</small>

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

<br>

---

> *<small>[**Section Notes**:*
>
> - "From **outside** *[`lldb`]*"; i.e before, and at the same time as, launch *[of `lldb`] [, on the *[terminal]* command prompt]*.
>
> - "From **inside** *[`lldb`]*"; i.e after launch *[of `lldb`]* *[, on the 	*[`lldb`]* command prompt]*.
>
> - *`[<arg> ...]`* represents the argument(s) that you pass to a program.
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
> *- **end section notes**]</small>*


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


-	`lldb` *[then]* gives you the possibility of setting up [*breakpoints*](https://en.wikipedia.org/wiki/Breakpoint) ([§3.4.1](#341-breakpoints)) –– locations in your program to pause execution at *[and examine the current state of things]* –– and [*watchpoints*](https://en.wiktionary.org/wiki/watchpoint#English) ([§3.4.2](#342-watchpoints)) –– a logger, for certain variables and/or memory-regions, logging *[incoming]* operations (`reads` & `writes`).

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
<small>`[Search Tags: >lldb.breakpoints >debugger.breakpoints >lldbbreakpoints >debuggerbreakpoints >sectionbreakpoint >breakpointsections >sectionbreakpt >breakptsections >sectionbrkpt >brkptsections >sectionbrpt >brptsections >sectionbr >brsections]`</small>
<br>

Contents
---
- [3.4.1.1. Basic Commands](#3411-basic-commands)
- [3.4.1.2. Advanced Commands](#3412-advanced-commands)
- [3.4.1.3. Options](#3413-options)
- [3.4.1.4. Names](#3414-names)
- [3.4.1.5. Multi-Threaded Programs](#3415-multi-threaded-programs)
- [3.4.1.6. C++ Programs](#3416-c-programs)

---

>	*"In software development, a breakpoint is an intentional stopping or pausing place in a program, put in place for debugging purposes. It is also sometimes simply referred to as a 'pause'.*
>
>	*More generally, a breakpoint is a means of acquiring knowledge about a program during its execution. During the interruption, the programmer inspects the test environment (general purpose registers, memory, logs, files, etc.) to find out whether the program is functioning as expected. In practice, a breakpoint consists of one or more conditions that determine when a program's execution should be interrupted. [...]"*
>
>	*––	[Wikipedia :: Breakpoints](https://en.wikipedia.org/wiki/Breakpoint)*

---

The following subsections dive into the ***basic*** ([§3.4.1.1](#3411-basics)) as well as [slightly] more ***advanced commands*** ([§3.4.1.2](#3412-advanced-commands)) *[for operating on breakpoints]*, then into the available ***breakpoint options*** ([§3.4.1.3](#3413-options)) and how to utilise them, also, we discover the [amazing] usefulness and power of ***breakpoint names*** ([§3.4.1.4](#3414-names)) and that of configuring their options, additionally we briefly see the breakpoint facilites for multi-threaded programs ([§3.4.1.5](#3415-multi-threaded-programs)) and, finally, a few ***C++** ([§3.4.1.6](#3416-c-programs)) [specific] **breakpoint commands***.


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


[🏠](#341-breakpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.1. Basic Commands
<small>`[Search Tags: >basicbreakpoint >basicsbreakpoint >breakpointbasics >basicbreakpt >basicsbreakpt >breakptbasics >basicbrkpt >basicsbrkpt >brkptbasics >basicbrpt >basicsbrpt >brptbasics >basicbr >basicsbr >brbasics]`</small>
<br>

Contents
---
- [1 Set Breakpoint on a Function](#set-a-breakpoint-on-a-function)
- [2 Set Breakpoint on Source](#set-a-breakpoint-on-a-source-code-line)
- [3 List Breakpoints](#list-breakpoints)
- [4 Delete Breakpoint(s)](#delete-breakpoints)
---

> *(Basic) Commands for operating on breakpoints.*

<br>

-	#### ***Set a breakpoint, on a function:***

	> <small>`[Search Tags: >brset >setbr >sbr >sebr >breakpointset  >breakpointfunctions >breakpointfuncs >breakpointfts >breakpointfcs >breakpointmain >setbreakpoint >brkptset >setbrkpt >breakptset >setbreakpt >brsetfunctions >brfunctions >brfuncs >brfts >brfcs >brsfunctions >brsfuncs >brsfts >brsfcs >brsmain]`</small>

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

	> *<small>[**Note**: Only the function **itself** has a breakpoint set on it – call-sites [of the said function] are ignored. - **end note**]</small>*

<br>

-	#### ***Set a breakpoint, on a** [source code] **line:***

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

<br>

-	#### ***List breakpoints:***

	> <small>`[Search Tags: >breakpointlist >breakpointls >listbreakpoint >lstbreakpoint >lsbreakpoint >libreakpoint >breakptlist >breakptls >listbreakpt >lstbreakpt >lsbreakpt >libreakpt >brkptlist >brkptls >listbrkpt >lstbrkpt >lsbrkpt >librkpt >brptlist >brptls >listbrpt >lstbrpt >lsbrpt >librpt >brlist >brls >listbr >lstbr >lsbr >libr]`</small>

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint list -[bfv] [<breakpt-id> ...]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint list --brief 3 2    # --brief    (minimum description)
	> (lldb) br l -f 1                      # --full     (full description, default
	> (lldb) br l -v                        # --verbose  (extensive description)
	> ```

<br>

-	#### ***Delete breakpoint(s):***
	> <small>`[Search Tags: >brdelete >deletebr >deletebrpt >deletebrkpt >deletebreakpt >deletebreakpoint >brdelete >brptdelete >brkptdelete >breakptdelete >breakpointdelete >debr >deletebr >deletebreakpoint >brunload >uldbr >breakpointunload >unloadbreakpoint >delbr >brdel >delbrpt >brptdel >delbrkpt >brkptdel >delbreakpt >breakptdel >delbreakpoint >breakpointdel]`</small>


	> ***Synopsis:***
	> ```shell
	> breakpoint delete [<breakpt-ids | breakpt-name>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint delete 5
	> (lldb) br de 1 2 3
	> (lldb) br d                           # delete all breakpts
	> ```

	> *<small>[**Note**:*
	>
	> - *If no breakpoint *[id]* is specified, [the command will] delete them *[the current breakpoints]* all.*
	>
	> - *`lldb`, automatically, deletes breakpoints of targets that are deleted.*
	>
	> *- **end note**]</small>*


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
[🏠](#341-breakpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.2. Advanced Commands
<small>`[Search Tags: >advancedbreakpoint >breakpointadvanceds >advancedbreakpt >breakptadvanceds >advancedbrkpt >brkptadvanceds >advancedbrpt >brptadvanceds >advancedbr >bradvanceds >advbreakpoint >breakpointadvs >advbreakpt >breakptadvs >advbrkpt >brkptadvs >advbrpt >brptadvs >advbr >bradvs]`</small>
<br>

Commands to:
---
- [1 Enable / Disable Breakpoints](#enable--disable-breakpoints)
- [2 Set Breakpoint on Function(s) (using Regex)](#set-a-breakpoint-on-functions-using-regular-expressions)
- [3 Set Breakpoint on Source (using Regex)](#set-a-breakpoint-on-lines-in-files-using-regular-expressions)
- [4 Modify Breakpoint(s)](#modify-existent-breakpoints-options-)

---


> *[A lil' more] Advanced commands for operating on breakpoints.*

<br>

-	#### ***Enable / Disable breakpoints:***

	> <small>`[Search Tags: >breakpointenable >breakptenable >brkptenable >brptenable >brenable >breakpointdisable >breakptdisable >brkptdisable >brptdisable >brdisable >enablebreakpoint >enablebreakpt >enablebrkpt >enablebrpt >enablebr >disablebreakpoint >disablebreakpt >disablebrkpt >disablebrpt >disablebr]`</small>

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint disable [<breakpt-id | breakpt-name> ...]
	> (lldb) breakpoint enable  [<breakpt-id | breakpt-name> ...]
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
	> ```shell
	> (lldb) breakpoint enable 'funcs'   # enable breakpoints who have 'funcs' in their list of names
	> (lldb) br en 'funcs'
	> ```

	> *<small>[**Note**:*
	>
	> - *To enable only certain locations of a logical breakpoint, use the breakpoint disable command, passing the breakpoint ID followed by a dot-separated wildcard character (`*`), e.g.: `1.*` or `3.*`.*
	>
	> - *It is also possible to set, initialy disabled, breakpoints:*
	>
	> 	```shell
	> 	(lldb) breakpoint set <breakpt-definition> [--disable]
	> 	```
	>
	> *- **end note**]</small>*

<br>

-	#### ***Set a breakpoint,** on function(s), **using regular-expressions:***

	> <small>`[Search Tags: >regexftbreakpoint >regexfcbreakpoint >regexfuncbreakpoint >regexfunctionbreakpoint >regexftbreakpt >regexfcbreakpt >regexfuncbreakpt >regexfunctionbreakpt >regexftbrkpt >regexfcbrkpt >regexfuncbrkpt >regexfunctionbrkpt >regexftbrpt >regexfcbrpt >regexfuncbrpt >regexfunctionbrpt >regexftbr >regexfcbr >regexfuncbr >regexfunctionbr >breakpointregexfts >breakpointregexfcs >breakpointregexfuncs >breakpointregexfunctions >breakptregexfts >breakptregexfcs >breakptregexfuncs >breakptregexfunctions >brkptregexfts >brkptregexfcs >brkptregexfuncs >brkptregexfunctions >brptregexfts >brptregexfcs >brptregexfuncs >brptregexfunctions >brregexfts >brregexfcs >brregexfuncs >brregexfunctions]`</small>

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

	> *<small>[**Note**: Function call-sites also count as matches, and get a breakpoint. - **end note**]</small>*

<br>

-	#### ***Set a breakpoint,** on line(s), in file(s), **using regular-expressions:***

	> <small>`[Search Tags: >regexsrcbreakpoint >regexsrcebreakpoint >regexsourcebreakpoint >regexsrcbreakpt >regexsrcebreakpt >regexsourcebreakpt >regexsrcbrkpt >regexsrcebrkpt >regexsourcebrkpt >regexsrcbrpt >regexsrcebrpt >regexsourcebrpt >regexsrcbr >regexsrcebr >regexsourcebr >breakpointregexsrcs >breakpointregexsrces >breakpointregexsources >breakptregexsrcs >breakptregexsrces >breakptregexsources >brkptregexsrcs >brkptregexsrces >brkptregexsources >brptregexsrcs >brptregexsrces >brptregexsources >brregexsrcs >brregexsrces >brregexsources]`</small>

	> ***Synopsis:***
	>
	> ```shell
	> breakpoint set --all-files --source-pattern-regexp <regular-expression>                # Search in all files
	> breakpoint set [--file <files> ...] --source-pattern-regexp <regular-expression>       # Search (only) in specified files
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --all-files --source-pattern-regexp 'return \(FAILURE\);'
	> (lldb) br s -A -p 'return \(FAILURE\);'
	> ```
	> ```shell
	> (lldb) breakpoint set --file 'core.c' --file 'cleanup.c' --source-pattern-regexp 'if \('
	> (lldb) br s -f core.c -f cleanup.c -p 'if \('
	> ```

	> *<small>[**Note:***
	>
	> - *Source file(s) are specified with the `-f` option. The `-f` option can be specified more than once. If no source files are specified, uses the current "default source file".*
	>
	> - *You cannot specific multiple regex-patterns at the same time; i.e you cannot do the following : `... -p <pattern> -p <pattern>`. It [`lldb`] will only search for the last pattern.*
	>
	> *- **end note**]</small>*

<br>

-	#### ***Modify** [existent] **breakpoint(s)** [option(s)] **:***

	> <small>`[Search Tags: >modbreakpoint >modifbreakpoint >mobreakpoint >mbreakpoint >modifybreakpoint >breakpointmodify >modbreakpt >modifbreakpt >mobreakpt >mbreakpt >modifybreakpt >breakptmodify >modbrkpt >modifbrkpt >mobrkpt >mbrkpt >modifybrkpt >brkptmodify >modbrpt >modifbrpt >mobrpt >mbrpt >modifybrpt >brptmodify >modbr >modifbr >mobr >mbr >modifybr >brmodify >brmoattributes >brmoattribs >brmoconditions >brmoconds >brmodifyattributes >brmodifyattribs >brmodifyconditions >brmodifyconds]`</small>

	<br>

	> **Brief**
	>
	> *`modify` lets one modify previously `set` [breakpoint] options [of [existent] breakpoint(s)].*
	>
	> ***Synopsis:***
	> ```shell
	> breakpoint modify <cmd-options> [<breakpt-id | breakpt-name> ...]
	> ```
	>
	> ***Command Options:***
	>
	> | Command Options                 | Abrv. | Description
	> | ------------------------------- | ----- | ---------------------------
	> |||
	> | `--disable`                     | `-d`  | *Disable the breakpoint.*
	> | `--enable`                      | `-e`  | *Enable the breakpoint.*
	> |||
	> | `--condition <condition-expr>`  | `-c`  | *The breakpoint stops only if this condition expression evaluates to true.*
	> |||
	> | `--ignore-count <count>`        | `-i`  | *Set the number of times this breakpoint is skipped before stopping.*
	> | `--auto-continue <boolean>`     | `-G`  | *The breakpoint will auto-continue after running its commands.*
	> | `--one-shot <boolean>`          | `-o`  | *The breakpoint is deleted the first time it stop causes a stop.*
	> |||
	> | `--thread-index <thread-index>` | `-x`  | *The breakpoint stops only for the thread whose index matches this argument.*
	> | `--thread-id <thread-id>`       | `-t`  | *The breakpoint stops only for the thread whose TID matches this argument.*
	> | `--thread-name <thread-name>`   | `-T`  | *The breakpoint stops only for the thread whose thread name matches this argument.*
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint modify --disable 3
	> (lldb) br m -d 3
	> ```
	> ```shell
	> (lldb) breakpoint modify --condition 'ac < 2' --one-shot true 4 2 7
	> (lldb) br m -c 'ac < 2' -o true 4 2 7
	> ```
	> ```shell
	> (lldb) breakpoint modify --condition '' 'controlFlow'     # clears any existent condition, for all breakpoints who have 'controlFlow' in their list of names
	> (lldb) br m -c '' 'controlFlow'
	> ```
	> ```shell
	> (lldb) breakpoint modify --thread-id 6 8                   # change the thread assigned for the breakpoint of id: 8
	> (lldb) br m -t 6 8
	> ```

	> *<small>[**Note:***
	>
	> -	*Passing an empty argument (i.e: `''`) [to flags] clears the modification(s) –– except for `--enable` (`-e`), `--disable` (`-d`) and `--ignore-count` (`-i`) [flags], .*
	>
	> -	*If no breakpoint is specified, acts on the last created breakpoint.*
	>
	> -	*To set/modify breakpoint commands, see [`breakpoint command`](#breakpoint-commands).*
	>
	> *- **end note**]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint set`
> | 2 | Manual Page | LLDB | `(lldb) help breakpoint enable`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint disable`
> | 4 | Manual Page | LLDB | `(lldb) help breakpoint modify`


---
[🏠](#341-breakpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.3. Options
<small>`[Search Tags: >optsbreakpoint >breakpointopts >breakpointops >opsbreakpoint >optionsbreakpoint >breakpointoptions >optsbreakpt >breakptopts >breakptops >opsbreakpt >optionsbreakpt >breakptoptions >optsbrkpt >brkptopts >brkptops >opsbrkpt >optionsbrkpt >brkptoptions >optsbrpt >brptopts >brptops >opsbrpt >optionsbrpt >brptoptions >optsbr >bropts >brops >opsbr >optionsbr >broptions]`</small>
<br>

Commands for:
---
- [1 Breakpoint Conditions](#breakpoint-conditions)
	- [1.1 Set a Conditional Breakpoint](#set-a-conditional-breakpoint)
	- [1.2 Add/Modify Breakpoint Condition](#addmodify-breakpoint-condition-of-an-existing-breakpoint)
- [2 Breakpoint Commands](#breakpoint-commands)
	- [2.1 Add/Modify Commands](#add-modify-breakpoint-commands)
	- [2.2 List Commands](#list-breakpoint-commands)
	- [2.3 Delete Commands](#delete-breakpoint-commands)
- [3 Breakpoint Attributes](#breakpoint-attributes)
	- [3.1 Set a Breakpoint with Attributes](#set-a-breakpoint-with-attributes)
	- [3.2 Add/Modify Breakpoint Attributes](#add-modify-breakpoint-attributes)
---

>	*(**Know that**) –– "Breakpoints carry two orthognal sets of information: one specifies where to set the breakpoint, and the other how to react when the breakpoint is hit. The latter set of information (e.g. commands, conditions hit-count, auto-continue…) we call breakpoint options."*
>
>	*––	[LLDB :: Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)*

---

>	*<small>[**Note**: We'll refer to options that are neither [breakpoint] conditions nor [breakpoint] commands as: *"[breakpoint] attributes"*, e.g.: hit-count, auto-continue, etc… - **end note**]</small>* <br>

---

<br>

- #### Breakpoint Conditions:

	> <small>`[Search Tags: >breakpointsetcondition >breakptsetcondition >brkptsetcondition >brptsetcondition >brsetcondition >breakpointaddcondition >breakptaddcondition >brkptaddcondition >brptaddcondition >braddcondition >conditionbreakpoint >conditionbreakpt >conditionbrkpt >conditionbrpt >conditionbr >breakpointconditions >breakptconditions >brkptconditions >brptconditions >brconditions >breakpointconds >breakptconds >brkptconds >brptconds >brconds]`</small>

	<br>

	- #### Set a conditional breakpoint:

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

	<br>

	- #### Add/Modify breakpoint condition *[of an existing breakpoint]*:

		> ***Synopsis:***
		> ```shell
		> breakpoint modify [--condition <expr>] [<breakpt-id | breakpt-name> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint modify --condition 'my_var == 42' 3     # add condition to breakpt with ID: 3
		> (lldb) br m -c 'my_var == 42' 4 2 8
		> ```
		> ```shell
		> (lldb) breakpoint modify --condition '' 'controlFlow'     # clears any existent condition, for all breakpoints who have 'controlFlow' in their list of names
		> (lldb) br m -c '' 'controlFlow'
		> ```

<br>

- #### Breakpoint Commands:

	> <small>`[Search Tags: >commandbreakpoint >commandsbreakpoint >breakpointcommands >commandbreakpt >commandsbreakpt >breakptcommands >commandbrkpt >commandsbrkpt >brkptcommands >commandbrpt >commandsbrpt >brptcommands >commandbr >commandsbr >brcommands >cmdbreakpoint >cmdsbreakpoint >breakpointcmds >cmdbreakpt >cmdsbreakpt >breakptcmds >cmdbrkpt >cmdsbrkpt >brkptcmds >cmdbrpt >cmdsbrpt >brptcmds >cmdbr >cmdsbr >brcmds >breakpointscrpt >scrptbreakpoint >scriptbreakpoint >breakpointscripts >breakptscrpts >scrptbreakpts >scriptbreakpts >breakptscripts >brkptscrpts >scrptbrkpts >scriptbrkpts >brkptscripts >brptscrpts >scrptbrpts >scriptbrpts >brptscripts >brscrpts >scrptbr >scriptbr >brscript]`</small>

	<br>

	- #### Add/Modify *[breakpoint]* command(s):

		> <small>`[Search Tags: >breakpointaddcommands >breakpointaddcmds >breakpointacmds >breakptaddcommands >breakptaddcmds >breakptadcmds >brkptaddcommands >brkptaddcmds >brkptadcmds >brptaddcommands >brptaddcmds >brptadcmds >braddcommands >braddcmds >bradcmds >breakpointaddscripts >breakpointaddscrpts >breakpointadscrpts >breakptaddscripts >breakptaddscrpts >breakptadscrpts >brkptaddscripts >brkptaddscrpts >brkptadscrpts >brptaddscripts >brptaddscrpts >brptadscrpts >braddscripts >braddscrpts >bradscrpts >breakpointsetcommands >breakpointsetcmds >breakpointacmds >breakptsetcommands >breakptsetcmds >breakptsecmds >brkptsetcommands >brkptsetcmds >brkptsecmds >brptsetcommands >brptsetcmds >brptsecmds >brsetcommands >brsetcmds >brsecmds >breakpointsetscripts >breakpointsetscrpts >breakpointsescrpts >breakptsetscripts >breakptssetscrpts >breakptssescrpts >brkptssetscripts >brkptssetscrpts >brkptssescrpts >brptssetscripts >brptssetscrpts >brptssescrpts >brsetscripts >brsetscrpts >brsescrpts]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint command add [--script-type <type>] [<breakpt-id | breakpt-name> ...]
		> ```
		> Then you are prompted:
		> ```
		> > Enter your debugger command(s). Type 'DONE' to end.
		> > <lldb-command>
		> > <lldb-command>       # one command per line
		> > ...
		> > DONE
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint command add 2 4 1                    # add command to breakpoints [of ID]: 2, 4 and 1
		> Enter your debugger command(s). Type 'DONE' to end.
		> > thread backtrace
		> > frame variable
		> > DONE
		>
		> (lldb) br co a 2 4 1
		> Enter your debugger command(s). Type 'DONE' to end.
		> > bt               # alias, see: help bt
		> > fr v             # shorthand, for "frame variable"
		> > DONE
		> ```
		> ```shell
		> (lldb) breakpoint command add --script-type python 4
		> Enter your Python command(s). Type 'DONE' to end.
		> > print "Hit this breakpoint!"
		> > DONE
		> ```
		> ```shell
		> (lldb) script
		> >>> bp_count = 0
		> >>> quit()
		> ...
		> (lldb) br co add -s python 1.1
		> Enter your Python command(s). Type 'DONE' to end.
		> > global bp_count
		> > bp_count = bp_count + 1
		> > print "Hit this breakpoint " + repr(bp_count) + " times!"
		> > DONE
		> ```

		> *<small>[**Note**:*
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
		> - You can, alternatively, specify one-liner commands with the: `--one-liner` or `-o` option, followed by the desired `<command>`.
		>
		> *- **end note**]</small>*

	<br>

	- #### List *[breakpoint]* command(s):

		> <small>`[Search Tags: >breakpointlistcommands >breakpointlistcmds >breakpointlscmds >breakptlistcommands >breakptlistcmds >breakptlscmds >brkptlistcommands >brkptlistcmds >brkptlscmds >brptlistcommands >brptlistcmds >brptlscmds >brlistcommands >brlistcmds >brlscmds >breakpointlicmds >breakptlicmds >brkptlicmds >brptlicmds >brlicmds >lsbreakptcmds >lsbrkptcmds >lsbrptcmds >lsbreakptcmds >lsbrkptcmds >lsbrptcmds >lstbreakptcmds >lstbrkptcmds >lstbrptcmds >lstbrcmds >listbreakptcmds >listbrkptcmds >listbrptcmds >listbrcmds >lsbrcmds >lsbreakptcommands >lsbrkptcommands >lsbrptcommands >lsbreakptcommands >lsbrkptcommands >lsbrptcommands >lstbreakptcommands >lstbrkptcommands >lstbrptcommands >lstbrcommands >listbreakptcommands >listbrkptcommands >listbrptcommands >listbrcommands >lsbrcommands]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint command list <breakpt-id>
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint command list 1.1
		> (lldb) br co li 1.1
		> ```

	<br>

	- #### Delete *[breakpoint]* command(s):

		> <small>`[Search Tags: >breakpointdeletecommands >breakpointdeletecmds >breakpointdecmds >breakptdeletecommands >breakptdeletecmds >breakptdecmds >brkptdeletecommands >brkptdeletecmds >brkptdecmds >brptdeletecommands >brptdeletecmds >brptdecmds >brdeletecommands >brdeletecmds >brdecmds]`</small>

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

<br>

- #### Breakpoint Attributes:

	> <small>`[Search Tags: >attributebreakpoint >attribbreakpoint >atbbreakpoint >breakpointatbs >breakpointatts >breakpointattributes >breakpointattribs >attributebreakpt >attribbreakpt >atbbreakpt >breakptatbs >breakptatts >breakptattributes >breakptattribs >attributebrkpt >attribbrkpt >atbbrkpt >brkptatbs >brkptatts >brkptattributes >brkptattribs >attributebrpt >attribbrpt >atbbrpt >brptatbs >brptatts >brptattributes >brptattribs >attributebr >attribbr >atbbr >bratbs >bratts >brattributes >brattribs]`</small>

	- #### Set a breakpoint, with attribute(s):

		> ***Synopsis:***
		> ```shell
		> breakpoint set <breakpt-definition> <conditions> [<attribute> <boolean> ...]
		>```
		>
		> ***Command Options:***
		>
		> | Attribute                          | Abrv. | Description
		> | ---------------------------------- | ----- | ------------------------------------
		> | `--ignore-count <count>`           | `-i`  | Set the number of times this breakpoint is skipped before stopping.
		> | `--auto-continue <boolean>`        | `-G`  | The breakpoint will auto-continue after running its commands.
		> | `--one-shot <boolean>`             | `-o`  | The breakpoint is deleted the first time it stops causes a stop.
		> | `--move-to-nearest-code <boolean>` | `-m`  | Move breakpoints to nearest code.
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint set --name foo --ignore-count 5 --one-shot true
		> (lldb) br s -n foo -i 5 -o true
		> ```
		> ```shell
		> (lldb) breakpoint set --name bar --condition 'argc > 3' --auto-continue true --ignore-count 5
		> (lldb) br s -n bar -c 'argc > 3' -G true -i 5
		> ```

	<br>

	- #### Add/Modify breakpoint attributes:

		> ***Synopsis:***
		> ```shell
		> breakpoint modify <attributes> [<breakpt-id | breakpt-name> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint modify --auto-continue true 1.1
		> (lldb) br m -G true 1.1
		> ```
		> ```shell
		> (lldb) breakpoint modify --one-shot true 4 2 7
		> (lldb) br m -o true 4 2 7
		> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint set`
> | 2 | Manual Page | LLDB | `(lldb) help breakpoint command`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint command add`
> | 4 | Manual Page | LLDB | `(lldb) help breakpoint command list`
> | 5 | Manual Page | LLDB | `(lldb) help breakpoint command delete`


[🏠](#341-breakpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.4. Names
<small>`[Search Tags: >namedbreakpoint >nbreakpoint >namesbreakpoint >breakpointnames >namedbreakpt >nbreakpt >namesbreakpt >breakptnames >namedbrkpt >nbrkpt >namesbrkpt >brkptnames >namedbrpt >nbrpt >namesbrpt >brptnames >namedbr >nbr >namesbr >brnames]`</small>
<br>

Commands to:
---
- [1 Add Breakpoint Names](#add-breakpoint-names)
- [2 List Breakpoint Names](#list-breakpoint-names)
- [3 Delete Breakpoint Names](#delete-breakpoint-name)
- [4 Configure Breakpoint Names](#configure-breakpoint-names)
	- [4.1 Disable / Enable](#disbale--enable-named-breakpoints-)
	- [4.2 Condition](#configure-condition)
	- [4.3 Commands](#configure-commands)
	- [4.4 Attributes](#configure-attributes)
	- [4.5 Threads](#configure-assigned-threads)
---

***Breakpoint name*** is an extremely powerful *[`lldb`]* feature. It allows us to create a breakpoint "profile", so to speak, –– a set, of breakpoint options –– referrable by `name`. Later on, when we create *(`set`)* breakpoints, we can choose to have them *[the breakpoints we are creating (`set`'ing)]* inherit *(have added to their list of `names`)* one or more *[profile]* `names`, i.e one or more of these *[pre-defined]* sets of options. Any modification to a *[breakpoint]* profile immediately applies to all breakpoints that inherit that profile *(have that [profile] `name` in their list of [profile] `names`)*.

Breakpoint `names` *(profiles)* live independantly of breakpoints that inherit them, and *[existent]* breakpoints all together, allowing them to persist even after all breakpoints are deleted. Down below are discussed the breakpoint commands used to **create** / **list** / **delete** / **configure** breakpoint `names` *(profiles)* and how to make your breakpoint(s) inherit/be-named *(have added to their list of `names` *(profiles)*)* a `name` *(profile)*.

> *For more on **breakpoint names**, and why they are the best, powerful and modular way of using breakpoints, see: [(Official) Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names).*

---

<br>

-	#### Add breakpoint name(s):

	> <small>`[Search Tags: >breakpointsetnames >breakptsetnames >brkptsetnames >brptsetnames >brsetnames >setbreakpointnames >setbreakptnames >setbrkptnames >setbrptnames >setbrnames >namebreakpoints >namebreakpts >namebrkpts >namebrpts >namebrs >addbreakpointnames >breakpointaddnames >breakpointanames >addbreakptnames >breakptaddnames >breakptanames >addbrkptnames >brkptaddnames >brkptanames >addbrptnames >brptaddnames >brptanames >addbrnames >braddnames >branames >createbreakpointnames >breakpointcreatenames >createbreakptnames >breakptcreatenames >createbrkptnames >brkptcreatenames >createbrptnames >brptcreatenames >createbrnames >brcreatenames]`</small>

	> ***Synopsis:***
	> > *At creation (`set`ing) [of breakpoint]:*
	> > ```shell
	> > breakpoint set <breakpt-definition> --breakpoint-name <breakpt-name>
	> > ```
	>
	> > *After creation (`set`ing) [of breakpoint]:*
	> > ```shell
	> > breakpoint name add --name <breakpt-name> [<breakpt-id | breakpt-name> ...]
	> > ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint name add --name 'controlFlow'
	> (lldb) br n a -N 'controlFlow'
	> ```
	> > *To clarify –– we are just creating an [un-configured] breakpoint name (profile), namely: "`controlFlow`" –– it is (implicitly) `add`ed to the last created (i.e `set`) breakpoint.*
	>
	> ```shell
	> (lldb) breakpoint set --name foo --breakpoint-name 'funcs'
	> (lldb) br s -n foo -N 'funcs'
	> ```
	> > *To clarify –– we are adding a breakpoint name –– namely `'funcs`' –– to the list of names of the breakpoint [as we `set` it].*
	> ```shell
	> (lldb) breakpoint set --all-files --source-pattern-regexp 'return \(FAILURE\);' --breakpoint-name 'failure'
	> (lldb) br s -A -p 'return \(FAILURE\);' -N 'failure'
	> ```
	> > *To clarify –– we are adding a breakpoint name to the list of names of the breakpoint(s) [as we `set` it/them].*
	> ```shell
	> (lldb) breakpoint name add --name 'funcs' 3 2 7
	> (lldb) br n a -N 'funcs' 3 2 7
	> ```
	> > *To clarify –– we are `add`ing a breakpoint name to the list of names of the breakpoints [of id]: 3, 2 and 7.*
	> ```shell
	> (lldb) breakpoint name add --name 'important' 'funcs' 'controlFlow'
	> (lldb) br n a -N 'important' 'funcs' 'controlFlow'
	> ```
	> > *To clarify –– we are adding a breakpoint name to the list of names of the breakpoints that have in their list of names the name: `'funcs'` and/or `'controlFlow'`.*
	>
	> *<small>[**Note:***
	>
	> -	*Every created (`add`'ed) `name`, if not given any `<breakpt-id | breakpt-name>` will (implicitly) be added to [the list of names of] the last created breakpoint –– evidently you must have at least one [existent] breakpoint before creating (`add`'ing) breakpoint `names`.*
	>
	> <br> *- **end note**]</small>*

<!-- 	> ***Tip(s):***
	> > *Idealy (imo), you might create all the breakpoint names (profiles) [you think you will need] at the beginning [of your debugging session]; then configure them [the breakpoint names (profiles)]; and only then start creating (`set`'ing) your breakpoints.*
	> ```shell
	> (lldb) breakpoint name add --name 'func'
	> (lldb) breakpoint name add --name 'return'
	> (lldb) breakpoint name add --name 'controlFlow'
	> (lldb) breakpoint name add --name 'failure'
	> ```
	> > *Then as you create *(`set`)* them [the breakpoints], you can make them [the breakpoints] inherit/be-named (have `add`'ed to their list of `names` (profiles)) those created (`add`'ed) `names` (profiles), using: `--breakpoint-name` or `-N` for short, followed by the `name` [of the profile].* -->

<br>

-	#### ***List** [breakpoint] **names:***

	> <small>`[Search Tags: >libreakpointnames >lsbreakpointnames >listbreakpointnames >breakpointlinames >breakpointlsnames >breakpointlistnames >libreakptnames >lsbreakptnames >listbreakptnames >breakptlinames >breakptlsnames >breakptlistnames >librkptnames >lsbrkptnames >listbrkptnames >brkptlinames >brkptlsnames >brkptlistnames >librptnames >lsbrptnames >listbrptnames >brptlinames >brptlsnames >brptlistnames >librnames >lsbrnames >listbrnames >brlinames >brlsnames >brlistnames >breakpointnamels >breakpointnameli >breakpointnamelist >breakptnamels >breakptnameli >breakptnamelist >brkptnamels >brkptnameli >brkptnamelist >brptnamels >brptnameli >brptnamelist >brnamels >brnameli >brnamelist >breakpointnals >breakpointnls >breakpointnali >breakpointnli >breakpointnalist >breakpointnlist >breakptnals >breakptnls >breakptnali >breakptnli >breakptnalist >breakptnlist >brkptnals >brkptnls >brkptnali >brkptnli >brkptnalist >brkptnlist >brptnals >brptnls >brptnali >brptnli >brptnalist >brptnlist >brnals >brnls >brnali >brnli >brnalist >brnlist]`</small>

	> ***Synopsis:***
	> ```shell
	> breakpoint name list
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint name list
	> (lldb) br n l
	> ```

<br>

-	#### ***Delete** [breakpoint] **name:***

	> <small>`[Search Tags: >debreakpointnames >delbreakpointnames >deletebreakpointnames >breakpointlinames >breakpointlsnames >breakpointdeletenames >debreakptnames >delbreakptnames >deletebreakptnames >breakptlinames >breakptlsnames >breakptdeletenames >debrkptnames >delbrkptnames >deletebrkptnames >brkptlinames >brkptlsnames >brkptdeletenames >debrptnames >delbrptnames >deletebrptnames >brptlinames >brptlsnames >brptdeletenames >debrnames >delbrnames >deletebrnames >brlinames >brlsnames >brdeletenames >breakpointunname >breakptunname >brkptunname >brptunname >brunname >unnamebreakpoints >unnamebreakpts >unnamebrkpts >unnamebrpts >unnamebrs >removebreakpointnames >breakpointremovenames >removebreakptnames >breakptremovenames >removebrkptnames >brkptremovenames >removebrptnames >brptremovenames >removebrnames >brremovenames >breakpointremvenames >breakpointremvnames >breakpointrmvnames >breakpointrmnames >breakptremvenames >breakptremvnames >breakptrmvnames >breakptrmnames >brkptremvenames >brkptremvnames >brkptrmvnames >brkptrmnames >brptremvenames >brptremvnames >brptrmvnames >brptrmnames >brremvenames >brremvnames >brrmvnames >brrmnames >breakpointnamedelete >breakpointnadelete >breakpointndelete >breakptnamedelete >breakptnadelete >breakptndelete >brkptnamedelete >brkptnadelete >brkptndelete >brptnamedelete >brptnadelete >brptndelete >brnamedelete >brnadelete >brndelete]`</small>

	> ***Synopsis:***
	> ```shell
	> breakpoint name delete [--name <breakpt-name>] [<breakpt-id>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint name delete --name 'funcs' 3 2     # remove 'funcs' name from the breakpoints [of id]: 3, 2
	> (lldb) br n d -N 'funcs' 3 2
	> ```
	>
	> *<small>[**Note:** You can only delete a single [breakpoint] `name` at a time [from the list of names of a breakpoint]. - **end note**]</small>*

<br>

-	#### ***Configure** [breakpoint] **names:***

	> <small>`[Search Tags: >confbreakpointnames >configbreakpointnames >confbreakpointnames >configbreakpointnames >configurebreakpointnames >breakpointconfnames >breakpointconfignames >breakpointconfigurenames >confbreakptnames >configbreakptnames >confbreakptnames >configbreakptnames >configurebreakptnames >breakptconfnames >breakptconfignames >breakptconfigurenames >confbrkptnames >configbrkptnames >confbrkptnames >configbrkptnames >configurebrkptnames >brkptconfnames >brkptconfignames >brkptconfigurenames >confbrptnames >configbrptnames >confbrptnames >configbrptnames >configurebrptnames >brptconfnames >brptconfignames >brptconfigurenames >confbrnames >configbrnames >confbrnames >configbrnames >configurebrnames >brconfnames >brconfignames >brconfigurenames >breakpointnconfnames >breakpointnameconfnames >breakpointnconfignames >breakpointnameconfignames >breakpointnconfigurenames >breakpointnameconfigurenames >breakptnconfnames >breakptnameconfnames >breakptnconfignames >breakptnameconfignames >breakptnconfigurenames >breakptnameconfigurenames >brkptnconfnames >brkptnameconfnames >brkptnconfignames >brkptnameconfignames >brkptnconfigurenames >brkptnameconfigurenames >brptnconfnames >brptnameconfnames >brptnconfignames >brptnameconfignames >brptnconfigurenames >brptnameconfigurenames >brnconfnames >brnameconfnames >brnconfignames >brnameconfignames >brnconfigurenames >brnameconfigurenames]`</small>

	> ***Brief:***
	>
	> *`breakpoint name configure` allows to configure the options of breakpoints who have in their list of names anyone of the `<breakpoint-names>` provided.*
	>
	> ***Synopsis:***
	> ```shell
	> breakpoint name configure <cmd-options> [<breakpt-name> ...]       # i.e, expanded below
	> breakpoint name configure <condition> [<command> ...] [<attribute> ...] [<breakpt-name> ...]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint name configure --condition '2 <= ac && ac <= 10' --command bt --command 'fr v' --auto-continue true controlFlow
	> (lldb) br n c -c '2 <= ac && ac <= 10' -C bt -C 'fr v' -G controlFlow
	> ```
	>
	> > *To clarify –– we are asking `lldb` to configure all breakpoints, named `controlFlow`, to break (only) when: `2 <= ac <= 10`, and following a break, to run the following [`lldb`] commands: `bt` and `fr v`, and to then `continue` execution [of the program] automatically.*

	> *<small>[**Note:***
	>
	> - *If you provide a breakpoint id, with the `--breakpoint-id` or `-B` option *[followed by `<breakpt-ids>`]*, the options will be copied from
     the breakpoint, otherwise only the options specified will be set on the name.*
	>
	> <br> *- **end note**]</small>*

	<br>

	> *Deeper Look at Breakpoint Configuration Commands:*
	---

	-	#### ***Disbale / Enable** [named breakpoints] **:***

		> <small>`[Search Tags: >breakpointconfigureenable >breakpointconfiguredisable >configurebreakpointenable >configurebreakpointdisable >breakpointconfigenable >breakpointconfigdisable >configbreakpointenable >configbreakpointdisable >breakpointconfenable >breakpointconfdisable >confbreakpointenable >confbreakpointdisable >breakptconfigureenable >breakptconfiguredisable >configurebreakptenable >configurebreakptdisable >breakptconfigenable >breakptconfigdisable >configbreakptenable >configbreakptdisable >breakptconfenable >breakptconfdisable >confbreakptenable >confbreakptdisable >brkptconfigureenable >brkptconfiguredisable >configurebrkptenable >configurebrkptdisable >brkptconfigenable >brkptconfigdisable >configbrkptenable >configbrkptdisable >brkptconfenable >brkptconfdisable >confbrkptenable >confbrkptdisable >brptconfigureenable >brptconfiguredisable >configurebrptenable >configurebrptdisable >brptconfigenable >brptconfigdisable >configbrptenable >configbrptdisable >brptconfenable >brptconfdisable >confbrptenable >confbrptdisable >brconfigureenable >brconfiguredisable >configurebrenable >configurebrdisable >brconfigenable >brconfigdisable >configbrenable >configbrdisable >brconfenable >brconfdisable >confbrenable >confbrdisable]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint name configure [--disable] [--enable] [<breakpt-name> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint name configure --disable 'funcs'         # disable all breakpoints named: 'funcs'
		> (lldb) br n c -d 'funcs'
		> ```
		> ```shell
		> (lldb) breakpoint name configure --enable 'controlFlow'    # enable all breakpoints named: 'controlFlow'
		> (lldb) br n c -e 'controlFlow'
		> ```

	<br>

	-	#### ***Configure condition:***

		> <small>`[Search Tags: >breakpointconfigureconditions >breakpointconfigureconds >configurebreakpointconditions >configurebreakpointconds >breakpointconfigconditions >breakpointconfigconds >configbreakpointconditions >configbreakpointconds >breakpointconfconditions >breakpointconfconds >confbreakpointconditions >confbreakpointconds >breakptconfigureconditions >breakptconfigureconds >configurebreakptconditions >configurebreakptconds >breakptconfigconditions >breakptconfigconds >configbreakptconditions >configbreakptconds >breakptconfconditions >breakptconfconds >confbreakptconditions >confbreakptconds >brkptconfigureconditions >brkptconfigureconds >configurebrkptconditions >configurebrkptconds >brkptconfigconditions >brkptconfigconds >configbrkptconditions >configbrkptconds >brkptconfconditions >brkptconfconds >confbrkptconditions >confbrkptconds >brptconfigureconditions >brptconfigureconds >configurebrptconditions >configurebrptconds >brptconfigconditions >brptconfigconds >configbrptconditions >configbrptconds >brptconfconditions >brptconfconds >confbrptconditions >confbrptconds >brconfigureconditions >brconfigureconds >configurebrconditions >configurebrconds >brconfigconditions >brconfigconds >configbrconditions >configbrconds >brconfconditions >brconfconds >confbrconditions >confbrconds]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint name configure --condition <condition-epxr> [<breakpt-name> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint name configure --condition 'argc > 2'
		> (lldb) br n c -c 'argc > 2'
		> ```

	<br>

	-	#### ***Configure command(s):***

		> <small>`[Search Tags: >breakpointconfigurecommands >breakpointconfigurecmds >configurebreakpointcommands >configurebreakpointcmds >breakpointconfigcommands >breakpointconfigcmds >configbreakpointcommands >configbreakpointcmds >breakpointconfcommands >breakpointconfcmds >confbreakpointcommands >confbreakpointcmds >breakptconfigurecommands >breakptconfigurecmds >configurebreakptcommands >configurebreakptcmds >breakptconfigcommands >breakptconfigcmds >configbreakptcommands >configbreakptcmds >breakptconfcommands >breakptconfcmds >confbreakptcommands >confbreakptcmds >brkptconfigurecommands >brkptconfigurecmds >configurebrkptcommands >configurebrkptcmds >brkptconfigcommands >brkptconfigcmds >configbrkptcommands >configbrkptcmds >brkptconfcommands >brkptconfcmds >confbrkptcommands >confbrkptcmds >brptconfigurecommands >brptconfigurecmds >configurebrptcommands >configurebrptcmds >brptconfigcommands >brptconfigcmds >configbrptcommands >configbrptcmds >brptconfcommands >brptconfcmds >confbrptcommands >confbrptcmds >brconfigurecommands >brconfigurecmds >configurebrcommands >configurebrcmds >brconfigcommands >brconfigcmds >configbrcommands >configbrcmds >brconfcommands >brconfcmds >confbrcommands >confbrcmds]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint name configure --command <command> [<breakpt-name> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint name configure --command 'bt'
		> (lldb) br n c
		> ```
		> ```shell
		> (lldb) breakpoint name configure --command 'bt' --command 'frame view'
		> (lldb) br n c
		> ```

	<br>

	-	#### ***Configure attribute(s):***

		> <small>`[Search Tags: >breakpointconfigureattributes >breakpointconfigureattribs >configurebreakpointattributes >configurebreakpointattribs >breakpointconfigattributes >breakpointconfigattribs >configbreakpointattributes >configbreakpointattribs >breakpointconfattributes >breakpointconfattribs >confbreakpointattributes >confbreakpointattribs >breakptconfigureattributes >breakptconfigureattribs >configurebreakptattributes >configurebreakptattribs >breakptconfigattributes >breakptconfigattribs >configbreakptattributes >configbreakptattribs >breakptconfattributes >breakptconfattribs >confbreakptattributes >confbreakptattribs >brkptconfigureattributes >brkptconfigureattribs >configurebrkptattributes >configurebrkptattribs >brkptconfigattributes >brkptconfigattribs >configbrkptattributes >configbrkptattribs >brkptconfattributes >brkptconfattribs >confbrkptattributes >confbrkptattribs >brptconfigureattributes >brptconfigureattribs >configurebrptattributes >configurebrptattribs >brptconfigattributes >brptconfigattribs >configbrptattributes >configbrptattribs >brptconfattributes >brptconfattribs >confbrptattributes >confbrptattribs >brconfigureattributes >brconfigureattribs >configurebrattributes >configurebrattribs >brconfigattributes >brconfigattribs >configbrattributes >configbrattribs >brconfattributes >brconfattribs >confbrattributes >confbrattribs]`</small>

		> ***Synopsis:***
		> ```shell
		> breakpoint name configure [-i <boolean>] [-G <boolean>] [-o <boolean>] [<breakpt-name> ...]
		> ```
		>
		> ***Command Options:***
		>
    	> | Attribute                          | Abrv. | Description
    	> | ---------------------------------- | ----- | ------------------------------------
    	> | `--ignore-count <count>`           | `-i`  | Set the number of times this breakpoint is skipped before stopping; this is what is referred to as the *hit-count* option.
    	> | `--auto-continue <boolean>`        | `-G`  | The breakpoint will auto-continue after running its commands.
    	> | `--one-shot <boolean>`             | `-o`  | The breakpoint is deleted the first time it stops causes a stop.
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint name configure --one-shot true 'funcs'
		> (lldb) br n c -o true 'funcs'
		> ```

	<br>

	-	#### ***Configure** [assigned] **thread(s):***

		> <small>`[Search Tags: >breakpointconfigurethrds >breakpointconfigurethreads >configurebreakpointthrds >configurebreakpointthreads >breakpointconfigthrds >breakpointconfigthreads >configbreakpointthrds >configbreakpointthreads >breakpointconfthrds >breakpointconfthreads >confbreakpointthrds >confbreakpointthreads >breakptconfigurethrds >breakptconfigurethreads >configurebreakptthrds >configurebreakptthreads >breakptconfigthrds >breakptconfigthreads >configbreakptthrds >configbreakptthreads >breakptconfthrds >breakptconfthreads >confbreakptthrds >confbreakptthreads >brkptconfigurethrds >brkptconfigurethreads >configurebrkptthrds >configurebrkptthreads >brkptconfigthrds >brkptconfigthreads >configbrkptthrds >configbrkptthreads >brkptconfthrds >brkptconfthreads >confbrkptthrds >confbrkptthreads >brptconfigurethrds >brptconfigurethreads >configurebrptthrds >configurebrptthreads >brptconfigthrds >brptconfigthreads >configbrptthrds >configbrptthreads >brptconfthrds >brptconfthreads >confbrptthrds >confbrptthreads >brconfigurethrds >brconfigurethreads >configurebrthrds >configurebrthreads >brconfigthrds >brconfigthreads >configbrthrds >configbrthreads >brconfthrds >brconfthreads >confbrthrds >confbrthreads]`</small>

		> ***Synopsis:***
		> ```shell
		> (lldb) breakpoint name configure [ --thread-index <index> ] [<breakpt-name> ...]
		>                                  [ --thread-name <name> ]   [<breakpt-name> ...]
		>                                  [ --thread-id <tid> ]      [<breakpt-name> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> (lldb) breakpoint name configure --thread-index 3 'funcs'
		> (lldb) br n c -x 3 'funcs'
		> ```
		> ```shell
		> (lldb) breakpoint name configure --thread-name 'centralServer' 'controlFlow'
		> (lldb) br n c -T 'centralServer' 'controlFlow'
		> ```
		> ```shell
		> (lldb) breakpoint name configure --thread-id 483413 'returns'
		> (lldb) br n c -t 483413 'returns'
		> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial :: Breakpoint Names](https://lldb.llvm.org/use/tutorial.html#breakpoint-names)
> | 2 | Manual Page | LLDB | `(lldb) help breakpoint name`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint name add`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint name list`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint name configure`
> | 3 | Manual Page | LLDB | `(lldb) help breakpoint name delete`


---
[🏠](#341-breakpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.5. Multi-Threaded Programs
<small>`[Search Tags: >breakpointthreads >threadbreakpoint >multithreadedbreakpoint >multithreadbreakpoint >breakptthreads >threadbreakpt >multithreadedbreakpt >multithreadbreakpt >brkptthreads >threadbrkpt >multithreadedbrkpt >multithreadbrkpt >brptthreads >threadbrpt >multithreadedbrpt >multithreadbrpt >brthreads >threadbr >multithreadedbr >multithreadbr]`</small>
<br>
<br>


-	***Set breakpoint, on** [a specific] **thread:***

	> ***Synopsis:***
	> ```shell
	> (lldb) breakpoint set <breakpt-definition> [ --thread-index <index> ]     # by index (in the process)
	> (lldb) breakpoint set <breakpt-definition> [ --thread-name <name> ]       # by name
	> (lldb) breakpoint set <breakpt-definition> [ --thread-id <tid> ]          # by tid (in the computer)
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) breakpoint set --name baz --thread-index 3
	> (lldb) br s -n baz -x 3
	> ```
	> ```shell
	> (lldb) breakpoint set --name foo --thread-name 'centralServer'
	> (lldb) br s -n foo -T 'centralServer'
	> ```
	> ```shell
	> (lldb) breakpoint set --name bar --thread-id 483413
	> (lldb) br s -n bar -t 483413
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint set`


---
[🏠](#341-breakpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.1.6. C++ Programs
<small>`[Search Tags: >breakpointcpp >cppbreakpoint >breakptcpp >cppbreakpt >brkptcpp >cppbrkpt >brptcpp >cppbrpt >brcpp >cppbr >breakpointc++ >c++breakpoint >breakptc++ >c++breakpt >brkptc++ >c++brkpt >brptc++ >c++brpt >brc++ >c++br]`</small>
<br>

Contents
---
- [1 Set Breakpoint on Function (using Fullname)](#set-a-breakpoint-on-functions-using-fullname)
- [2 Set Breakpoint on Function(s) (using Basename)](#set-a-breakpoint-on-functions-using-basename)
- [3 Set Breakpoint on Method(s)](#set-a-breakpoint-on-class-methods)
- [4 Set Breakpoint on *[all]* Exceptions](#set-a-breakpoint-on-all-exceptions-on-catch-andor-throws)
---

-	#### Set a breakpoint, on function(s), using fullname:

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

-	#### Set a breakpoint, on function(s), using basename:

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

	> *<small>[**Note**: Both, **namespace functions** and **class methods** with the given basename will have a breakpoint set on them. - **end note**]</small>*

<br>

-	#### Set a breakpoint, on [class] method(s):

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

-	#### Set a breakpoint, on (all) exceptions [on `catch` and/or `throws`]:

	> <small>`[Search Tags: >breakpointexceptions >breakptexceptions >brkptexceptions >brptexceptions >brexceptions >exceptionsbreakpoint >exceptionsbreakpt >exceptionsbrkpt >exceptionsbrpt >exceptionsbr]`</small>

	> ***Synopsis:***
	> ```shell
	> breakpoint set --language-exception <source-code-language> [--on-catch <true | false>] [--on-throw <true | false>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> breakpoint set --language-exception c++                                        # on default setting
	> br s -E c++
	> ```
	> ```shell
	> breakpoint set --language-exception c++ --on-catch true --on-throw true        # on throws
	> br s -E c++ -h true -w true
	> ```
	>
	> ```shell
	> breakpoint set --language-exception c++ --on-catch True --on-throw False       # on catches
	> br s -E c++ -h True -w False
	> ```

	> *<small>[**Note**:* *To set a breakpoint on specific exception objects, there exists the `--exception-typename` (`-O`) option, but it is unfortunately only supported for **Swift**, at the moment (22/01/2020).* *- **end note**]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help breakpoint set`


---
[🏠](#contents) | [⬅️](#341-breakpoints) | [➡️](#35-start-or-attach-program)
### 3.4.2. Watchpoints
<small>`[Search Tags: >lldb.watchpoints >debugger.watchpoints >lldbwatchpoints >debuggerwatchpoints >secwatchpoint >sectwatchpoint >sectionwatchpoint >watchpointsection >secwatchpt >sectwatchpt >sectionwatchpt >watchptsection >secwapt >sectwapt >sectionwapt >waptsection >secwa >sectwa >sectionwa >wasection]`</small>
<br>

Contents
---
- [3.4.2.1. Basic Commands](#3421-basic-commands)
- [3.4.2.2. Advanced Commands](#3422-advanced-commands)
- [3.4.2.3. Options](#3423-options)
---

>	*(**Definition**) Watchpoint: a (special) kind of breakpoint (debugging mechanism) whereby execution is suspended every time a specified variable or memory-location is accessed for reading and/or writing.*
>
>	*––  [Wikitionary :: Watchpoint](https://en.wiktionary.org/wiki/watchpoint)*

---

> *<small>[**Note**: Before the execution of a [targeted] program, watchpoints can only be set on global variables –– once [the [targeted] program is] launched, watchpoints can be set on any variable/memory-location. - **end note**]</small>*

---

The following subsections dive into the ***basic*** ([§3.4.2.1](#3421-basic-commands)) as well as [slightly] more ***advanced commands*** ([§3.4.2.2](#3422-advanced-commands)) *[for operating on watchpoints]*, then into the available ***watchpoint options*** ([§3.4.2.3](#3423-options)) and how to utilise them.

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

[🏠](#342-watchpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.2.1. Basic Commands
<small>`[Search Tags: >basicwatchpoint >basicswatchpoint >watchpointbasics >basicwatchpt >basicswatchpt >watchptbasics >basicwapt >basicswapt >waptbasics >basicwapt >basicswapt >waptbasics >basicwa >basicswa >wabasics]`</small>
<br>

Commands to:
---
- [1 Set Watchpoint on Variable or Memory-Region](#set-a-watchpoint)
- [2 List Watchpoints](#list-watchpoints)
- [3 Delete Watchpoint(s)](#delete-watchpoints)
---

> *(Basic) Commands for operating on watchpoints.*

<br>

-	#### Set a watchpoint:

	> <small>`[Search Tags: >createwatchpoint >crwatchpoint >sewatchpoint >swatchpoint >watchpointcreates >setwatchpoint >watchpointsets >createwatchpt >crwatchpt >sewatchpt >swatchpt >watchptcreates >setwatchpt >watchptsets >createwapt >crwapt >sewapt >swapt >waptcreates >setwapt >waptsets >createwa >crwa >sewa >swa >wacreates >setwa >wasets]`</small>

	> ***Synopsis:***
	>
	> > *on a variable:*
	> > ```shell
	> > watchpoint set variable [--watch <watch-type>] [--size <byte-size>] <variable-name>
	> > ```
	>
	> > *on an address *[by supplying an expression]*:*
	> > ```shell
	> > watchpoint set expression [--watch <watch-type>] [--size <byte-size>] -- <expr>
	> > watchpoint set expression <expr>
	> > ```
	>
	> ***Option(s):***
	> ```shell
	>  -s <byte-size> ( --size <byte-size> )
	>		Number of bytes to use to watch a region.
	>		Values: 1 | 2 | 4 | 8
	> ```
	> ```shell
	>  -w <watch-type> ( --watch <watch-type> )
	>		Specify the type of watching to perform.
	>		Values: read | write | read_write
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
	> (lldb) wa s v -w write -s 8 -- my_PtrToLongInt
	> ```
	> ```shell
	> (lldb) watchpoint set expression --watch write --size 8 -- my_PtrToLongInt
	> (lldb) wa s e -w write -s 8 -- my_PtrToLongInt
	> ```
	> ```shell
	> (lldb) watchpoint set expression --watch read --size 4 -- 0x00007ffeefbff510
	> (lldb) wa s e -w read -s 4 -- 0x00007ffeefbff510
	> ```

	> *<small>[**Note**:*
	>
	> *We say:*
	>
	> - *`breakpoint set variable` – sets watctpoints to watch for `<watch-type>` accesses on the `<size>`-byte **variable**, `<variable-name>`.*
	>
	> - *`breakpoint set expression` – sets watctpoints to watch for `<watch-type>` accesses on the `<size>`-byte **region, pointed to by the address** `<expr>`.*
	>
	> *- **end note**]</small>*

<br>

-	#### List watchpoints:

	> <small>`[Search Tags: >watchpointlist >watchpointls >listwatchpoint >lstwatchpoint >lswatchpoint >liwatchpoint >watchptlist >watchptls >listwatchpt >lstwatchpt >lswatchpt >liwatchpt >waptlist >waptls >listwapt >lstwapt >lswapt >liwapt >walist >wals >listwa >lstwa >lswa >liwa]`</small>

	> ***Synopsis:***
	> ```shell
	> watchpoint list -[bfv] [<watchpt-ids>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) watchpoint list -b 4 5 2       # --brief    (minimum description)
	> (lldb) wa l -f 8                      # --full     (full description, default)
	> (lldb) w l -v                         # --verbose  (extensive description)
	> ```

<br>

-	#### Delete watchpoint(s):

	> <small>`[Search Tags: >wadelete >deletewa >deletewapt >deletewatchpt >deletewatchpoint >wadelete >waptdelete >watchptdelete >watchpointdelete >dewa >deletewa >deletetarge >waunload >unloadwatchpoints >uldwatchpoints >watchpointunload >unloadwatchpoint >delwa >wadel >delwapt >waptdel >delwatchpt >watchptdel >delwatchpoint >watchpointdel]`</small>

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

	> *<small>[**Note**: If no watchpoints are specified, delete them all. - **end note**]</small>*


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
[🏠](#342-watchpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.2.2. Advanced Commands
<small>`[Search Tags: >advancedwatchpoint >watchpointadvanceds >advancedwatchpt >watchptadvanceds >advancedwapt >waptadvanceds >advancedwa >waadvanceds >advwatchpoint >watchpointadvs >advwatchpt >breakptadvs >advwapt >waptadvs >advwa >waadvs]`</small>
<br>

Commands to:
---
- [1 Enable / Disable Watchpoints](#enable--disable-watchpoints)
---

> *[A lil' more] Advanced commands for operating on watchpoints.*

<br>

-	### Enable / Disable watchpoints:

	> <small>`[Search Tags: >watchpointenable >watchptenable >waptenable >waenable >watchpointdisable >watchptdisable >waptdisable >wadisable >enablewatchpoint >enablewatchpt >enablewapt >enablewa >disablewatchpoint >disablewatchpt >disablewapt >disablewa]`</small>

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
	> (lldb) watchpoint enable 2 6 3.2    # enable watchpoints: 2, 6 and 3.2
	> (lldb) br en 2 6 3.2
	> ```

	> *<small>[**Note**:*
	>
	> - *To enable only certain locations of a logical watchpoint, use the watchpoint disable command, passing the watchpoint ID followed by a dot-separated wildcard character (*), e.g. `1.*` or `3.*`.*
	>
	> - *It is also possible to set, initialy disabled, watchpoints:*
	>
	> 	```shell
	> 	(lldb) watchpoint set <watchpt-definition> [--disable]
	> 	```
	>
	> *- **end note**]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help watchpoint enable`
> | 2 | Manual Page | LLDB | `(lldb) help watchpoint disable`


---
[🏠](#342-watchpoints) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
#### 3.4.2.3 Options
<small>`[Search Tags: >optswatchpoint >watchpointopts >watchpointops >opswatchpoint >optionswatchpoint >watchpointoptions >optswatchpt >watchptopts >watchptops >opswatchpt >optionswatchpt >watchptoptions >optswapt >waptopts >waptops >opswapt >optionswapt >waptoptions >optswa >waopts >waops >opswa >optionswa >waoptions]`</small>
<br>

Commands to:
---
- [1 Add/Modify Watchpoint Conditions](#addmodify-watchpoint-condition)
- [2 Add/Modify Watchpoint Commands](#addmodify-watchpoint-commands)
- [3 Add/Modify Watchpoint Attributes](#addmodify-watchpoint-attributes)
---

>	*<small>[**Note**: We'll refer to options that are neither [watchpoint] conditions nor [watchpoint] commands as: *"[watchpoint] attributes"* - **end note**]</small>* <br>

---

<br>

-	#### Add/modify [watchpoint] condition:

	> ***Synopsis:***
	> ```shell
	> watchpoint modify --condition <condition-expr> [<watch-id> ...]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> watchpoint modify --condition 'my_var > 10' 1
	> wa mo -c 'my_var > 10' 1
	> ```
	> ```shell
	> watchpoint modify --condition 'my_ptr == NULL' 2
	> wa mo -c 'my_ptr == NULL' 2
	> ```
	> ```shell
	> watchpoint modify --condition '' 1        # clear watchpoint condition
	> wa mo -c '' 1
	> ```

<br>

-	#### Add/modify [watchpoint] command(s):

	> `watchpoint command` is identical to [`breakpoint command`](#breakpoint-commands) –– it goes without saying, simply replace `breakpoint` with `watchpoint`.

<br>

-	#### Add/modify [watchpoint] attribute(s):

	> *Watchpoints can only add the `ignore-count` attribute; i.e the number of times this watchpoint is skipped before stopping.*

	> ***Synopsis:***
	> ```shell
	> watchpoint ignore --ignore-count <count> [<watchpt-id> ...]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> watchpoint ignore --ignore-count 10 3 7 6
	> wa i -i 10 3 7 6
	> ```
	>
	> *<small>[**Note:** If no watchpoints are specified, set them all. - **end note**]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help watchpoint modify`
> | 2 | Manual Page | LLDB | `(lldb) help watchpoint command`
> | 3 | Manual Page | LLDB | `(lldb) help watchpoint command add`
> | 4 | Manual Page | LLDB | `(lldb) help watchpoint command list`
> | 5 | Manual Page | LLDB | `(lldb) help watchpoint command delete`
> | 1 | Manual Page | LLDB | `(lldb) help watchpoint ignore`


---
[🏠](#contents) | [⬅️](#342-watchpoints) | [➡️](#36-graphical-user-interface-gui)
## 3.5. Start Debugging
<small>`[Search Tags: >lldb.startdebug >lldb.debug >debugger.startdebug >debugger.debug >lldbstartdebug >lldbdebug >debuggerstartdebug >debuggerdebug >startdebugging >strtdebugging >startlldbdebuggings >startprogram >startprocess >startprogdebugging >startprcsdebugging]`</small>
<br>
<br>


-	There are two ways to start debugging a process (running program):

	-  [`launch`](#351-launch-program)     – Launching one ([§3.5.1](#351-launch-program))
	-  [`attach`](#352-attach-to-program)  – Attaching to *[an already running]* one ([§3.5.2](#352-attach-to-program))

-	Also, with regards to programs that are `launched gives the possibility of configuring things like: where you want the process to be run *(terminal, shell)*, setting environment variables, setting the current working directory, redirecting `stdin`/`out`/`err`, etc – all of which is dicussed in **Advanced Program Configurations** ([§3.5.3](#353-advanced-program-configurations)).


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help process [<command>]`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
### 3.5.1. Launch
<small>`[Search Tags: >prlasection >prsection >processsection >prcssection lasection >lnchsection >lchsection >launchsection >launchprocess >launchprcs >lprocess >lnchprcs >launchprograms >launchprogs >lprograms >lnchprgs >laprogs >laprs >laprs >programlaunch >progrmlaunch >proglaunch >programlnch >progrmlnch >proglnch >programla >progrmla >progla >processlaunch >prcslaunch >processlnch >prcslnch >processla >prcsla >prlaunch >prlnch >prla]`</small>
<br>

Contents
---
- [1 Launch Command](#launch-a-program)
- [2 Launch Configurations](#launch-configurations)
  - [2.1 Run *[program]* in *[different]* Shell or Terminal](#run-program-in-different-shell-or-terminal)
  - [2.2 Set Environment Variables](#set-environment-variables)
  - [2.3 Set Current Working Directory *(`cwd`)*](#set-current-working-directory-cwd)
  - [2.4 Redirect Standard Data Streams (`in`/`out`/`err`)](#redirect-program-standard-inouterr-streams)
---

-	#### Launch *[a program]*:

	> ***Synopsis:***
	>
	> ```shell
	> process launch -- [<arg> ...]
	> run [<arg> ...]                                    # alias
	> r [<arg> ...]                                      # alias
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) process launch                              # without arguments
	> (lldb) pr la -- "arg1" "arg2" "youGetThePoint"     # with arguments
	> (lldb) run "arg1" "arg2" "youGetThePoint"          # with arguments
	> (lldb) r                                           # without arguments
	> ```

	> *<small>[***Note:****
	>
	> - *`run`* is an alias for *'`process launch --shell-expand-args true --`'* , see *`h run`*.
	>
	> - *`r`* is an alias for *`'run'`* , see *`h r`*.
	>
	> *- **end note**]</small>*

---

-	#### Launch configurations:

	> <small>`[Search Tags: >configlaunchprocess >launchprocessconfigurations >configlaunchprcs >launchprcsconfigurations >configlprocess >lprocessconfigurations >configlnchprcs >lnchprcsconfigurations >configlaunchprograms >launchprogramsconfigurations >configlaunchprogs >launchprogsconfigurations >configlprograms >lprogramsconfigurations >configlnchprgs >lnchprgsconfigurations >configlaprogs >laprogsconfigurations >configlaprs >laprsconfigurations >configlaprs >laprsconfigurations >configprogramlaunch >programlaunchconfigurations >configprogrmlaunch >progrmlaunchconfigurations >configproglaunch >proglaunchconfigurations >configprogramlnch >programlnchconfigurations >configprogrmlnch >progrmlnchconfigurations >configproglnch >proglnchconfigurations >configprogramla >programlaconfigurations >configprogrmla >progrmlaconfigurations >configprogla >proglaconfigurations >configprocesslaunch >processlaunchconfigurations >configprcslaunch >prcslaunchconfigurations >configprocesslnch >processlnchconfigurations >configprcslnch >prcslnchconfigurations >configprocessla >processlaconfigurations >configprcsla >prcslaconfigurations >configprlaunch >prlaunchconfigurations >configprlnch >prlnchconfigurations >configprla >prlaconfig >launchconfigurations >launchconfigs >lnchconfigurations >lnchconfigs >laconfigurations >laconfigs]`</small>

	<br>

	-	#### Run *[program]* in *[different]* shell or terminal:

		> <small>`[Search Tags: >termlaunchprocesses >termlaunchprograms >terminallaunchprocesses >terminallaunchprograms >shelllaunchprocesses >shelllaunchprograms >launchshell >shelllaunch >launchshll >shlllaunch >launchterminal >terminallaunch >lnchshell >shelllnch >lnchshll >shlllnch >lnchterminal >terminallnch >lashell >shellla >lashll >shllla >laterminal >terminalla >launchconfigshell >shellconfiglaunch >launchconfigshll >shllconfiglaunch >launchconfigterminal >terminalconfiglaunch >lnchconfigshell >shellconfiglnch >lnchconfigshll >shllconfiglnch >lnchconfigterminal >terminalconfiglnch >laconfigshell >shellconfigla >laconfigshll >shllconfigla >laconfigterminal >terminalconfigla >termlaunch >termlnch >termla >termconfiglaunch >termconfiglnch >termconfigla]`</small>

		> ***Synopsis:***
		> ```shell
		> process launch --shell=[<filename>] -- [<arg> ...]   # shell
		> process launch --tty -- [<arg> ...]                  # terminal
		> ```
		>
		> ***Example(s):***
		> ```shell
		> process launch --shell=/dev/ttys002 -- "arg1" "arg2"
		> pr la -c=/dev/ttys003
		> ```
		> ```shell
		> (lldb) process launch --tty -- "arg1" "arg2"
		> (lldb) pr la -t
		> ```

		> *<small>[**Note**: Not supported on all platforms. - **end note**]</small>*

	<br>

	-	#### Set environment variables:

		> <small>`[Search Tags: >envlaunchprocesses >envlaunchprograms >environmentlaunchprocesses >environmentlaunchprograms >launchenvironment >environmentlaunch >lnchenvironment >environmentlnch >laenvironment >environmentla >launchconfigenvironment >environmentconfiglaunch >lnchconfigenvironment >environmentconfiglnch >laconfigenvironment >environmentconfigla >envlaunch >envlnch >envla >envconfiglaunch >envconfiglnch >envconfigla >configenvironment >configureenvironment]`</small>

		> ***Synopsis:***
		> ```shell
		> process launch --environment <NAME>=<VALUE> -- [<arg> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> process launch --environment BIG_ENDIAN=true -- "arg1"
		> pr la -v BIG_ENDIAN=true -- "arg1"
		> ```
		> ```shell
		> process launch --environment GREET="hello" --environment FAREWELL="bye" -- "arg1" "arg2"
		> pr la -v GREET="hello" -v FAREWELL="bye" -- "arg1" "arg2"
		> ```

	<br>

	-	#### Set current working directory *(`cwd`)*:

		> <small>`[Search Tags: >cwdlaunchprocesses >cwdlaunchprograms >cwdlaunch >cwdlnch >cwdla >cwdlaunchprocesses >cwdlaunchprograms >cwdconfiglaunch >cwdconfiglnch >cwdconfigla >launchcwd >lnchcwd >lacwd >launchconfigcwd >lnchconfigcwd >laconfigcwd >configcwd >configurecwd]`</small>

		> ***Synopsis:***
		> ```shell
		> process launch --working-dir <directory> -- [<arg> ...]
		> ```
		>
		> ***Example(s):***
		> ```shell
		> process launch --working-dir /Volumes/Driver/Core/ -- "arg1" "arg2"
		> pr la -w /Volumes/Driver/Core/ -- "arg1" "arg2"
		> ```

	<br>

	-	#### Redirect *[program]* [standard in/out/err streams](https://en.wikipedia.org/wiki/Standard_streams):

		> <small>`[Search Tags: >redirstreams >redirstdstreams >redirectprstdstreams >redirectprogstreams >redirectprogstdstreams >redirprcsstreams >redirprcsstdstreams >redirprogramstdstreams >redirprogramstreams >redirectprogramstdstreams >redirectprogramstreams redirectprocessstreams >redirectprocessstdstreams redirstreams >redirectstreams >redirlaunchprocesses >redirectlaunchprocesses >redirlaunchprograms >redirectlaunchprograms >redirlaunch >redirectlaunch >redirlnch >redirectlnch >redirla >redirectla >redirlaunchprocesses >redirectlaunchprocesses >redirlaunchprograms >redirectlaunchprograms >redirconfiglaunch >redirectconfiglaunch >redirconfiglnch >redirectconfiglnch >redirconfigla >redirectconfigla >launchredirectstreams >launchredirectstdstreams >lnchredirectstreams >lnchredirectstdstreams >laredirectstreams >laredirectstdstreams >launchconfigredirectstreams >launchconfigredirectstdstreams >lnchconfigredirectstreams >lnchconfigredirectstdstreams >laconfigredirectstreams >laconfigredirectstdstreams >configredirectstreams >configredirectstdstreams >configureredirectstreams >configureredirectstdstreams >processlaunchredirectstdstreams >processlaunchredirectstreams >prcslaunchredirectstdstreams >prcslaredirectstdstreams >prlaredirectstdstreams >prlaredirstdstreams >prlaredirstdstdstreams >prcslnchredirectstdstreams >prcslaunchredirectstreams >prcslaredirectstreams >prlaredirectstreams >prlaredirstreams >prlaredirstdstreams >prcslnchredirectstreams]`</small>

		> ***Synopsis:***
		>
		> ```shell
		> process launch [--stdin <filename>] [--stdout <filename>] [--stderr <filename>] -- [<arg> ...]
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

		> *<small>[**Note**:*
		>
		> - **To clarify [, this [last] example] ––* <br>*
		>
		>	- *we redirect *[the]* standard input *[stream]* (`stdin`) *[of the program]* to *(i.e to be or come or be-given from or originate from)* a *[terminal [device]]* file, by the name of: `/dev/ttys001` – this is a running *[terminal]* shell *[instance]*, <br>*
		>	- *we redirect the standard output (`stdout`) to *[be written/printed to]* a `.log` file, by the name of: "`outFile`", <br>*
		>	- *we do the same *[, as `stdout`,]* with the standard error (`stderr`), this time, the file goes by the name: "`errFile`", <br>*
		>	- *we delimit the *`lldb`* command options that we have given, from *[, that which we will give as,]* program arguments, with: "` -- `" *[,  `lldb`*'s parser delimiter], <br>*
		>	- *we pass *[to our program]* three arguments.*
		>
		> <br> *- **end note**]</small>*
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
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
### 3.5.2. Attach
<small>`[Search Tags: >atsection >atchsection >achsection >attchsection >attachsection >attchprocess >attachprocess >attchprcs >attachprcs >aprocess >atchprcs >attchprograms >attachprograms >attchprogs >attachprogs >aprograms >atchprgs >atprogs >attchprs >attachprs >programattch >programattach >progrmattch >progrmattach >progattch >progattach >programatch >progrmatch >progatch >programat >progrmat >progat >processattch >processattach >prcsattch >prcsattach >processatch >prcsatch >processat >prcsat >prattch >prattach >pratch >prat]`</small>
<br>
>lldbattachprocess >lldbattachprogram >lldbattachtoprocess >lldbattachtoprogram >lldb.attachprocess >lldb.attachprogram >lldb.attachtoprocess >lldb.attachtoprogram >debuggerattachprocess >debuggerattachprogram >debuggerattachtoprocess >debuggerattachtoprogram >debugger.attachprocess >debugger.attachprogram >debugger.attachtoprocess >debugger.attachtoprogram

Contents
---
- [1 Attach to Process](#attach-to-process)
- [2 Attach to Remote Process](#attach-to-remote-process)
---

> ***TL;DR:*** <br>
> *"Attach" means, take over control of a process (running program), at the instruction that the process has reached.*

---

> ***FULL:*** <br>
> *Every time you start a new application, you create one or more processes. A process is simply executable code that is loaded into memory. The CPU reads and executes the instructions to perform the tasks you ask the application to do. When the CPU loads your application into memory, it assigns each process the application creates a Process IDentifier (PID), which is pronounced pid (think of lid with a p instead of an l). The PID is simply a number associated with the process for easy identification.*

>	*In most cases, you debug an application by running it in the IDE in debug mode. However, there are some situations where you must debug the application in a different way — by attaching to its process. ***Attaching to the process means telling the CPU to send the instructions in the executable code to a debugger before they’re executed by the CPU.*** In other words, you place the debugger between the executable code and the CPU.*
>
> *––	[Attaching to a Running Process Using CodeBlocks](https://www.dummies.com/programming/cpp/attaching-to-a-running-process-using-codeblocks/)*

---

<br>

> *Command for attaching to processes:*

-	#### Attach to process:

	> ***Synopsis:***
	>
	> ```shell
	> process attach [--pid <pid>]                           # by process identifier (pid)
	> process attach [--wait-for] [--name <program-name>]    # by program name
	> ```
	>
	> *****Example(s):*****
	> ```shell
	> (lldb) process attach --pid 2432                   # attach to currently running process by identifier (pid)
	> (lldb) pr a -p 2432
	> ```
	> ```shell
	> (lldb) process attach --name a.out                 # attach to currently running process by program name
	> (lldb) pr a -n a.out
	> ```
	> ```shell
	> (lldb) process attach --waitfor --name a.out       # wait for, and, attach to, the next process, whose program name is: 'a.out'
	> (lldb) pr a -w -n a.out
	> ```

<br>

-	#### Attach to remote process:

	> ***Brief:***
	>
	> *Connect to a process via remote GDB server. If no host is specifed, localhost is assumed.*
	>
	> ***Synopsis:***
	>
	> ```shell
	> gdb-remote <host>:<port>
	> ```
	>
	> *****Example(s):*****
	> ```shell
	> (lldb) gdb-remote 8000
	> ```
	> > *To clarify –– we attach to a remote GDB protocol server running on the **local system** (i.e `localhost`), port `8000`.*
	>
	> ```shell
	> (lldb) gdb-remote eorgadd:8000
	> ```
	> > *To clarify –– Attach to a remote GDB protocol server running on the system **`eorgadd`**, port `8000`.*
	>
	> ```shell
	> (lldb) gdb-remote 216.3.128.12:8000
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help process attach`
> | 2 | Manual Page | LLDB | `(lldb) help gdb-remote`
> | 3 | Documentation | Apple | [GDB and LLDB Command Examples](https://developer.apple.com/library/archive/documentation/IDEs/Conceptual/gdb_to_lldb_transition_guide/document/lldb-command-examples.html)
> | 4 | Encyclopedia | Wikipedia | [`gdbserver`](https://en.wikipedia.org/wiki/Gdbserver)
> | 5 | Documentation | `sourceware.org/gdb` | [Using the `gdbserver` Program](https://sourceware.org/gdb/current/onlinedocs/gdb/Server.html)
> | 6 | Tutorial | TheGeekStuff | [How to Debug Programs on Remote Server using GDBServer Example](https://www.thegeekstuff.com/2014/04/gdbserver-example/)

---
[🏠](#contents) | [⬅️](#35-start-or-attach-program) | [➡️](#38-examine-execution)
## 3.6. Graphical User Interface (GUI)
<small>`[Search Tags: >lldbgui >lldbgraphicalui >lldbgraphicaluserinterface >lldb.gui >lldb.graphicalui >lldb.graphicaluserinterface >debuggergui >debuggergraphicalui >debuggergraphicaluserinterface >debugger.gui >debugger.graphicalui >debugger.graphicaluserinterface >graphicaluserinterface >graphicalui >userinterface >interface >gmode >graphicalmode >gumode >guimodes >modegui >modegraphicaluserinterface >graphicaluserinterfacemodes]`</small>
<br>


Contents
---
- [About](#about)
- [Usage Commands *[Help Menus]*](#361-usage-commands)
	- [Common Commands](#common-help-menu)
	- [Source Commands](#source-code-help-menu)
	- [Variables & Registers Commands](#variables--registers-help-menu)
	- [Backtrace Commands](#backtrace-help-menu)
---

## About

-	The graphical user interface *[mode of `lldb`]*, or `gui` for short, is what it says it is –– namely, a user interface for `lldb` that is **graphical** *[, rather than textual (**command prompt**)]*.

-	Its advantages are **MASSIVE**. Here are a few:

	- You no longer have to constantly auto/man-ually print the source code, value of variables/registers and backtrace, after every instruction/line executed.
	- You can quickly & with little to no effort navigate through code, variables/registers, threads, stack frames.
	- You can see the value of variables/registers in different formats: from decimal, to hex, to binary, etc...
	- You can enjoy a graphical layout, who doesn't rather have that ? –– *Yeah, cause you're weird.*

	There are more... but this should suffice.

-	*[Anyways]* Here's what it looks like:

	> ![`gui` Demo (Small Screen)](https://media.giphy.com/media/jTlQ2YG0RWDUrNteFM/giphy.gif)

	> *This is a small terminal window only in order to be able to make a `gif` who's text is discernable. Realistically, on a bigger terminal screen, it'll look like this:*

	> ![`gui` Demo (Big Screen)](https://media.giphy.com/media/jQUmfQ8eXuWE0L2tMB/giphy.gif)

-	It *[the `gui`]* has 3 *[by default, but up to 4]* screen subdivisions, called views (or window panes):

    | Window Pane            | Description
    | :--------------------- | :-----------------
    | Source                 | Displays, *[currently executing]* and surrounding, *[assembly]* instructions, or if the `-g` flag was used *[in compilation]*, source code.
    | Variables              | Displays variables *[, belonging to the current stack frame, ]* and their currently held values.
    | Registers              | Displays registers *[, belonging to the current stack frame, ]* and their currently held values. <!-- POTENTIAL-MISTAKE: Do stack frames have different registers ? -->
    | Backtrace *(Threads & Stack Frames)* | Displays the process's current threads and their stack frames.

	> *<small>[**Note:***
	>
	> -	*The "registers" window pane is not visible on entry of the `gui`, you must toggle it on, from: `>Source Code View > Top Menu > Views > Registers`.*
	>
	>	![Toggle Register View](../Assets/LLDB/toggle-register-view.png)
	>
	> *- **end note**]</small>*


---
[🏠](#contents) | [⬅️](#35-start-or-attach-program) | [➡️](#38-examine-execution)
## 3.6.1. Usage Commands
<small>`[Search Tags: >guiusagecommands >guiusagecmds >usagecommandsgui >usagecmdsgui >graphicaluserinterfaceusagecommands >graphicaluserinterfaceusagecmds >usagecommandsgraphicaluserinterface >usagecmdsgraphicaluserinterface >guicommands >guicmds >commandsgui >cmdsgui >graphicaluserinterfacecommands >graphicaluserinterfacecmds >commandsgraphicaluserinterface >cmdsgraphicaluserinterface]`</small>
<br>


-	#### Enter & Exit `GUI` *[mode]*:

	> <small>`[Search Tags: >entergui >entergraphicaluserinterface >quitgui >closegui >leavegui exitgui >quitgraphicaluserinterface >closegraphicaluserinterface >leavegraphicaluserinterface >exitgraphicaluserinterface]`</small>

	*[After starting your program,]* to enter `GUI` *[mode]*, type "`gui`" *[in the `lldb` command prompt]* –– like so:

	> ```shell
	> (lldb) run [<arg> ...]
	> .
	> .
	> .
	> (lldb) gui
	> ```

	To leave `GUI` *[mode]*, press *[the]* `esc` *(escape) [key] –– from anywhere, and any window pane*.

	> ```shell
	> Press, 'esc'.
	> ```

<!--
	To enter to the graphical user interface (`gui`) mode, type *[in the `lldb` command prompt]*: `gui` –– like so:

	>
	> ```shell
	> (lldb) gui
	> ```
 -->

<!--
	To exit *[when in `gui` mode]*, ***press "`esc`"*** *(escape)* –– then wait about a second, it will automatically bring you back to the textual mode, to the *[`lldb`]* command prompt.
 -->

<br>

-	#### Common *[Help Menu]*:

	> <small>`[Search Tags: >commonguihelpmenu >commonguimenu >commonguipage >commonhelpmenu >commonmenu >commonpage >generalguihelpmenu >generalguimenu >generalguipage >generalhelpmenu >generalmenu >generalpage >guigeneralhelpmenupage >guigeneralmenuhelppage >guigeneralmenuhelppage >helpmenupageguigeneral >menuhelppageguigeneral >menuhelppageguigeneral >helpmenupagegeneral >menuhelppagegeneral >menuhelppagegeneral >helpmenugeneral >menuhelpgeneral >menuhelpgeneral >helpgeneral >menugeneral >generalhelpmenupage >generalmenuhelppage >generalmenuhelppag >guigeneralcommands >guigeneralcmds >commandsguigeneral >cmdsguigeneral >commandsgeneral >cmdsgeneral >generalcommands >generalcmds >generalpage >generalpage >pagegeneral >pagegeneral >commonhelpmenupage >commonmenuhelppage >commonmenuhelppage >common >common >common >common >common >common >common >common >common >common >common >commonhelpmenupage >commonmenuhelppage >commonmenuhelppag >commoncommands >commoncmds >common >common >common >common >commoncommands >commoncmds >commonpage >commonpage >common >common]`</small>

	> | Key        | Action                                             |
	> | :--------- | :------------------------------------------------- |
	> |        tab | Select next view                                   |
	> |          h | Show help dialog with view specific key bindings   |
	> |          , | Page up                                            |
	> |          . | Page down                                          |
	> |         up | Select previous                                    |
	> |       down | Select next                                        |
	> |       left | Unexpand or select parent                          |
	> |      right | Expand                                             |
	> |    page-up | Page up                                            |
	> |  page-down | Page down                                          |
	> |        esc | Quit `gui` mode                                    |

	> *<small>[**Note:** Aside from these common keyboard shortcut commands, views also have specific keyboard shortcut commands of their own, press `h` to open a dialog to display them.*
	>
	>	- Here are the remaining *[view]* help menus:
	>
	> 		1. [Source Help Menu](#source-code-help-menu)
	> 		1. [Variables & Registers Help Menu](#variables--registers-help-menu)
	> 		1. [Backtrace Help Menu](#backtrace-help-menu)
	>
	> <br> *- **end note**]</small>*

<br>

-	#### Source Code *[Help Menu]*:

	> <small>`[Search Tags: >srcguihelpmenu >srcguimenu >srcguipage >srchelpmenu >srcmenu >srcpage >sourceguihelpmenu >sourceguimenu >sourceguipage >sourcehelpmenu >sourcemenu >sourcepage>sourcecodeguihelpmenu >sourcecodeguimenu >sourcecodeguipage >sourcecodehelpmenu >sourcecodemenu >sourcecodepage>guisourcecodehelpmenupage >guisourcecodemenuhelppage >guisourcecodemenuhelppage >helpmenupageguisourcecode >menuhelppageguisourcecode >menuhelppageguisourcecode >helpmenupagesourcecode >menuhelppagesourcecode >menuhelppagesourcecode >helpmenusourcecode >menuhelpsourcecode >menuhelpsourcecode >helpsourcecode >menusourcecode >sourcecodehelpmenupage >sourcecodemenuhelppage >sourcecodemenuhelppag >guisourcecodecommands >guisourcecodecmds >commandsguisourcecode >cmdsguisourcecode >commandssourcecode >cmdssourcecode >sourcecodecommands >sourcecodecmds >sourcecodepage >sourcecodepage >pagesourcecode >pagesourcecode >guisourcehelpmenupage >guisourcemenuhelppage >guisourcemenuhelppage >helpmenupageguisource >menuhelppageguisource >menuhelppageguisource >helpmenupagesource >menuhelppagesource >menuhelppagesource >helpmenusource >menuhelpsource >menuhelpsource >helpsource >menusource >sourcehelpmenupage >sourcemenuhelppage >sourcemenuhelppag >guisourcecommands >guisourcecmds >commandsguisource >cmdsguisource >commandssource >cmdssource >sourcecommands >sourcecmds >sourcepage >sourcepage >pagesource >pagesource]`</small>

	> | Key         | Action                                             |
	> | :---------- | :------------------------------------------------- |
	> | `return`    | Run to selected line with one shot breakpoint      |
	> | `up`        | Select previous source line                        |
	> | `down`      | Select next source line                            |
	> | `page-up`   | Page up                                            |
	> | `page-down` | Page down                                          |
	> | `b`         | Set breakpoint on selected source/disassembly line |
	> | `c`         | Continue process                                   |
	> | `d`         | Detach and resume process                          |
	> | `D`         | Detach with process suspended                      |
	> | `h`         | Show help dialog                                   |
	> | `k`         | Kill process                                       |
	> | `n`         | Step over (source line)                            |
	> | `N`         | Step over (single instruction)                     |
	> | `o`         | Step out                                           |
	> | `s`         | Step in (source line)                              |
	> | `S`         | Step in (single instruction)                       |
	> | `,`         | Page up                                            |
	> | `.`         | Page down                                          |

<br>

-	#### Variables & Registers *[Help Menu]*:

	> <small>`[Search Tags: >variablesguihelpmenu >variableguihelpmenu >variablesguimenu >variableguimenu >variablesguipage >variableguipage >variableshelpmenu >variablehelpmenu >variablesmenu >variablemenu >variablespage >variablepage >varguihelpmenu >varguimenu >varguipage >varhelpmenu >varmenu >varpage >varsguihelpmenu >varsguimenu >varsguipage >varshelpmenu >varsmenu >varspage >registerguihelpmenu >registerguimenu >registerguipage >registerhelpmenu >registermenu >registerpage >regguihelpmenu >regsguihelpmenu >regguimenu >regsguimenu >regguipage >regsguipage >reghelpmenu >regshelpmenu >regmenu >regsmenu >regpage >regspage >guivariablehelpmenupage >guivariablemenuhelppage >guivariablemenuhelppage >helpmenupageguivariable >menuhelppageguivariable >menuhelppageguivariable >helpmenupagevariable >menuhelppagevariable >menuhelppagevariable >helpmenuvariable >menuhelpvariable >menuhelpvariable >helpvariable >menuvariable >variablehelpmenupage >variablemenuhelppage >variablemenuhelppag >guivariablecommands >guivariablecmds >commandsguivariable >cmdsguivariable >commandsvariable >cmdsvariable >variablecommands >variablecmds >variablepage >variablepage >pagevariable >pagevariable >guiregistershelpmenupage >guiregistersmenuhelppage >guiregistersmenuhelppage >helpmenupageguiregisters >menuhelppageguiregisters >menuhelppageguiregisters >helpmenupageregisters >menuhelppageregisters >menuhelppageregisters >helpmenuregisters >menuhelpregisters >menuhelpregisters >helpregisters >menuregisters >registershelpmenupage >registersmenuhelppage >registersmenuhelppag >guiregisterscommands >guiregisterscmds >commandsguiregisters >cmdsguiregisters >commandsregisters >cmdsregisters >registerscommands >registerscmds >registerspage >registerspage >pageregisters >pageregisters >guivarhelpmenupage >guivarmenuhelppage >guivarmenuhelppage >helpmenupageguivar >menuhelppageguivar >menuhelppageguivar >helpmenupagevar >menuhelppagevar >menuhelppagevar >helpmenuvar >menuhelpvar >menuhelpvar >helpvar >menuvar >varhelpmenupage >varmenuhelppage >varmenuhelppag >guivarcommands >guivarcmds >commandsguivar >cmdsguivar >commandsvar >cmdsvar >varcommands >varcmds >varpage >varpage >pagevar >pagevar]`</small>

	> | Key        | Action|
	> | :--------- | :--------------------------------------------
	> | `up`       | Select previous item
	> | `down`     | Select next item
	> | `right`    | Expand selected item
	> | `left`     | Unexpand selected item or select parent if not expanded
	> | `page-up`  | Page up
	> | `page-down`| Page down
	> | `A`        | Format as annotated address
	> | `b`        | Format as binary
	> | `B`        | Format as hex bytes with ASCII
	> | `c`        | Format as character
	> | `d`        | Format as a signed integer
	> | `D`        | Format selected value using the default format for the type
	> | `f`        | Format as float
	> | `h`        | Show help dialog
	> | `i`        | Format as instructions
	> | `o`        | Format as octal

<br>

-	#### Backtrace *[Help Menu]*:

	> <small>`[Search Tags: >backtraceguihelpmenu >backtraceguimenu >backtraceguipage >backtracehelpmenu >backtracemenu >backtracepage >btguihelpmenu >btguimenu >btguipage >bthelpmenu >btmenu btpage >guipanesthreads >guipanesthrds >guipanesthreads >guipanesthrds >guipanethreads >guipanethrds >guipanethreads >guipanethrds >guithreadspanes >guithrdspanes >guithreadspanes >guithrdspanes >guithreadspanes >guithrdspanes >guipanesstackframes >guipanesstckframes >guipanestackframes >guipanestckframes >guipanesframes >guipaneframes >guistackframes >guistckframes >guiframes >guiframes >guibacktracehelp >helpbacktrace >hbracktrace >hbt >guibt >helpbt]`</small>

	> | Key         | Action                                         |
	> | :---------- | :--------------------------------------------- |
	> | `up`        | Select previous item                           |
	> | `down`      | Select next item                               |
	> | `right`     | Expand the selected item                       |
	> | `left`      | Unexpand the selected item or select parent if |
	> | `page-up`   | Page up                                        |
	> | `page-down` | Page down                                      |
	> | `h`         | Show help dialog                               |
	> | `space`     | Toggle item expansion                          |
	> | `,`         | Page up                                        |
	> | `.`         | Page down                                      |


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author           | Link
> | - | :----------------- | :--------------- | :-------------------------
> | 1 | Manual Page        | LLDB             | `(lldb) help gui`
> | 2 | Manual Page        | LLDB             | `(lldb-gui-source-view) h`
> | 3 | Manual Page        | LLDB             | `(lldb-gui-variables-view) h`
> | 4 | Manual Page        | LLDB             | `(lldb-gui-registers-view) h`
> | 5 | Manual Page        | LLDB             | `(lldb-gui-backtrace-view) h`


---
[🏠](#contents) | [⬅️](#PREVIOUS) | [➡️](#NEXT)
## 3.7. Control Process Execution
<small>`[Search Tags: >lldb.controlprocessexecution >lldbcontrolprocessexecution >debugger.controlprocessexecution >debuggercontrolprocessexecution >controlprocessexecution >contrlprocessexecution >cntrlprocessexecution >ctrlprocessexecution >controlprcsexecution >contrlprcsexecution >cntrlprcsexecution >ctrlprcsexecution >controlprcsexecs >contrlprcsexecs >cntrlprcsexecs >ctrlprcsexecs >controlsection >ctrlsection >processcontrolsection >prcsctrlsection >prcscontrolsection >processcontrolsection >lldb.controlprogramexecution >lldbcontrolprogramexecution >debugger.controlprogramexecution >debuggercontrolprogramexecution >controlprogramexecution >contrlprogramexecution >cntrlprogramexecution >ctrlprogramexecution >controlprogexecution >controlprogsexecution >contrlprogexecution >contrlprogsexecution >cntrlprogexecution >cntrlprogsexecution >ctrlprogexecution >ctrlprogsexecution >controlprogexecs >controlprogsexecs >contrlprogexecs >contrlprogsexecs >cntrlprogexecs >cntrlprogsexecs >ctrlprogexecs >ctrlprogsexecs >controlsection >ctrlsection >programcontrolsection >progctrlsection >progsctrlsection >progcontrolsection >progscontrolsection >programcontrolsection]`</small>
<br>

Contents
---
- [1 About](#about-1)
- [2 Control Commands](#control-commands)
---

## About

After process `launch` / `attach`, `lldb` completely hands over the control of the execution of the process (i.e running program) to you, and it *[`lldb`]* gives you commands with which to control it.

The following subsections will layout the **`lldb` prompt commands** offered to control the program –– not the **graphical user interface commands**, those are laid out in section ([§3.6.2 @ Source Code *[Commands Help Menu]*](#source-code-help-menu)).

---

## Control commands:

<small>`[Search Tags: >ctrlcommands >controlcommands >cntrlcommands >ctrlcmds >controlcmds >cntrlcmds >commandsctrl >commandscontrol >commandscntrl >cmdsctrl >cmdscontrol >cmdscntrl >continue >cmdcontinue >continuecmd >commandcontinue >continuecommand >continue >cmdcontinue >continuecmd >commandcontinue >continuecommand >until >cmduntil >untilcmd >commanduntil >untilcommand >step >cmdstep >stepcmd >commandstep >stepcommand >stepin >stepout >stepover >cmdstepin >cmdstepout >cmdstepover >stepincmd >stepoutcmd >stepovercmd >commandstepin >commandstepout >commandstepover >stepincommand >stepoutcommand >stepovercommand >kill >cmdkill >killcmd >commandkill >killcommand >detach >cmddetach >detachcmd >commanddetach >detachcommand]`</small>

| Command | Description
| :------ | :---------------------------------------------------------
||
| `(lldb) continue`  | **Continue execution** *[of all threads in the current process] <br>* *[till a breakpoint is hit or termination of the process is met]*.
| `(lldb) thread until <line>` | **Run until line** `<line>` or control leaves the current function.
||
|  `(lldb) thread step-over` <br> `(lldb) next` <br> `(lldb) n` | **Step over** *[function call]* lines *[, if any]*, executing the current <br> line and stepping, thereafter, over it, to the next one. Defaults to <br> current thread unless specified.
| `(lldb) thread step-in` <br> `(lldb) step` <br> `(lldb) s` | **Step into** *[function]* calls. Defaults to current thread unless <br> specified.
| `(lldb) thread step-out` <br> `(lldb) finish` | **Step out** of the currently selected frame *(i.e function call)*.
||
| `(lldb) kill`      | **Terminate** the current target process.
| `(lldb) detach`    | **Detach** from the current target process.

> *<small>[**Note:***
>
> -	For *[assembly]* **instructions**, the step in/out commands are slightly different;
>
> 	| Command | Description
> 	| ------- | ---------------------------------------------------------
> 	| `(lldb) thread step-inst-over` <br> `(lldb) ni` | Do a single *[instruction]* **step over**.
> 	| `(lldb) thread step-inst` <br> `(lldb) si` | Do a single *[instruction]* **step in**.
>
> *- **end note**]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author           | Link
> | - | ------------------ | ---------------- | --------------------------
> | 1 | Documentation | LLDB | [(Official) Tutorial \| GDB to LLDB command map](https://lldb.llvm.org/use/map.html)
> |||
> | 2 | Manual Page        | LLDB             | `(lldb) help thread`
> |||
> | 3 | Manual Page        | LLDB             | `(lldb) help continue`
> | 4 | Manual Page        | LLDB             | `(lldb) help thread until`
> |||
> | 5 | Manual Page        | LLDB             | `(lldb) help thread step-in`
> | 6 | Manual Page        | LLDB             | `(lldb) help thread step-out`
> | 7 | Manual Page        | LLDB             | `(lldb) help thread step-over`
> |||
> | 8 | Manual Page        | LLDB             | `(lldb) help thread step-inst`
> | 9 | Manual Page        | LLDB             | `(lldb) help thread stepi-inst-over`
> |||
> | 10 | Manual Page        | LLDB             | `(lldb) help kill`
> | 11 | Manual Page        | LLDB             | `(lldb) help detach`


---
[🏠](#contents) | [⬅️](#36-graphical-user-interface-gui) | [➡️](#381-source-code)
## 3.8. Examine
<small>`[Search Tags: >lldb.examine >lldbexamine >debuggerexamine >debugger.examine >lldb.examination >lldbexamination >debuggerexamination >debugger.examination >lldb.examinating >lldbexaminating >debuggerexaminating >debugger.examinating >examine >examination >examinating]`</small>
<br>
<br>


---
> *When the program stops during execution 'for a `<reason>`' *(e.g.: breakpoint, watchpoint, manual-stop, crash, etc ...)*, `lldb` will choose a current thread, usually the one that stopped, and a current frame in that thread *(on stop this is always the bottom-most frame)*.*
>
>	*––	[LLDB :: Tutorial :: Examine Thread State](https://lldb.llvm.org/use/tutorial.html#examining-thread-state)*
---

Aspects of the process that may be examined:

- [3.8.1. Source code](#)
- [3.8.2. State of Threads](#)
- [3.8.3. State of Stack Frames](#)
- [3.8.4. State of Variables](#)

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
<small>`[Search Tags: >sourcecodelldb >lldb.sourcecode >lldbsourcecode >examinesourcecode >sourcecodeexamine >sourcecodeexamination >examinesourcecde >sourcecdeexamine >sourcecdeexamination >examinesrccode >srccodeexamine >srccodeexamination >examinesrccde >srccdeexamine >srccdeexamination >examinecode >examinecode >scodeexamine >scodeexamine]`</small>
<br>
<br>


> *<small>[**Note:** `gui` mode already displays the source code automatically during execution –– this is for textual mode. - **end note**]</small>*
>
> ---

-	#### List source code:

	> <small>`[Search Tags: >sourcelist >solist >listsource >listso >sourcedisplay >sodisplay >displaysource >displayso >sourceshow >soshow >showsource >showso >sourcelist >listsource >sourcelst >lstsource >srclist >listsrc >srclst >lstsrc >lssrc >lssource]`</small>

	> ***Synopsis:***
	> ```shell
	> source list [--show-breakpoints] [--count <count>] [--file <filename>] [--line <linenum>]
	> source list [--show-breakpoints] [--count <count>] [--name <program-symbol>]
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) source list --count 20 --file main.c --line 5    # list <count> lines from <file> starting from line <line>
	> (lldb) so li -c 20 -f main.c -l 5
	> ```
	> ```shell
	> (lldb) source list --count 25 --name foo                # list <count> lines having to do with <program-symbol>
	> (lldb) so li -c 25 -n foo
	> ```


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | Manual Page | LLDB | `(lldb) help source list`


---
[🏠](#contents) | [⬅️](#382-variables) | [➡️](#384-stack-frame-states)
### 3.8.2. State of Threads
<small>`[Search Tags: >]`</small>
<br>
<br>


To inspect the current state of your process, you can start with the threads:

---

-	#### List threads:

	> <small>`[Search Tags: >listthreads >lstthreads >lsthreads >threadslist >threadlist >threadslst >threadlst >threadsls >threadls >listthrds >lstthrds >lsthrds >thrdslist >thrdlist >thrdslst >thrdlst >thrdsls >thrdls]`</small>

	> ***Synopsis:***
	> ```shell
	> thread list
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) thread list
	> (lldb) th l
	> ```
	>
	> ***Output:***
	> ```shell
	> * thread #1: tid = 0x2c03, 0x00007fff85cac76a, where = libSystem.B.dylib`__getdirentries64 + 10, stop reason = signal = SIGSTOP, queue = com.apple.main-thread
	> thread #2: tid = 0x2e03, 0x00007fff85cbb08a, where = libSystem.B.dylib`kevent + 10, queue = com.apple.libdispatch-manager
	> thread #3: tid = 0x2f03, 0x00007fff85cbbeaa, where = libSystem.B.dylib`__workq_kernreturn + 10 -->
	> ```

	> *<small>[**Note:** The `*` indicates that `thread #1` is the current thread. - **end note**]</small>*

<br>

-	#### Select *[current]* thread:

	> <small>`[Search Tags: >selectthreads >selctthreads >selcthreads >threadsselect >threadselect >threadsselct >threadselct >threadsslct >threadslct >slctthreads >slctthread >selectthrds >selctthrds >selcthrds >thrdsselect >thrdlist >thrdsselct >thrdselct >thrdsslct >thrdslct >slctthrds >slctthrd >sthreads >sthrds >sethreads >sethrds >selthreads >selthrds]`</small>

	> ***Synopsis:***
	> ```shell
	> thread select <thread-index>
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) thread select 2
	> (lldb) th se 2
	> ```

	> *<small>[**Note:***
	>
	> -	*The `select`'ed thread will be used by default in all the commands in the next section.*
	>
	> -	*Thread index is just the one shown in the “thread list” listing.*
	>
	> *- **end note**]</small>*

<br>

-	#### Thread backtrace:

	> <small>`[Search Tags: >selectthreads >selctthreads >selcthreads >threadsselect >threadselect >threadsselct >threadselct >threadsslct >threadslct >slctthreads >slctthread >selectthrds >selctthrds >selcthrds >thrdsselect >thrdlist >thrdsselct >thrdselct >thrdsslct >thrdslct >slctthrds >slctthrd]`</small>

	> ***Synopsis:***
	> ```shell
	> thread backtrace [--start <frame-index>] [--count <count>]    # show <count> frames in backtrace, starting from frame #<frame-index>
	> thread backtrace [all]                                        # show all frames
	> ```
	>
	> ***Example(s):***
	> ```shell
	> (lldb) thread backtrace
	> (lldb) th b
	> (lldb) bt
	> ```
	>
	> ```shell
	> (lldb) thread backtrace --count 2 --start 4
	> (lldb) th b -c 2 -s 4
	> ```
	>
	> ```shell
	> (lldb) thread backtrace all
	> (lldb) th b all
	> ```
	>
	> ***Output:***
	> ```shell
	> thread #1: tid = 0x2c03, stop reason = breakpoint 1.1, queue = com.apple.main-thread
	> frame #0: 0x0000000100010d5b, where = Sketch`-[SKTGraphicView alignLeftEdges:] + 33 at /Projects/Sketch/SKTGraphicView.m:1405
	> frame #1: 0x00007fff8602d152, where = AppKit`-[NSApplication sendAction:to:from:] + 95
	> frame #2: 0x00007fff860516be, where = AppKit`-[NSMenuItem _corePerformAction] + 365
	> frame #3: 0x00007fff86051428, where = AppKit`-[NSCarbonMenuImpl performActionWithHighlightingForItemAtIndex:] + 121
	> frame #4: 0x00007fff860370c1, where = AppKit`-[NSMenu performKeyEquivalent:] + 272
	> frame #5: 0x00007fff86035e69, where = AppKit`-[NSApplication _handleKeyEquivalent:] + 559
	> frame #6: 0x00007fff85f06aa1, where = AppKit`-[NSApplication sendEvent:] + 3630
	> frame #7: 0x00007fff85e9d922, where = AppKit`-[NSApplication run] + 474
	> frame #8: 0x00007fff85e965f8, where = AppKit`NSApplicationMain + 364
	> frame #9: 0x0000000100015ae3, where = Sketch`main + 33 at /Projects/Sketch/SKTMain.m:11
	> frame #10: 0x0000000100000f20, where = Sketch`start + 52
	> ```

	> *<small>[**Note:***
	>
	> - *`bt` is an alias for `backtrace thread`, see `help bt`.*
	>
	> *- **end note**]</small>*


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#383-thread-states) | [➡️](#39-graphical-user-interface-gui)
### 3.8.3. State of Stack Frames
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.8.3. Stack Frame State(s)

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Quisque id diam vel quam elementum pulvinar. Orci nulla pellentesque dignissim enim. Magna fringilla urna porttitor rhoncus dolor purus. Mollis nunc sed id semper risus in hendrerit gravida rutrum. Faucibus turpis in eu mi bibendum. Ultrices neque ornare aenean euismod elementum. Consectetur lorem donec massa sapien faucibus. At imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Rhoncus urna neque viverra justo nec ultrices dui. Sed faucibus turpis in eu mi bibendum.


<br>
<br>

> ***Further Reading:***
>
> | # | Type               | Author                 | Link
> | - | ------------------ | ---------------------- | --------------------------
> | 1 | n/a               | n/a                    | n/a


---
[🏠](#contents) | [⬅️](#381-source-code) | [➡️](#383-thread-states)
### 3.8.4. State of Variables
<small>`[Search Tags: >]`</small>
<br>
<br>


> TODO: ### 3.8.4. Variable(s)

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





Ensuring that the drops of urine have ceased


Glossary of Terms

| Term *[transliterated from Arabic]* | Meaning
| :---------------------------------- | :-----------------------------------------------
| ***(al-)Abad***                     | Eternity in the future
| ***(al-)Azal***                     | Eternity in the past
| ***(al-)‘Abd***                     | The servant; the servant of God by creation; the servant of God who beliefs in and worships Him
| ***(al-)‘Adhāb***                   | Punishment. <br> <br> The Qur’ān uses seven different names for the places or types of punishment in the Hereafter: Jahannam (Hell), Nār (Fire), Sa‘īr (Blaze), Jahīm (Blazing Flame), Hutamah (Consuming Fire), Saqar (Scorching Fire), and Lazā (Raging Flame). Most probably, these are the levels or degrees of punishment, each prepared for those who deserve it and each having a gate.
| ***(al-)Adhān***                    | The call to the Prayer. <br> <br> It is as follows: Allāhu akbar (God is the All-Great: 4 times); Ashhadu an lā ilāha illa’llāh (I bear witness that there is no deity but God: twice); Ashhadu anna Muhammadan Rasūlu’llāh (I bear witness that Muhammad is the Messenger of God: twice); Hayya ‘alā’s-salāh (Come on, to the Prayer: twice), Hayya ‘alā’l-falāh (Come on, to salvation: twice); Allāhu akbar (God is the All-Great: twice); Lā ilāha illa’llāh (There is no deity but God: once).
| ***(al-)‘Afw***                     | Pardoning, granting remission; excusing
| ***(al-)‘Ahd***                     | Covenant; contract
| ***‘Ahdu’llāh***                    | God’s covenant. <br> <br> It is the promise that God has taken from His servants that they should believe in Him and worship Him alone. Besides this cardinal one, God has made different covenants with His Prophets and many peoples in different times.
| ***Ahl al-Bayt***                   | The household. As a term, it refers to the household of the Prophet Muhammad, *(upon him be peace and blessings)*, including Fātimah, his daughter, and her husband, ‘Ali, and their sons, Hasan and Husayn.
| ***Ahl al-Kitāb***                  | The People of the Book, that is any people who have been given a Divine Book. The Qur’ān tends to use this term particularly for the Jews and Christians. The term also includes the Sabeans and the Magians.
| ***Ahl al-Kitāb wa’s-Sunnah***      | The People of the Book and the Sunnah. They are the Muslims who strive to follow exactly the teachings of the Qur’an and the way of the Prophet Muhammad *(upon him be peace and blessings)*, as reported by his Companions.
| ***(al-)Ākhirah***                  | The next one; afterlife, the Hereafter. This is the other world where conscious, responsible beings will be called to account for their beliefs and deeds in the world and recompensed for them.
| ***(al-)Ahzāb***                    | Parties, confederates. It is particularly used for the remnants of the ancient, destroyed peoples who lived in Arabia during the revelation of the Qur’ān, and for the confederate forces composed of different tribes that besieged Madīnah and fought the Muslims in the Battle of the Trench in 627 CE 5 a.h. AH.
| ***(al-)Ākif***                     | One who abides in devotion to God
| ***(al-)Akhlāq***                   | The science and principles of good conduct and morality. <br> <br> The most distinguishing characteristic of Islam and, when loyal to that characteristic, of the community of Muhammad *(upon him be peace and blessings)*, is that it is far from all kinds of extremism. Islam represents the middle way in all aspects of life. For example, it is neither spiritualism nor materialism, neither realism nor idealism, neither capitalism nor socialism, neither individualism nor statism, neither absolutism nor anarchism, neither this-worldly and hedonistic, nor purely other-worldly and monastic. As it is unique in its worldview and social, economic and political aspects, it is also unique in the moral education it gives to individuals. Islam aims to develop human beings from being potentially human to being truly human, thus perfecting them. It develops the human character in the best way. The parts of Wisdom which the Qur’ān enumerates in CHAPTER? verses 22–39, beginning and ending with the absolute prohibition of associating partners with God in any way in His Divinity and Lordship, are important in developing that character and raising members of a Muslim society.
| ***(al-)‘Ālam (pl. ‘ālamūn)***      | The world, worlds. The word comes from ‘alam, ‘alāmah, meaning something by which another thing is known. Thus, in this perspective, every individual thing or set of things, from the tiniest sub-atomic particles to the largest nebulae and galaxies, is a “world” and indicates God. The plural form (‘ālamūn) is particularly used for conscious beings, giving the sense that everything that is created is as if conscious, and signifying that its pointing to God’s Existence, Unity and Lordship is extremely clear for conscious beings.
| ***(al-)Alaq***                     | The clot clinging (to the wall of the female womb)
| ***(al-)‘amal***                    | An action, deed
| ***(al-)‘amal as-sālih***           | Good, righteous deed
| ***(al-)Amānah***                   | The trust, that is any responsibility or all the duties which either God or society or an individual places in someone’s charge; the Supreme Trust which only humankind has undertaken, so in this sense, it refers to the human ego
(al-)Amīr: The leader; the commander
(al-)Amr: Command; authority; affair
Amr bi’l-Ma‘rūf: Enjoining and actively promoting what is good and right (in appropriate ways)
(al-)Ansār: The Helpers. It is particularly used for the Muslims of Madīnah who helped the emigrant Muslims of Makkah in the process of the latter’s settling down in Madīnah.
(al-)‘Aql: Reasoning and reflecting to make a conclusion and be able to distinguish between what is right and wrong, and between what is beneficial and harmful; in common terminology, it is the intellect which does this reasoning and reflection
(al-)‘Arāf: The Heights (between Paradise and Hell, upon which the believers who still have sins unpardoned will be retained to be forgiven so that they can enter Paradise)
(al-)‘Arsh: The throne; the Supreme Throne of God. As the Qur’ān addresses all levels of understanding through all ages, it tends to present certain abstract truths, like those pertaining to Divinity, with concrete expressions, and it uses metaphors and comparisons. It presents the Kursiyy (Seat; see 2: 255) as if it were a platform or seat, and the ‘Arsh as if it were a throne and God were the ruler of the universe seated on His throne, governing all creation. ‘Arsh is the composition of four of God’s Names: the First, the Last, the All-Outward, and the All-Inward. Also, deducing from Said Nursi’s description of water as the ‘arsh (throne) of mercy and earth, the throne of life, we can say that the ‘Arsh (Throne) implies God’s full control of and authority over the universe. Elements such as water and earth are things that conduct God’s decrees, or media by which the decrees are manifested and executed.
(al-)‘Asabiyyat (al-Jāhiliyyah): Tribal or racial attachment; racism. Islam eradicated all blood-, culture-, language-, and color-based discrimination, condemning it as an attitude arising from sheer ignorance and carnality.
Asbāb an-nuzūl: Occasions on which verses of the Qur’ān were revealed
Ashāb al-Kahf: The young people from the royal class of the Romans in Syria-Jordan region who gave up idol-worship and believed in God as the only Deity and Lord, and had to take shelter in a cave. They stayed in the cave in a death-like sleep for 300 years, and then woke up as a sign of resurrection.
Ashāb al-Uhdūd: A tyrannical people who dug ditches and burnt the believers alive in them.
‘Ashāb al-Yamīn (al-Maymanah): The people of the Right, the people of happiness and prosperity (who will be given their Records in their right hands in the Hereafter)
‘Ashāb ash-Shimāl (al-Mash’amah): The people of the Left, the people of wretchedness (who will be given their Records in their left hands in the Hereafter)
al-Ashhur al-Hurum: The months of Dhu’l-Qa‘dah, Dhu’l-Hijjah, Muharram and Rajab (the 11th, 12th, 1st, and 7th months of the lunar year) during which warfare, killing, and pillage are prohibited.
(al-)Asmā’ al-Husnā: The All-Beautiful Names (of God). These Names are either included in the Qur’ān or were taught by God’s Messenger, and God is and should be called by them.
(al-)Asmā’ wa’s-Sifāt: God’s Names and Attributes. Besides His Names, God has Attributes. Some Attributes are essential to His being God. They are Existence, Having No Beginning, Permanence, Oneness, Being Unlike the Created, and Self-Subsistence. God has another kind of Attributes, called the Positive Attributes, which describe God as what He is. They are Life, Knowledge, Will, Power, Hearing, Seeing, Speech, and Bringing into Existence. These Attributes are the origin of certain Names such as Giver of Life and the AllReviver, the All-Knowing, the All-Willing, the All-Powerful, the All-Hearing, the All-Seeing, the All-Speaking, and the Creator, etc. Having such absolute, unrestricted Attributes and All-Beautiful Names means that their manifestation is “inevitable.” One Who exists in and of Himself, and Whose Existence is absolutely perfect, will manifest Himself, as “required” by His very “nature.” Thus, the universe is the collection of the manifestations of God’s Attributes and Names, and those manifestations are focused on humankind. God also has a third kind of Attributes which describe what God is not. They are almost endless. For example, God is not One Who begets or is begotten, nor One Who has any partners, nor One who has any need, etc.
(al-)‘Asr: Time; afternoon; the last part of time replete with important events
(al-)‘Awrah: Parts of the body that are not supposed to be exposed to others. For men, this is from the navel to the knee. For women, it is the entire body except the hands, feet, and face.
(al-)‘Āyah: A manifest sign; miracle; lesson to be taken from an event; each of the Qur’ān’s independent sentences between two points (verses)
Āyātun bayyināt: The signs or messages which are clear in meaning and content (as evidence of the truth)
(al-)Āyat al-Kursīyy: The verse of the Divine Seat of Dominion. It is verse 255 of Sūrat al-Baqarah, which makes God known through some of His Names and Attributes.
Ayyāmu’llāh: Days of God (momentous historical events such as the destruction of communities, turning-points in history, and eschatological events)
(al-)Baghy: Envious rivalry and insolence (which the Qur’ān stresses as being the cardinal reason for internal conflicts in a community)
(al-)Balā’: A trial, testing. Although it usually comes in the form of disaster, God tries people with both good and evil. When He tries with good, such as success, wealth, a high position, and physical beauty, it requires gratitude to God and attributing it to Him. When He tries with evil, such as a misfortune, illness or poverty, it requires patience without complaint. This, however, does not mean that one stricken by an evil should not try to escape from it. Being tried with evil may sometimes be the result of a sin. Therefore, it also requires repentance, seeking forgiveness, and reformation.
(al-)Baqā: Permanence, persistence
(al-)Barāah: Disavowal, proclamation of disavowal; ultimatum
(al-)Barzakh: A barrier (between the dead and the other world), the intermediate world of the grave (between this world and the next)
(al-)Basāir: “Lights” of discernment and insight
(al-)Bashīr: A bearer of glad tidings; a Messenger who bears glad tidings (of prosperity in return for faith and righteousness)
(al-)Basīrah: Discernment, insight, sagacity
(al-)Basmalah:The phrase, Bismi’llāhir-Rahmāni’r-Rahīm, meaning in (and with) the Name of God, the All-Merciful, the All-Compassionate
(al-)Ba‘th: Revival; sending a Messenger (to “revive” people); restoration of the dead to life; resurrection
(al-)Bātin: What is inward; the inward or internal dimension of something; the metaphysical dimension of existence
(al-)Bātil: What is false; falsehood; any system of belief, thought, or action that is based not on the Revelation, but on human desires and fancies, and that do not conform to, but instead contradict, God’s Religion and ways of acting in the universe
(al-)Bay‘ah – (al-)Bī‘ah: An allegiance sworn by the citizens etc., to their Imam (Muslim Ruler) to be obedient to him according to the Religion of Islam Bay‘at ar-Ridwān: The oath and pledge taken by God’s Messenger from his Companions under a tree at al-Hudaybiyah in the year of 6 a.h.AH (628 c.e.CE), to fight the Quraysh in case of necessity
(al-)Bayān: Intelligent speech, as opposed to sounds which have no power of expression or meaning
Baytu’llāh: God’s House (the Ka‘bah)
(al-)Bayyinah: The Clear Proof
(al-)Bayyināt: All evidence of the truth; clear signs or documents of the truth; miracles
bi-ghayri’l-haqq: As a sinful act (or attitude) that can never be right or just; against all right
Bi’l-haqq: With the truth (embodying it, and with nothing false in it); all meaningfully, and for meaningful purposes, and on solid foundations of the truth
(al-)Bukhl: Niggardliness, meanness
(al-)Birr: Godliness, virtue; a high degree in faith and practice of Islam, especially having acquired the spiritual refinement that enables one to spend in God’s cause or to give others of what one loves
(al-)Burūj: The constellations, (which are the names of some fixed stargroups)
(ad-)Dābbah: Any living, moving creature
(ad-)Dābbat min al-Ard: A living creature which God will bring forth from the earth towards the end of time. It will speak to the disbelieving, criminal people, to make them understand that they have no certainty of faith in God’s signs and Revelations.
(ad-)Dahr: “Time”; processes of progress and decline
(ad-)Dajjāl: An impostor or impostors who will appear towards the end of time to mislead humanity; the Dajjāl who will appear in the Muslim world is generally called as-Sufyān.
(ad-)Dāl: One who has gone astray; the straying
(ad-)Dalāl(ah): Straying from the Straight Path. It refers to a broad range of straying from the Path – from the slightest lapse of a believer, to complete deviation from the Straight Path. As a term, it denotes returning to unbelief after belief, exchanging unbelief for belief (2: 108), associating partners with God either in His Essence, His Attributes or acts (4: 116), or rejecting faith in all or any of the pillars of faith.
(ad-)Dawlah: As a Qur’ānic term, it means fortune. The Qur’ān declares: “What God has bestowed on His Messenger as war-gains from the peoples of the townships: (one-fifth of ) it belongs to God, and to the Messenger, and his near kinsfolk, and orphans, and the destitute, and the wayfarer (lacking means to sustain a journey), so that it should not become dawlatan (a fortune) circulating among the rich among you.” (CITATION REQUIRED)
(adh-)Dhanb: Sin in various degrees. Sin and pardoning have different types and degrees. These are disobeying religious commandments, and forgiveness thereof; disobeying God’s laws of creation and life, and forgiveness thereof; and disobeying the rules of good manners or courtesy (adab), and the forgiveness thereof. A fourth type, which is not a sin, involves not doing something as perfectly as possible, which is required by the love of and nearness to God. Some Prophets may have done this, but such acts cannot be considered sins according to our common definition of that word.
(adh-)Dhikr: Remembrance; recollection; mentioning; reminder; recitation of one or some of God’s Names. It is also used to refer to a Divine Book.
(ad-)Dīn: The collection of moral, spiritual, and worldly principles; a system and way of conduct; judging; rewarding and punishing; way; law; constitution; servanthood and obedience; and peace and order
(ad-)Du‘ā’: Prayer and supplication, having kinds and degrees. The first kind is the prayer of all organisms, plant, animal and human, through the natural disposition of their bodies and their functioning in line with their duties in creation. The second kind is that which is uttered by all organisms, plant, animal and human, in the tongue of vital needs. The third kind of prayer is that which is done by human beings. This falls into two categories. The first category is the active prayer. It means complying with the laws that God has set for life. For example, a farmer’s plowing the soil is knocking on the door of Divine providence. A patient’s going to the doctor’s is appealing to God for a cure. This kind of prayer is usually accepted. The second category is the verbal prayer that we do.
(ad-)Dunyā: The world. It has three aspects. Regarding its first aspect, the world is the realm where God’s Names are manifested and, therefore, whatever is there, and whatever takes place in it, is a mirror to God withHis Attributes and Names. The second aspect of the world is the tillage for the Hereafter. The building-blocks which make up one’s Paradise or Hell in the Hereafter are the seeds of one’s belief or unbelief, and the deeds that one sows here. The third aspect of the world is that which looks to our carnal desires, passions, lusts and ambitions. It is this aspect that the Qur’ān condemns, as these consist of games, pastimes, greed (hoarding things), and competing in having more goods; in short, this aspect is the source of all vice and evil.
(al-)Fahshā, (al-)Fāhishah (pl. al-fawāhīsh): Indecency; any whose abominable character is self-evident. In the Qur’an, all extra-marital sexual relationships, sodomy, nudity, and false accusations of unchastity are specifically reckoned as shameful deeds.
(al-)Falāh: Prosperity. It has many degrees and types according to the needs and aspirations of people and the degrees of their spiritual enlightenment. For example, some want to be saved from eternal punishment, while others desire Paradise. There are still some who aim at the higher ranks in Paradise, and others who aspire to obtain God’s good pleasure.
(al-)Faqīh: A person who is an expert on Islamic jurisprudence (Law); one who has correct and profound comprehension of Islam who can give an authoritative legal opinion or judgment regarding Islamic matters
(al-)Fard: Any obligatory religious act
(al-)Farā’id: Plural of al-fard. It is also used to mean the science of sharing inheritance.
Fard ‘Ayn: Any act which is obligatory on every Muslim who is mature, healthy, and sane
Fard Kifayah: A collective duty of the Muslim community, so that if some people carry it out, no Muslim is considered blameworthy, but if no one carries itout, all incur a collective guilt.
(al-)Fasād: Disorder and corruption – one which appears as a result of following a path other than God’s
(al-)Fāsiq: A transgressor of the bounds set by God; one who commits any of the major sins
(al-)Fatā: A youth, usually a chivalrous young man who has dedicated himself to God’s cause
(al-)Fath: The Victory which functions as a door to further victories
(al-)Fatwā: A legal verdict given on a religious basis
(al-)Fayy: Gains of war obtained without fighting
(al-)Fidyah: Compensation for a missed or wrongly practiced religious act of worship or order, usually in the form of money,foodstuff or offering (animal)
(al-)Fiqh: Correct and profound comprehension (of Islam); the science of Islamic Jurisprudence
(al-)Fisq: Transgression of the bounds set by God; committing any of the major sins
(al-)Fitnah: Disorder and corruption rooted in rebellion against God and recognizing no laws. It denotes associating partners with God and adopting that as a life-style, spreading unbelief and apostasy, committing major sins with willful, insolent abandon, open hostilities to Islam, destroying collective security or causing public disorder, and oppression; the term fitnah covers all of these.
(al-)Fitrah: The original Divine pattern or system governing the universe; the totality of the attributes God has given to a particular thing or being; the Divine Religion (Islam) as the translation of the Divine pattern or system
(al-)Fujūr: A shameless, sinful act
(al-)Furqān: The Criterion to distinguish between truth and falsehood, and the knowledge, insight, and power of judgment to put it into effect; an inner sense or faculty of insight, discernment, inspiration, and power of judgment to distinguish between right and wrong
(al-)Futuwwah: Youth and chivalry as a composite of virtues, such as energy, revolutionary vigor, heroism, generosity, munificence, modesty, chastity, trustworthiness, loyalty, mercifulness, knowledge, humility, and piety
(al-)Ghadab: Wrath. When used for God, it denotes punishment and condemnation.
(al-)Ghāf il: Heedless, unmindful
(al-)Ghaflah: Heedlessness, lack of awareness
(al-)Ghanīmah: Gains of war obtained through fighting
(al-)Ghayb: The (absolutely or relatively) Unseen or unsensed; beyond the reach of human perception
(al-)Ghiybah: Backbiting
(al-)Ghurūr: Deception, delusion
(al-)Ghusl: The full ritual washing of the body with water alone to be pure for the prayer. To do Ghusl: (1) Wash your private parts; (2) Do wudū; (3) Wash your entire body from the top to bottom, and from right to left
Hablu’llāh: The rope of God, usually used to denote the Qur’ān or Islam
(al-)Hadd (pl. Hudūd): Any bound God set and ordered His creatures not to transgress. It is also used for the cardinal penalties Islam has laid down in return for cardinal offenses, such as killing, unlawful sexual relations, usurpation, theft, causing disorder and corruption in the society, and drinking intoxicants.
(al-)Hadīth: Communication, narration, word or saying. As a term, it denotes the record of whatever the Prophet (*(upon him be peace and blessings)*) said, did, or tacitly approved. According to some scholars, the word hadīth also covers reports about the sayings and deeds, etc., of the Companions of the Prophet, in addition to those of the Prophet himself. The whole body of Traditions is termed Hadīth, and the science which deals with it is called ‘Ilm al-Hadīth.
Hadīth qudsī: A saying of God narrated by His Messenger but not included in the Qur’ān
(al-)Hady: Cattle brought to the sacred precincts of Makkah to be sacrificed during the days of ‘Īd al-Adhā
(al-)Hajj: Major Pilgrimage which the Muslims do in Makkah during Dhu’l-Hijjah, the last month of the lunar year. It is one of the five pillars of Islam, a duty one must perform during one’s life-time if one has the financial resources for it. In addition to tawāf and sa‘y, there are a few more other require- ments of the Hajj, including especially staying for some time in al-‘Arafāt (alwaqfah) from mid-day to sunset on 9th of Dhu’l-Hijjah.
(al-)Halāk: Destruction, ruin
(al-)Halāl: Religiously lawful Hamalat al-‘Arsh: The eight beings (angels?) that bear God’s Throne (the greatest of beings who carry out God’s order in the universal order)
(al-)Hamd: All praise and gratitude that is due to and for God
(al-)Hanīf: One who has a sincere, sound faith in God and worships God with purity of intention
al-Haqq: The truth, what is ever-constant and true
(al-)Harām: Religiously forbidden or unlawful; sacred and inviolable; any sacred and inviolable thing
(al-)Hasanah: Good; reward
(al-)Hashr: Gathering together; the raising of the dead and gathering them on the Plain of the Supreme Gathering on Judgment Day
(al-)Hawā: The fanciful inclinations and lusts of the human carnal soul
(al-)Hayā’: Shame, bashfulness, and refraining from saying or doing anything improper or indecent; seeking to avoid displeasing God out of awe of Him
(al-)Hayāh: Life. Human life has five degrees: (1) Our life, which depends on certain conditions and the fulfillment of certain needs. (2) The life of alKhadr and Ilyās (Elijah), which is free to some extent from the necessities of our life. (3) The life of the Prophets Jesus and Enoch, who live in heaven free of the necessities of human life in their “astral” bodies. (4) The life of martyrs, those who are killed in God’s cause, who do not feel the pangs of death and know themselves to be transferred into a better world where they enjoy the blessings of God. (5) The life of the dead, who are discharged from worldly duties with their spirits set free.
(al-)Hayāt ad-dunyā: The present, worldly life or the life of this world (see ad-dunyā)
(al-)Hidāyah: True or right guidance; following God’s Path in belief, thought, and action
(al-)Hijrah: Emigration; the emigration of God’s Messenger from Makkah to al-Madīnah in 622 c.eCE.
(al-)Hikmah: Wisdom. Knowledge of creation, life, right and wrong, and of the Divine system prevailing in the universe, so as to enable persuasive, convincing answers for such questions as, “Who am I? What is the purpose of my existence in this world? Who has sent me to this world and why? Where did I come from and where am I heading? What does death ask of me?” It also signifies the true nature of and purpose behind the things and events in the universe, including especially in human life. The Qur’ān is the source of knowledge in all these vital matters. The Sunnah of the Prophet,(upon him be peace and blessings,being the system or principles by which to understand and practice the Qur’ān in daily life, comes to mind first of all when speaking of the “Wisdom.”
(al-)Hubb (al-mahabbah): Love. God declares: Say (O Messenger): “If you indeed love God, then follow me, so that God will love you and forgive you your sins.” God is All-Forgiving, All-Compassionate (3: 31).
(Musālahat) Hudaybiyah: The Treaty of Hudaybiyah. Almost a year after the Battle of the Trench in 627 c.e., 5 a.h., the Messenger left for Makkah for a minor pilgrimage with his 1.400 and so Companions. However, the Quraysh did not let them do the pilgrimage. After negotiations, a treaty was signed at al-Hudaybiyah 12 miles away from Makkah. (al-)Hukm (pl. al-ahkām): Authority; authority with knowledge and sound judgment; judgment; verdict; legal ordinance(s)
(al-)Husn: Good, beautiful
(al-)Hutamah: The Consuming Fire. One of the degrees or places of Divine Punishment in the Hereafter (see al-adhāb)
(al-)‘Ibādah: Worship, devotion; humble worshipping or devotion to God
Iblīs: The chief Satan; the jinn who persistently disobeyed God and was eternally rejected from His Mercy. It was allowed to try to tempt humans for wise purposes as God decreed for human earthly life
(al-)‘Iddah: The waiting period that a woman is required to observe for a new marriage after divorce or because of her husband’s death. It is three menstrual courses for divorced women, and four months and ten days for women who have lost their husbands.
(al-)Ifk: Slander, calumny; ungrounded accusation
(al-)Ihram: The special Pilgrimage attire and the state in which pilgrims are held for some time during which they must wear that attire and perform the prescribed rituals of the Pilgrimage and observe certain prohibitions such as abstention from all sex acts, the use of perfume, hunting or killing animals, cutting the beard or shaving the head, cutting the nails, plucking blades of grass, and cutting green trees
(al-)Ifsād: To cause or provoke disorder and corruption
(al-)Ihkām: Making firm and explicit in meaning
(al-)Ihsān: Highest level of obedience in worship; devotion to doing good and doing it as if seeing God or in the awareness of God’s seeing His servants; kindness, kind treatment
(al-)İjmā‘: Consensus of Muslim faqīhs (jurisprudents) on a ruling for a new issue
(al-)Ijtihād: Faqīh’s exerting the sum total of their capacity in order to deduce rulings or laws on new issues from the basic sources of law, namely the Qur’ān, Sunnah, and Ijmā‘
(al-)Ikhlās: Believing in God sincerely and without associating any partners with Him; purity of intention in faith and practicing the Religion only for God’s sake
(al-)Ikhtilāf: Differences of view and attitude; differences in intelligence, ability, ambition, and desire etc. in life and character; being at variance and in conflict with one another
(al-)Īlā’: The oath taken by a husband that he will not approach his wife for a certain period. If this continues for longer than four months, then it is considered a divorce. Reversing this vow requires atonement.
(al-)Ilāh: Deity
(al-)‘Ilm: Knowledge. (True) knowledge based on the Revelation. Knowledge is a product, like milk, that is the result of many processes in the mind, like the imagination, conceptualization, reasoning, inquiry, verification, judgment, adoption, conviction, and certainty. Islam accepts Revelation, intelligence (reason), sound sense, and scientific inquiry as being the means of knowledge.
(al-)Imām: The leader in the prayer; the leader of the Muslims, especially in religious matters
(al-)Imām al-Mubīn: The Manifest Record; the Record in which the future lives of all things and beings, including all the principles governing those lives and all their deeds and the reasons or causes, are kept pre-recorded
(al-)Īmān: Certain belief, or faith (in whatever God wants to be believed in). Like unbelief, belief or faith is an acknowledgment and an act of confirmation by the heart. Faith does not consist in a simple acceptance or confession. Just as there are many stages or degrees in the growth of a tree from its seed until it is in its fully-grown, fruit-bearing state, and just as there are countless degrees and ranks in the manifestations of the sun from its manifestations of light and heat in all things on the earth up to its reflection on the moon and then back to itself, so too does faith have almost uncountable degrees and ranks, from a simple acknowledgment of reason and confirmation of the heart, up to degrees of penetration in all the parts and faculties of the body that control and the degrees that direct the entire life of a person – from the faith of a common person to that of the greatest of the Messengers.
(al-)Indhār: A warning
(al-)Infāq: Spending of whatever God provides (of wealth, knowledge, power, etc.) in God’s cause or to those in need purely for the good pleasure of God and without placing others under obligation
(al-)Injīl: The Divine Book which God gave to the Prophet Jesus(upon him be peace)
(al-)Insān (pl. an-nās): Human, humankind
(al-)Inshā’: Producing, bringing about, building
(al-)Inshirāh: The expansion of the breast so that one can fully understand God’s religion, feel exhilaration coming from knowledge of Him, and show patience with whatever one encounters in God’s way
(al-)Inzāl: A sending down of the Qur’ān or the Qur’ānic verses
Iqāamat as-Salāh: The offering of the Payer perfectly (in conformity with all its conditions)
(al-)Irādah: Willpower (by which a person can direct his or her thoughts and actions). Al-Irādah is also an Attribute of God, denoting His absolute Will. It has another meaning, which is decree, or command.
(al-)Irshād: Guiding to spiritual and intellectual excellence
‘Ishā’: The Night or Late Evening Prayer
(al-)Islāh: Setting things right; reformation; mending one’s way
(al-)Islām: The Divine Religion which God has appointed for humankind and revealed through all His Prophets. It was lastly and universally revealed through, and conveyed by, the Prophet Muhammad,upon him be peace and blessings.
(al-)Ism: Name; the word by which a thing or person is known
(al-)Isrā’: The (miraculous) Night Journey (which the Prophet Muhammad, *(upon him be peace and blessings)*, made from Makkah to Masjid al-Aqsā,’ in Jerusalem)
(al-)Isrāf: Being wasteful of God-given faculties and committing excesses
: Ensuring that the drops of urine have ceased, and that one’s heart is content according to one’s general habit, either by walking, coughing, lying down,
or any other method
(al-)Istidrāj: Leading to perdition by degrees
(al-)Istifā: Choosing and making pure and distinguished
(al-)Istighfār: Imploring God for forgiveness of one’s misdeeds or sins
(al-)Istihsān: Adoption of what is good and beneficial in legislation
(al-)Istinjā: Cleaning the private parts after urinating or passing stool, preferably using water
(al-)Istiqāmah: Straightforwardness (as avoiding all deviation and extremes,
and as following in the footsteps of the Prophet, *(upon him be peace and blessings)*
(al-)Istisqā’: Invoking God for rain at a time of a drought
(al-)Istishāb: (Law) Maintaining without change what has already been approved
 (al-)Istiwā: Literally: a plant or a tree rising firmly on its stem; a human
being reaching his or her full man/womanhood and growing to maturity: God
directing His Will (Power and Favor) to something
Istiwā alā’l-‘Arsh: God, or a sovereign, being established on the throne
Istiwā ila’s-samāi: God directing (His Knowledge, Will, Power, and Favor)
towards heaven
(al-)‘Isyān: Disobeying, defiance, rebellion
(al-)Itā‘ah: Obedience
(al-)I’thār: Altruism, preferring others to oneself, thinking of the needs and
desires of others over one’s own; giving precedence to the common interests of
the community over one’s own; devoting oneself to the lives of others in complete forgetfulness of all concerns of one’s own
(al-)Ithm: A blatant sin
(al-)I‘tidā: Exceeding the bounds (set by God); offending
al-I‘tikāf: Retreat in the mosques for the purpose of worship; especially the
practice of spending some time in Ramadān in a mosque in devotion to God
(al-)Itmi‘nān: Being at rest; contentment; full conviction and satisfaction
(al-)Ittiqā: Keeping one’s duties to God and avoiding all kinds of sins in
reverence for God and piety; attaining reverent piety toward God and His protection (against any kind of straying and its consequent punishment in this
world and the Hereafter)
(al-)Jahālah: Ignorance; a lack of knowledge and behaving like one devoid
of knowledge; an instance of being defeated to the evil-commanding carnal
soul
Jahannam: Hell; the place where the disbelieving criminals will go in the
Hereafter
(al-)Jāhiliyyah: Any doctrine or worldview and way of life based on rejection or disregard of heavenly guidance communicated to humankind through
the Prophets and Messengers of God; the attitude of treating human life – either wholly or partly – as independent of the directives of God
(al-)Jamrah: One of the three stone-built pillars situated at Minā in Makkah, which represent Satan. The pilgrims throw pebbles at them during the
three ‘Īd days, during the Pilgrimage
(al-)Janābah: The state of major ritual impurity caused by coitus, discharge
of semen, menses, and post-childbirth bleeding. People who are in this state
cannot pray, circumambulate the Ka‘bah (tawāf ), enter a mosque or place of
worship unless necessary, or touch the Qur’an or any of its verses, except with a
clean cloth or something similar.
(al-)Jannah: Paradise; the heavenly realm of blessings where, in the Hereafter, God will admit those who believe and do good, righteous deeds
Jannatu’l-Ma’wā: The Heavenly Garden of Refuge and Dwelling
Jannāt ‘Adn: Heavenly Gardens of perpetual bliss
Jannatu’l-Khuld: The Heavenly Garden of Immortality
Jannātu’n-na‘īm: Heavenly Gardens of bounty and blessing
(al-)Jibt: Any false deity
(al-)Jihād: Striving, doing one’s utmost to achieve something; striving in
God’s cause with one’s possessions and person
(al-)Jinn: A species of invisible, conscious, and responsible beings created
from smokeless “fire,” penetrating through the body
(al-)Jizyah: The tax of protection and exemption from military service
which non-Muslim citizens of a Muslim state are required to pay
The Jumu‘ah Congregational Prayer: The Friday Congregational Prayer enjoined on every free, adult, sane, and resident Muslim male. It is offered during
the time of the Noon Prayer, and the normaN noon Prayer is not performed on
Fridays.
(al-)Kabāir: The major sins. They are those which, in return for committing
them, God or His Messenger threatens a severe punishment in the Hereafter,
and for some of which there is (also) a prescribed punishment in this world.
(al-)Kafālah: The pledge given by somebody to a creditor to guarantee that
the debtor will be present at a certain specific place to pay the debt or fine, or to
undergo a punishment, etc.
(al-)Kaffārah: Atonement, expiation; the prescribed way of making amends
for wrong actions, particularly missed obligatory actions
(al-)Kāf ir (pl. al-Kuffār): An unbeliever; one who denies any of the things
which must be believed in, although the truths of faith have been thoroughly
and convincingly conveyed to him
(al-)Kalālah: One who dies leaving behind no lineal heirs
(al-)Kalām: Speech; an Attribute of God; any of God’s Words manifested
as a Scripture
(al-)Kalimah: The word; any of God’s words. God has two kinds of words,
one issuing from His Attribute of Speech, and the other from His Power. His
words that issue from His Attribute of Speech are His Scriptures that He sent
to some of His Messengers. His words that issue from His Attribute of Power
are all of His works.
(al-)Kalimat al-Khabīthah: A corrupt word (is like a corrupt tree uprooted
from upon the earth, having no constancy).
(al-)Kalimat at-Tayyibah: A good or pure word. A good word is like a good
tree – its roots holding firm (in the ground) and its branches in heaven; it yields
its fruit in every season due by its Lord’s leave.
(al-)Kasb: Earning; earning reward or punishment in return for one’s belief
and doing
(al-)Kawthar: Unceasing, abundant good
(al-)Khabīth: The corrupt
(al-)Khalīfah: Vicegerent or one who exercises the authority delegated to
him by his principal, and does so in the capacity of deputy and agent; one having
the status or duty of khilāfah (see al-Khilāfah); caliph
(al-)Khalq: Creating; creation
(al-)Khamr: Anything that acts as an agent of intoxication
(al-)Khāshi‘: One humbled by one’s deep reverence and awe of God
(al-)Khayr: What is better; the property one has
 (al-)Kharāj: Tax imposed on the revenue out of land taken from non-Muslim citizens of an Islamic state
Khātam al-Anbiyā’: A title of the Prophet Muhammad,(upon him be peace
and blessings, related to the meaning of the seal (last) of the Prophets
(al-)Khāsir: A loser, one ruined in loss
(al-)Khawf: Fear; fear leading one to abstain not only from all that is forbidden, but also from those deeds from which it is advisable to refrain
(al-)Khilāfah: Succession; vicegerency; the status or duty of improving the
earth on the basis of knowledge of things and the laws of creation (which we
wrongly call the “laws of nature”), and ruling on the earth according to the dictates of God, thus establishing justice
 (al-)Khizy: Disgrace
(al-)Khuld: Immortality
(al-)Khuluq: Conduct; pattern of conduct; morality, good morals
(al-)Khums: Literally one-fifth. One-fifth of the gains of war or any buried
treasure dug out, which must be paid to the state
(al-)Khushū‘: Humility; deep reverence and awe
(al-)Khutbah: Sermon; the sermon given during the Friday Congregational
Prayer; a sermon given during the marriage ceremony
(al-)Kitāb: Book; any of the Divine Books given or revealed to some among
the Messengers of God
(al-)Kitāb al-A‘māl: A record of one’s deeds in the world to be displayed in
the Hereafter
(al-)Kitāb al-Mubīn: The Divine Book, particularly the Qur’an, clear in
itself and clearly showing the truth; the Manifest Book in which the lives of all
things and beings are recorded in detail
(al-)Kufr: Literally meaning concealing and covering, it denotes rejection
of, and unbelief in, any of the pillars of faith and the established religious commandments
(al-)Kursī: The platform on which the ‘Arsh (the Throne) is set up (see
al-‘Arsh); when used for God, it must signify His Knowledge, Will, Power, and
Sovereignty.
(al-)La‘nah: Cursing; for God, it denotes rejection from His Mercy and the
condemnation to punishment
(al-)Lawh al-Mahfūz: The Supreme Preserved Tablet (or Record) where
the Divine principles that determine the archetypal “plan and program” of creation, and the future lives of all beings, including all their deeds, are kept recorded. In one respect, it is identical with the Imām al-Mubīn.
(al-)Lawh al-Mahw wa’l-Ithbāt: The Tablet of Effacement and Confirmation, or the metaphorical page of time, along which God manifests or hangs
whatever He wills, and decrees for the beings and/or things and events, which
are recorded on the Supreme Preserved Tablet
Laylat al-Qadr: The Night of Power and Destiny. Any of the last ten nights
of the Month of Ramadān, during which the Divine Destiny identifies all the
things and events to come into existence or happen in the new year, each with
its particular nature, and entrusts to the Divine Power
(al-)Li‘ān: An oath which is taken by both the wife and the husband when
he accuses his wife of committing illegal sexual intercourse (sūrah 24: 6–9)
(al-)Mā’: Water; rain; the seminal fluid; ether filling space
(al-)Maghf irah: Forgiveness
(al-)Mahr: The bridal-due. It signifies the amount of payment that is settled
between the spouses at the time of marriage, and which the husband is required
to make to his bride.
(al-)Mahram: The group of people who are unlawful for a woman to marry
due to marital or blood and milk relationships
(al-)Makrūh: Disliked and disapproved of, but not prohibited by God
(al-)Mala’: A council; a board of ministers or leaders in a community
(al-)Malau’l-a‘lā: The heavenly high assembly (of angels)
(al-)Malak (pl: al-Malāikah): The spiritual beings of light endowed with
great might, who absolutely obey God and carry out His commands. Angels
have different kinds or species but are not differentiated as male or female. There
is nothing to cause quarrels or disputes among them because they are innocent,
their realm is vast, their nature is pure, and their stations are fixed. Each of the
heavenly bodies is a place of worship for the angels.
(al-)Malakūt: The spiritual and transcendental dimension of existence;
God’s absolute dominion of the creation where His Power operates without the
medium of matter or material causes
(al-)Mālik: Master
(al-)Manāsik: All the rites of the Hajj
(al-)Mansūkh: Any command or verdict abrogated or canceled; a statement
utterly canceled and removed or abrogated in regard with its meaning or the
command it contains, or both
(al-)Maqām al-Mahmūd: The highest station or rank of being praised by God
and the whole body of believers as particular to the Prophet Muhammad,upon
him be peace and blessings,by virtue of which he will be honored with the per-
mission to intercede on behalf of all people on the Plain of Supreme Gathering
(al-)Ma‘rifah: Knowledge of God; the appearance and development of
knowledge of God in one’s conscience, or knowing God by one’s conscience or
heart
(al-)Ma‘ruf: Any norm of behavior or practice generally accepted by a community and not opposed to the basic principles of Islam
Masālih al-mursalah: (aw) Taking what is suited to the public benefit and
discarding what is harmful
Māshā’allāh: Whatever God wills (occurs); What excellent things God
wills and does!
(al-)Mashī‘ah: Will. God’s absolute Will for the creation and direction of
the universe and guidance of people
(al-)Mashwarah: Consultation
(al-)Masīh: The Christ – Jesus son of Mary
(al-)Masjid: The building where the Prayer is offered in congregation; the
parts of human body with which one prostrates
(al-)Matā‘: Enjoyment of the worldly life
(al-)Mathal: Parable, comparison, example
(al-)Mawlā: Lord; emancipated slave; master; guardian; friend
(al-)Mihrāb: The Prayer niche of a mosque, in front of which the imam
stands when leading the congregational prayers
(al-)Millah: The way of belief and life; life-style
(al-)Minnah: Favoring; favoring and putting under obligation
(al-)Mīqāt: The specific places where pilgrims or people intending to perform Hajj or ‘Umrah must declare their intention to do so and enter the state
of ihrām
(al-)Mi‘rāj: The Ascension. The miraculous journeying of the Prophet Muhammad, (*(upon him be peace and blessings)*, through the realms of existence
beyond the limit of forms
(al-)Miskīn (pl. al-masākīn): A destitute one in greater distress than the
ordinary poor people, and yet whose sense of self-respect prevents him from
begging and whose outward demeanor fails to give the impression that he is
deserving of help
(al-)Mīthāq: A solemn binding
(al-)Mīzān: The balance, the equilibrium
(al-)Muadhdhin: The person who calls the adhān – who makes the call to
the Prayer
(al-)Mubārak: Blessed; provided with blessings
(al-)Mubīn: Clear in itself and clearly showing (the truth)
(al-)Muhaddith: An Islamic scholar of Hadīth
(al-)Muhājir: One who emigrates to another land for God’s sake; a Companion of the Prophet who emigrated to al-Madīnah before the conquest of
Makkah
(al-)Muhāsabah: Self-criticism or self-interrogation
(al-)Muhkam: Firm and valid; any of the verses of the Qur’ān that are explicit in meaning and content and consist the core of the Qur’ān and foundations of the Islamic belief and life. They also serve as principles to understand
the whole of the Qur’ān (see al-mutashābih)
(al-)Munkar: Evil; anything disapproved of by God, as well as by common
sense and public view
(al-)Mustakbir: An oppressive, arrogant one
(al-)Mutashābih: The allegorical, multi-faceted (verses of the Qur’ān). They
are those which, having more than one meaning, contain relative truths which
can be understood by considering the relevant verses and referring to the muhkam ones.
(al-)Muhsanāt: The chaste, free Muslim women
(al)Muhsin: One who tries to do well whatever he does and is devoted to
doing good, aware that God sees
(al-)Mu‘jizah: Any extraordinary, supernatural achievement which God
creates at the hand of a prophet
(al-)Mujrim: A (disbelieving) criminal lost in accumulating sin
(al-)Mukhlas: One endowed with sincerity and purity of intention in faith
and practicing the Religion for God’s sake
(al-)Mukhlis: One sincere in faith in the Only One God and pure of intention in practicing the Religion only for God’s sake
(al-)Mujāhid: One who strives to be a good Muslim in God’s cause with his
wealth and person
(al-)Mujtahid: One who exerts the sum total of his capacity in order to
deduce rulings or laws on new issues from the basic sources of law, namely the
Qur’ān, Sunnah, and Ijmā‘.
(al-)Mulk: Sovereignty; absolute ownership and dominion
(al-)Mu’min: The Believer. A person who has faith in whatever must be
believed in and is a righteous and obedient servant of His
(al-)Munāf iq: One who is a believer outwardly or professes faith, while one
is an unbeliever inwardly and in reality
: A servant of God who, sincere in quest of the truth, turns to Him in contrition
(al-)Muqarrab: One who is foremost in faith and practicing the Religion,
and near-stationed to God
(al-)Murāqabah: (Self-)supervising and controlling, and living in the consciousness of being controlled (by God)
(al-)Murtad: An apostate; one who has become an unbeliever after having
believed
(al-)Mursal: A Prophet sent or charged with calling to God’s Religion; an
angel sent to the world with a special mission
(al-)Musallī: One who regularly does the prescribed Prayers
(al-)Mushaf: A copy of the Qur’ān
(al-)Mushrik: A polytheist: a person who commits Shirk (see Shirk) – who
associates partners with God in His Divinity, Lordship, and Sovereignty, or in
any of these
(al-)Muslih: One who sets things right; one who mends his ways
(al-)Muslim: One who believes in whatever is to be believed in and prac-
tices Islam in his daily life in submission to God; (law) one who professes faith
and, as a citizen of a Muslim st ate, joins a Muslim congregation in the Prayer
and pays the Zakāh
(al-)Musrif: One who, having wasted his God-given faculties, commits excesses; one given to wastefulness
(al-)Mustad‘af: One bereft of any means to find true guidance; one bereft
of any means to carry out the required religious obligation, like emigrating in
God’s cause
(al-)Mutraf: Self-indulgent; lost in the pursuit of pleasures without moral
limit or consideration
(al-)Muttaqī: One trying to keep his duties to God, required by both the
Religion and the Divine laws of life, and avoiding the forbidden things, in reverence for God and piety
(al-)Mudtarr: In strained circumstances
(an-)Nabiyy: A Prophet; one who receives Revelation from God and has the
duty of communicating it to people. The last of the Prophets is the Prophet Muhammad, *(upon him be peace and blessings)*.b Basically, a Prophet who, (in addition to giving the glad tidings of prosperity in return for faith and righteousness
–(see al-Bashīr, d warned of the evil consequences of all kinds of misguidance.
(an-)Nāf ilah: Any optional or supererogatory good deed, which when done
brings reward and when not done causes no sin
(an-)Nafl (al-anfāl): Any worldly reward coming as the result of services
rendered in God’s cause; war-gains
(an-)Nafs: The self of a living being; the faculty (soul) which is the source
or mechanism of the worldly life possessed by humankind and the jinn. Selftraining, or the training of the soul, has been accepted as an extremely important
element of the Divine Religion. This training, according to some schools in Islam, has ten stages, and according to others and some Qur’ānic allusions, seven
stages. If the soul lives only a life of ease in the swamp of carnal appetites, it is
“the evil-commanding, carnal soul” (an-nafs al-ammārah); if it falters time and
again while following the way of the Religion to attain piety and righteousness,
but each time that it falters it criticizes itself and turns to its Lord, then it is “the
self-accusing soul” (an-nafs al-lawwāmah). The soul which always resists evil
in devotion to God and is favored with certain Divine gifts in proportion to its
purity is called “the soul receiving inspiration” (an-nafs al-mulhimah). When it
reaches the point where it has a relation with its Lord in perfect devotion and
sincerity so that its consciousness is at rest, then it is “the soul at rest” (an-nafs
al-mutmainnah). If it has reached the station where it abandons all its choices
and is a representative of Divine will, it is “the soul pleased with God” (an-nafs
ar-rādiyah). When its greatest aim is acquiring God’s good pleasure and approval and it is always acting to this end in consideration of, “I am pleased with
You, so be pleased with me,” then it is “the soul with which God is pleased”
(an-nafs al-mardiyyah). Finally, the soul which has been perfectly purified of
all sins and evil morals and has the capacity to be completely adorned with the
full manifestations of Divine Qualities and Prophetic will-power and resolution
is called “the soul perfected” or “the soul pure” (an-nafs az-zakiyyah or an-nafs
as-sāfiyah).
(an-)Najāh: Delivery, being saved, salvation
Nahy ‘ani’l-munkar: Forbidding and trying to prevent evil (in appropriate
ways)
(an-)Nār: Fire; the Fire – Hellfire
(an-)Nās: Humankind
(an-)Naskh: Abrogation. Canceling a legal verdict or commandment, or removal of a statement
(an-)Nāsikh: A new legal verdict or command in place of an abrogated one;
a new statement in place of another canceled or removed
(an-)Nasr: Help leading to victory
(an-)Nifāq: Hypocrisy; profession of faith while being an unbeliever at
heart; underground and secret activities to undermine an Islamic order
(an-)Nikāh: Marriage according to God’s law; marriage contract
(an-)Ni‘mah: Favor and blessing; any favor or blessing of God, prominently
His favor of guidance
(an-)Nisāb: The minimum amount of property liable to payment of the
Zakāh or animal sacrifice, or Sadaqat al-fitr (payment made to the needy before
the prayer of ‘Īd al-Fitr)
(an-)Nubuwwah: Prophethood
(an-)Nūr: Light. It is not exactly identical with the energy coming from the
sun (diyā’) or another light-giving object. It is as if it is more substantial than the
known light, and having precedence over light in the process of creation. The
Qur’ān uses it in a spiritual sense in many of its verses.
(an-)Nusuk: All forms of devotion and worship
: A drop of seminal fluid
(an-)Nuzūl: The coming down of the Qur’ān from God
(al-)Qadar wa’l-Qadā: The Divine Destiny and Decree; the Divine Destiny
and its enforcement
(al-)Qādī: Judge
( al-)Qalb: The heart; the spiritual intellect; the center of all emotions and
(intellectual and spiritual) faculties, such as perception, consciousness, sensation,
reasoning, and willpower
Qālū balā: They said, “Yes!” – the event (mentioned in 33: 172) describing
the human profession of God’s Lordship in spirit or conscience, or in a dimension of existence unknown to us with its exact nature
(al-)Qard al-Hasan: A goodly loan (to God), signifying any expenditure
made in God’s cause or for the needy purely for God’s sake
(al-)Qasam: The oath which especially God swears by certain phenomena
(in the Qur’ān)
(al-)Qawwām or qayyim: A protector and maintainer; one who is responsible for administering or supervising the affairs of either an individual or an
organization, for protecting and safeguarding them and taking care of their
needs
(al-)Qiblah: The direction to face for the Prayer. For Muslims, it is the direction of the Sacred Mosque of the Ka‘bah in Makkah.
(al-)Qisās: Inviolate values (especially in the sense of basic human rights),
being of the same value and demanding retribution; a principle which gives rise
to retaliation in law
(al-)Qitāl: Fighting, war, warfare
(al-)Qiyām: The standing position during the Prayer; “rising” to make an
evaluation and adopt a new attitude or position; maintenance
(al-)Qiyāmah: The overall destruction of the world and subsequent resurrection and rebuilding of the world
(al-)Qiyās: Analogy
(al-)Qunūt: Humble, devout obedience; supplication in the Prayer, particularly in the standing position just before the rukū‘ (bowing down) in the third
rak‘ah (cycle) of the Witr Prayer, following the Late-Evening or Night Prayer
(al-)Qur’ān: The Qur’ān; the last Book of God which He revealed to the
Prophet Muhammad,*(upon him be peace and blessings)*, as His last and universal
Message to conscious, responsible beings
(al-)Qurūn al-‘Ūlā: The earliest generations and ages in human history until the Prophet Abraham or Moses, upon them both be peace
(al-)Qu’ūd: The sitting position during the Prayer
(ar-)Rabb: Lord, master; the Lord (God as the Creator, Provider, Trainer,
Upbringer, and Director of all creatures)
(ar-)Rajā’: Expectation, waiting for what one wholeheartedly desires to be
(ar-)Rak‘ah: A unit or cycle of the Prayer
(ar-)Rahm: Mercy; womb; blood relations
(ar-)Rahmah: Mercy, compassion, grace
(ar-)Rajīm: Rejected (from God’s Mercy)
Ramadān: The 9th month of the (Islamic) lunar calendar which the Muslims spend fasting
(ar-)Rasūl: A Prophet given a Scripture and charged with conveying God’s
Revelations
(ar-)Ribā: Interest
(ar-)Ridā: Resignation, willing submission to God’s treatments; being
pleased with God and pleasing to Him
(ar-)Ridwān: God’s good pleasure ; God’s being pleased with someone
(ar-)Risālah: Messengership (see ar-Rasūl); the message (Divine Message)
(ar-)Rizq: Provision, anything which God provides
(ar-)Rubūbiyah: Lordship; God’s being the Lord of all creatures
(ar-)Rūh: The spirit; the center or source of conscious life which continues
to live after a person dies; the Revelation; the spiritual, angelic being responsible
for, or representing, all spirits
Rūhu’l-Quds: The Spirit of Holiness; the Spirit of extraordinary purity,
cleanliness, and blessing
(ar-)Rushd: Integrity and maturity in thought and action, and right conduct
and correct behavior
(as-)Sabīl: Road, path, way, a means to an end (fī sabīli’llāh: in God’s
cause)
(as-)Sābiqūn: The foremost in faith and good deeds, and serving God’s
cause
: The patient and steadfast
(as-)Sabr: Patience; steadfastness in carrying out the obligations and refraining from prohibitions, resisting the temptations to sin of the evil-commanding,
carnal soul and Satan, enduring any disaster, and showing no haste in pursuing
those of one’s hopes or plans that require a stretch of time to achieve
(as-)Sabt: The Sabbath; Saturday of every week, which the Children of Israel must consecrate for rest and worship
(as-)Sab‘u’l-Mathānī (Sab‘an mina’l-Mathānī): Another name for Sūrat alFātihah, meaning the Seven Doubly-Repeated Verses
(as-)Sadaqah: Anything given away in alms or done supererogatorily for the
good pleasure of God
Sadaqat al-fitr: The obligatory payment made to the needy in Ramadān
until the Prayer of ‘Īd al-Fitr
Sadd az-zarā‘ī: Blocking corruption and what is unlawful
(as-)Saf īh: A foolish one, devoid of common sense and reasoning
(as-)Sahābī (pl. al-Ashāb): A Companion of the Prophet Muhammad,upon
him be peace and blessings, who saw and heard him at least once and who died
as a believer
(as-)Sajdah: Prostration; it signifies the utmost and most sincere submission
(as-)Sakīnah: Inner peace and reassurance, perfect calmness due to the Presence of God being made clear and apparent
(as-)Salāh: The Prayer; the cardinal form of worship Muslims do for the
good pleasure of God
(as-)Salām: Peace, the wish of peace and security from all kinds of deviations and sufferings
Salāt al-Khawf: The Prayer of Fear; the Prescribed Prayer done in shortened form during a journey or when in a state of fear or insecurity, including
times of war or disaster, such as fire and flood
Salāt al-Musāfir: The Prayer of Journey; the Prescribed Prayer done in
shortened form during a journey
(as-)Sālih: Good and righteous, sound
(as-)Sawm: Fasting; total abstinence from food, liquid, and any sexual pleasure (either from sexual relations or self-satisfaction) from dawn to sunset, with
the intention of worshipping God as His order
(as-)Sa‘y: Labor, working, striving; slight running or speedy walking between the hills of as-Safā and al-Marwah as a rite of Hajj and ‘Umrah
(ash-)Shafā‘ah: Intercession. Expecting God’s help or favor through an intermediary agent, either in the world or in the Hereafter. On Judgment Day,
intercession is made on behalf of one and by one whom God permits
(ash-)Shahwah: Passion, passionate attachment, lust
(ash-)Shahādah: What is observable or sensed; witnessing and bearing witness; martyrdom
(ash-)Shāhid: Witness; one who observes and bears witness to; one who
sees the hidden Divine truths and testifies to them with their lives; one who
testifies for or against
(ash-)Shahīd: Witness; one who observes and bears witness to; martyr (one
who sacrifices one’s life in God’s cause and thereby proves the truth of God’s
way)
(ash-)Shākir: A thankful one
(ash-)Sharī‘ah: The way God has laid down for His creatures to follow in
their daily lives; the practical aspect of the Religion of Islam; the body of all Islamic injunctions or laws, based on the Qur’ān and the Sunnah, and then further
developed by jurists to apply Islamic concepts to daily life
(ash-)Sharī‘at at-Takwīniyyah: The body of God’s laws related to the lives
of all creatures and the creation and operation of the universe
(ash-)Shaytān: The jinn who persistently disobeyed God and was eternally
rejected from His Mercy. It was allowed to try to tempt human for wise purposes which God appointed for human earthly life. There are many similar shaytāns
among the jinn and human beings who try to tempt others from God’s Straight
Path.
(ash-)Shi‘ār (pl. ash-sha‘āir): An emblem or public symbol. The call to the
Prayer, Prayer in congregation, most particularly the congregational prayers of
Jumu‘ah and the two ‘Īds, Hajj with its rituals, mosques, sacrifice, etc., are (as
well as having their religious meaning for the individual and the community)
among the public symbols that identify Islam and the Muslim community.
(as-)Sidq: Truthfulness
(ash)-Shirk: Associating partners with God in His Divinity, Lordship, and
Sovereignty, or in any of these
(ash-)Shu‘r: Perception, awareness
(ash-)Shūrā: Consultation. It is among the most important requirements for
reaching the right decision, and one of the essentials of Islamic constitution.
(ash-)Shukr: Thankfulness, gratitude, gratefulness
(as-)Siddīq: The sincere and truthful; loyal and faithful; following the
Straight Path without deviation
Sidrat al-Muntahā: The Lote-tree of the furthest limit; the boundary between the realm of Divinity and the realm of creation
(as-)Sīrah: Conduct, personality; the personality and life story of God’s
Messenger, *(upon him be peace and blessings)*
(as-)Sirāt: The path having ups and downs, wide in some of it parts and
narrow in others, and difficult to walk on. The path over Hell which leads to
Paradise, with ups and downs, one having walls on its sides, and doors and windows opening on the outside. If this Prophetic description is figurative, it means
that we cannot know its real identity.
(as-)Sirāt al-Mustaqīm: The only Straight Path to God, which the Prophet
Muhammad, *(upon him be peace and blessings)*. demonstrated to humankind
and the jinn, and was manifested by way of the Qur’an and Sunnah.
Subhānallāh: All-Glorified is God (in that He is absolutely exalted above
having any defects, needs, and partners); I glorify God.
(as-)Suffah: A shaded place in al-Masjid an-Nabī in Madīnah where poor
people used to take shelter during the Messenger’s time
Ashāb as-Suffah: About three or four hundred Companions who stayed in
as-Suffah and spent most of their time in the company of the Messenger, upon
him be peace and blessings
(as-)Sulh: Reconciliion Reconciliation, peace
(as-)Suhuf (pl. of as-Sahīfah): Scrolls given to some Messengers
(as- )Sunnah: The way of God’s Messenger,*(upon him be peace and blessings)*. It is the record of every act, word, and confirmation of the Messenger. It
is the second source of Islamic legislation (the Qur’ān being the first one). All
scholars of religious sciences, and sometimes even natural scientists, use it to
establish the principles of their disciplines and to solve difficulties. The Qur’ān
and authentic prophetic Traditions enjoin Muslims to follow the Sunnah. In addition to being an independent source of legislation, it also defines what is stated
in general terms in the Qur’ān by referring to particular instances, and it defines
the general principle underlying statements in the Qur’ān that are in themselves
specific and particular. Also, the Sunnah (like the Qur’ān which it embodies) is
also concerned with moral guidance, so the Sunnah provides inspiration and
the horizons for moral and spiritual instruction in all spheres of life, as well as
providing the inspiration and horizons (limits) within which Islamic legislation
may be affected.
Sunnah Prayers: They are the Prayers considered recommended in view of
the fact that God’s Messenger.*(upon him be peace and blessings)*, either performed them often and/or made statements about their meritorious character
and urged Muslims to do them
Sunnatu’llāh: God’s unchanging way and practice from the beginning of
the universe. It has two aspects, one for the life of all creatures, the other for the
guidance of humankind and jinn. History mirrors Sunnatu’llāh.
(as-)Sūr: The Trumpet which will be blown by the archangel Isrāfīl. We do
not know the exact nature of the Trumpet and what is really meant by its being blown. It will be blown twice, and when it is blown the first time, the entire
order of the universe will be disrupted; on its second blowing, all the dead will
be raised in a completely fresh world and order.
(as-)Sūrah: An independent chapter of the Qur’ān
 (at-)Tabarrī: Disowning, to be quit of; declaring to longer have any relation
with
(at-)Tābiūn: Successors; the generation succeeding the Companions of the
Prophet Muhammad*(upon him be peace and blessings)*
(at-)Tablīgh: Conveying a message to others as best as possible; conveying
Islam or God’s Message to people to the extent that, left to their (carnal) souls
or conscience, they can make a free choice between belief and unbelief
(at-)Tabshīr: Giving the good tidings of; making appealing
(The Campaign of ) Tabuk: The military campaign which the Muslims, under the command of God’s Messenger, *(upon him be peace and blessings)*, made
to Tabuk, near the Jordan boundary of Arabia, in the 9th year Hijrah, in order to
counter a Byzantine offensive. The Qur’ān relates it in Sūrah 9, especially from
the perspective that it served as a decisive separation between faith and hypocrisy in al-Madīnah, and the believers proved their loyalty to God’s cause.
(at-)Tabyīn: Clarifying, making clear
(at-)Tadabbur: Pondering deeply
(at-)Tadarru‘: Humble turning (to God); humble devotion and supplication
(at-)Tadhakkur: Reflecting and being mindful
(at-)Tafaqquh: Discerning and understanding, penetrating the essence of a
matter and grasping it
(at-)Tafakkur: Reflecting deeply and systematically
(at-)Tafriqah: Splitting into factions or parties
(at-)Tafsīl: Propounding in detail; spelling out distinctly, making clear, and
putting in ordered sequence
(at-)Tafsīr: Expounding, usually referring to expounding studies of the
Qur’ān
(at-)Tāghūt: The power or powers of evil who institute patterns of belief
and rule in defiance of God
(at-)Tahārah: Purification, cleansing. Purity of soul or spiritual purification
can be accomplished through sincere faith in and submission to God, and freedom from egotism and arrogance. Bodily purification occurs through tayammum, wudū’, and ghusl, according to conditions and types of contamination.
Clothes and other things are usually purified by washing.
(at-)Tahajjud: A Sunnah Prayer done before dawn.
(at-)Tahmīd: Praising; praising God in that one knows and declares Him
with the Attributes belonging and fitting for Him, and thanking Him
(at-)Tajallī al-Wāhidiyah: God’s manifestation of His Names on the whole
of the universe or a species or on a whole; His universal manifestation with all
of His Names related to the universe
(at-)Tajallī al-Ahadiyah: God’s particular manifestation on an individual
thing or being with one or some of His Names
(at-)Takbīr: Saying Allahu Akbar (God is the All-Great); declaring God to
be immeasurably and incomparably great
(at-)Takdhīb: A denial, a contradiction
(at-)Talāq: Divorce
(at-)Tanzīl: Sending down (the Qur’ān) in parts
(at-)Taqdīs: Declaring that God alone is All-Holy and to be worshipped as
God and Lord. It also means calling God’s blessings upon saintly people, saying:
“May God exalt His holiness.”
(at-)Taqwā: Reverent piety towards God; refraining from sins in reverence
for God and piety and receiving His protection against deviations and His punishment
(at-)Tartīl: Reciting calmly and distinctly
(at-)Tasbīh: Glorifying God; proclaiming that God is absolutely free from
any defect and doing anything meaningless and useless, and that He is absolutely above having any likes and partners, any sons or daughters, or bearing any
resemblance with the created. The word of tasbīh is Subhāne’llāh.
(at-)Tashahhud: Giving testimony; a declaration of the Muslim faith during
the sitting position in the prayer, saying: “I bear witness that there is no deity but
God, and again I witness that Muhammad is His servant and Messenger.”
(at-)Taskhīr: Subjugation; subjugating to one’s will and putting under one’s
service
[ J14] at-)Tasrīf: Setting out the signs (of God’s Existence and Unity and
other truths of faith) in diverse ways, from different perspectives
(at-)Tawāf: The rite of going round the Ka‘bah
(at-)Tawakkul: Reliance on, or putting one’s trust (in God)
(at-)Tawbah: Turning to God in repentance
(at-)Tawbat an-Nasūh: A sincere, reforming repentance. ‘Ali, the Prophet’s
cousin and son-in-law and the fourth Caliph, describes a sincere, reforming repentance as follows: “In order that your repentance can be a sincere, reforming,
and valid one, you should (1) sincerely feel remorse for the sin you have committed, (2) fulfill all the obligatory religious duties and make up the missed ones, (3)
return any right you have usurped to its owner, (4) beg the pardon of those you
have offended, (5) resolve not to commit again the sin you have committed, and
(6) make your carnal soul taste the difficulty of obedience to God as you have
caused it to taste the pleasure of sinning.”
(at-)Tawhīd: God’s Oneness and Unity; believing in and declaring God’s
Oneness and Unity; the belief and world-view Islam teaches. By saying God is
One (Wāhid), we mean that He is the Single Divine Being, and that no one or
thing is like or comparable to Him. By His Unity, or by saying that He is One
of Absolute Unity, and the Unique One (Ahad), we mean that He is beyond
all human conceptions and without partners (i.e., parents, sons, or daughters).
Believing in God’s Oneness entails accepting Him as the sole Deity and Lord of
humankind, and so the sole Object of Worship. That, in turn, means recognizing Him as having the exclusive authority to make things lawful or unlawful.
(at-)Tawhīd al-‘Ubūdiyah: Total devotion, submission and subjection to
God, and declaring that none other than God deserves worship
(at-)Tawhīd al-Rubūbiyah: God’s being and affirming Him as the soleole
Creator, Provider, Upbringer, Trainer, Sustainer, Nourisher, Lord and Master of
all creatures
(at-)Tawhīd al-Ulūhiyah: Believing that there is no deity but God, and that
only God has the sole and exclusive right to be worshipped
(at-)Ta’wīl: Referring a word, an attitude, or an action to, or explaining it
with, one of its probable meanings; expounding something read or seen or heard
with other than what first comes to mind and with a rational knowledge that is
not instantly comprehended. Ta’wīl implies the preference for one of the prob-
able meanings.
(at-)Tayammum: Purification for the Prayer using clean dust, earth or stone,
when water for Ghusl or Wudū’ is either unavailable or would be detrimental
to one’s health. It is done by striking the hands lightly on some clean earth and
passing the palms over the face once, and striking the pure earth again with one’s
palms and rubbing the right and left arms alternately from the fingertips to the
elbows.
(at-)Tayyib: Pure and wholesome (in composition and religiously)
(at-)Tazkiyah: Purification (from false beliefs and doctrines, sins, and all
kinds of filth)
(at-)Tilāwah: Studying the Qur’an in order to understand it in the way it
should be understood; reciting the Qur’ān; reciting the Qur’ān and conveying
its meaning and message to others
(at-)Tughyān: Rebellion, insubordination
(al-)‘Ubūdiyah: Servanthood; devoted servanthood to God
(al-)Ukhuwwah: Brotherhood and sisterhood
Ulu’l-absār: Those having the power of “seeing” and discerning
Ulu’l-albāb: People of discernment
UIu’l-amr: Those entrusted with directing Muslims in matters of common
concern; those who are in charge or in authority, or who are leaders
(al-)Ulūhiyah: God’s being the Deity (of the whole creation)
(al-)Ummah: A community following the same way (of belief and lifestyle)
Ummat Muhammad: The community of Muhammad (upon him be peace
and blessings); the whole body of the Muslims
Umm al-mu’minīn: The “Mother of the Believers.” A title given to each
wives of the Prophet Muhammad,*(upon him be peace and blessings)*
(al-)Ummī: Unlettered, illiterate; following no Book revealed by God;
(Prophet) one who neither reads nor writes (and has therefore remained preserved from any traces of the existing written culture, and is thus free from any
intellectual and spiritual pollution)
(al-)’Umrah: The minor pilgrimage; an Islamic rite consisting of al-ihrām,
and at-tawāf, and as-sa’y
(al-)‘Urf: A generally accepted and established social practice and norm of
conduct, one which is not opposed to Islam
(al-)Wācib: What is incumbent or necessary
(al-)Wa‘d: A promise
(al-)Wa‘īd: A threat
(al-)Wahy: Divine Revelation; God’s conveying His Message to a Prophet
in a special way. It occurs in three ways. One is that God suddenly puts the
meaning in the Prophet’s heart and the Prophet knows that this meaning is
from God. The second way or form is that God speaks to a Prophet from behind
a veil. The third way is that God sends an angel to convey His Message to the
Prophet.
(al-)Wajh: A face; a face as representing the person him/herself; good pleasure and approval
(al-)Wakīl: n authorized representative acting on behalf of someone; one
chosen to direct the affairs of another
(al-)Walāyah: Guardianship; friendship; mastership; the relationship of mutual support between the Islamic state and its citizens, and between the citizens
themselves; special nearness to God
[ J15] al-)Waliyy (pl. al-awliyā’): Guardian; intimate friend; confidant; master; one enjoying special nearness to God
(al-)Warāthah: Inheritance
(al-)Wārith: An heir, inheritor
(al-)Wāsi: Guardian (of a child, an incompetent person); executor (of an
estate or will)
(al-)Wasiyyah: Testament, will
(al-)Witr: Odd number; Witr rak‘ahs are odd numbers of rak’ahs such as 1,
3, 5, etc. – usually 1 or 3 – which are performed after the last Prayer at night
(al-)Wudū’: Ablution. It requires washing the face from the top of the forehead to the chin and as far as each ear, and the hands and arms up to the elbow;
and wiping with wet hands a part of the head, and washing the feet up to and
including the ankle. It has also some other acts that are Sunnah to perform.
(al-)Yahūd: The Jews. In Muslim history, the Jews are usually referred to
as Yahūdī, meaning one who belongs to Yahūda –Judah in the Old Testament.
Judah – Yehudah in Hebrew – is the name of one of the two kingdoms which
emerged with the division of the Prophet Solomon’s kingdom after his death,
upon him be peace, and takes this name from Judah, one of the sons of Prophet
Jacob, upon him be peace. According to another opinion, Yahūdī means one
who follows the Law established by Judah, an Israelite jurist who lived in the
second century after Prophet Jesus, upon him be peace. The Jews themselves
name their religion – Judaism – after Judah. The Qur’ān uses the term Yahūdī
for the most rigid enemies of Muslims among the Children of Israel and those
who regard and call themselves as Yahūdī among them.
(al-)Yaqīn: Certainty of faith; having no doubt about the truth of a matter
and arriving at accurate, doubt-free knowledge. This knowledge can come from
either Revelation, or study and verification. Yaqīn has three degrees: first, that
which comes from knowledge (‘ilm al-yaqīn); second, that which depends on
vision and observation (‘ayn al-yaqīn); and third, that which comes from direct
experience (‘haqq al-yaqīn).
(al-)Yawm: Day. The Qur’ān uses the word “day” not only in the sense of
our normal day, but also as time unit and period.
Yawm ad-Dīn: The Day of Judgment
Yawm al-Fasl: Another name for the Day of Judgment, meaning the Day of
Judgment and Distinction (between people)
Yawm al-Jaza’: Another name for the Day of Judgment, meaning the Day
of Recompense
Yawm al-Qiyāmah: The Day of Destruction of the World and Resurrection
(az-)Zakāh: The Prescribed Purifying Alms. It is among the five pillars
of Islam, and refers to the mandatory amount that a Muslim must pay out of
his property. A Muslim who has money beyond a certain quantity is to pay the
Zakāh. It is to be used in eight categories for the welfare of the society, as mentioned in the Qur’ān.
Zakāt al-Fitr: See Sadaqat al-fitr.
(Az-)Zaqqūm: An extremely bitter and thorny tree that grows at the bottom of Hellfire and of which the people of Hell will eat
Zihār: A husband’s saying to his wife, “You are henceforth as my mother’s
back to me,” meaning he seeks divorce. This was a custom among the pagan
Arabs. When a husband said this to his wife, he meant that he would remove
himself from conjugal relations with his wife. This was the equivalent of an
irrevocable divorce, but a woman thus divorced could not marry again. Islam
decisively prohibited and abolished this custom.
(az-)Zinā: Any sexual intercourse between a man and woman who are not
husband and wife, thus denoting both “adultery” and “fornication” in English.
The Qur’ān not only forbids any unlawful sexual intercourse, but also orders
that all ways to it must be blocked.
(az-)Zuhd: Renouncing worldly pleasures and resisting carnal desires for
God’s good pleasure
(az-)Zālim: A wrongdoer. One who does something not at the proper time
and place, and/or in the wrong way, thus causing “darkness” and the wronging of
his own self; having a very wide area of usage, the term includes everyone from
one who does a small wrong, to another who commits the unforgivable sin of
associating partners with God (or denying Him).
(az-)Zulm: Wrongdoing, or doing something not at the proper time and
place, or in the wrong way, thus causing (spiritual) darkness and the wronging
of one’s own self. Having a very wide area of usage, in the terminology of the
Qur’ān, zulm includes a broad range of wrong actions from deviancy in a small
matter to the unforgivable sin of associating partners with God (or denying
Him).
