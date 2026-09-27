# AI Usage Policy

## Purpose

The goal of this policy is to define the scope of AI usage for this project and prevent me from relying on easier solutions suggested by an AI model.

Following this policy will allow me to make mistakes, investigate them, and learn from them the hard way while improving my skills as a software engineer.

## Core Principle

All emulator implementation code must be written manually.

AI-generated emulator code is not allowed in this project. AI usage should reinforce the learning process rather than replace it by providing easier implementation solutions.

## Allowed Uses

### Learning

AI may be used to explain:

1. New concepts that I have not encountered before.
2. C++ language features independently of the emulator implementation.
3. Difficult concepts found in external documentation or learning resources.
4. General examples that are unrelated to the emulator implementation.

Any example provided by AI should be used only to understand the concept and should not be copied into the emulator.

### Resource Discovery

AI may be used to locate relevant documentation, specifications, articles, and other learning resources.

When AI provides an external resource, I should read the original resource myself before asking AI to explain its contents.

If a concept in the resource is difficult to understand, AI may provide an unrelated example to demonstrate the concept.

AI should not translate the resource directly into an emulator implementation.

### Documentation Refinement

AI may be used to:

1. Provide empty document templates.
2. Improve grammar and spelling.
3. Improve sentence structure and readability.
4. Improve the organization of text that I have already written.
5. Suggest questions or topics that may be missing from a document.

AI may not write technical documents from scratch.

The initial content and technical explanation must be written manually by me.

Any AI-assisted document changes must be reviewed before being accepted. If AI adds or modifies technical information, I must understand and be able to explain that information before including it in the repository.

### Code Review

Code review through AI is allowed under the following rules:

1. Only the minimum amount of code required to discuss the problem should be provided.
2. As a general rule, a submitted code snippet should not contain more than one function.
3. AI may explain the general category of a problem or the relevant programming concept.
4. AI may explain why a certain type of behavior could occur.
5. AI should not identify the exact faulty line, condition, or expression.
6. AI should not provide replacement code.
7. AI should not provide exact code changes.
8. AI should not provide pseudocode that directly solves the current implementation problem.

After receiving an explanation, I must locate and implement the actual solution myself.

## Restricted Uses

### Code Generation

AI-generated emulator implementation code is not allowed.

AI may generate small examples only when they are unrelated to the emulator and are used to demonstrate a programming concept.

AI-generated examples must not be copied into the project.

### Bug Fixes

All bug fixes must be designed and implemented manually.

When debugging, AI may explain:

- The general type of problem.
- Relevant C++ behavior.
- Relevant Game Boy hardware concepts.
- Areas or concepts that may be worth investigating.

AI may not:

- Provide the actual fix.
- Identify the exact faulty expression or line.
- Write replacement code.
- Provide implementation-specific pseudocode.
- Rewrite the function being debugged.

### Technical Documentation

Technical documentation must originate from my own research and understanding.

AI may refine documentation that I have already written, but it may not write explanations of emulator components such as the CPU, PPU, memory system, interrupts, timers, cartridges, or audio system from scratch.

AI may suggest topics or questions that I should research and document myself.

### Unverified Technical Content

Technical information should not be added to the repository only because it was provided by AI.

Important technical information should be verified using documentation, specifications, testing, or other reliable sources.

Any technical statement included in the repository must be something that I understand and can explain myself.

## Debugging Rules

The preferred debugging process is:

1. Reproduce the bug.
2. Investigate the behavior manually.
3. Form my own hypothesis about the cause.
4. Use debugging tools, logs, tests, or documentation to investigate further.
5. If I am still stuck, provide AI with only the minimum relevant code.
6. AI may explain the relevant concept or general category of error.
7. AI must not identify the exact faulty expression or provide the solution.
8. I must locate the bug myself.
9. I must design and implement the fix manually.
10. I must verify that the fix works using testing.
11. Important bugs and lessons learned should be documented in the debugging notes.

## Documentation Rules

The first draft of every project document must be written manually.

AI may:

- Correct grammar and spelling.
- Improve sentence flow.
- Improve formatting.
- Reorganize existing content.
- Suggest missing sections or questions.
- Point out unclear explanations.

AI may not:

- Write a technical document from scratch.
- Replace my explanation with an AI-written explanation that I do not understand.
- Add technical claims that I cannot explain or verify.

Before committing AI-assisted documentation changes, I must review the final version and make sure that I understand everything that was added or changed.

## Source and Research Rules

Primary technical documentation should be preferred when possible.

AI may help locate relevant resources, but I should read the original source myself.

During the core development of the emulator, I should avoid studying the source code of existing Game Boy emulators.

The purpose of this restriction is to prevent accidentally copying implementation decisions, architecture, or emulator logic.

Resources such as the following are allowed:

- Hardware documentation.
- Game Boy specifications.
- CPU instruction references.
- Opcode tables.
- Test ROM documentation.
- General educational material.
- Programming language documentation.

Existing emulator source code should not be used as an implementation reference during the core development process.

## Personal Verification

I should be able to explain:

- Every emulator subsystem that I implement.
- Every meaningful code change that I commit.
- Why the implementation works.
- How the relevant Game Boy hardware behaves.
- How important bugs were diagnosed and fixed.

I should not commit code or technical documentation that I cannot explain without relying on an AI-generated answer.

Testing and debugging should be used to verify my understanding whenever possible.

## Policy Changes

This policy may change as the project develops.

Any major change to the AI usage rules should be documented in this file before the new type of AI assistance is used.

Changes should not be made simply to bypass a difficult implementation problem.