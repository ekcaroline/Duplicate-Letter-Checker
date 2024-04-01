# Duplicate Letters Test Suite

## Overview

This program serves as a test suite for a C++ class called `CharLinkedList`, designed to manage linked lists of characters. The primary objective of the test suite is to verify whether the characters in the linked list are the same, specifically assessing the functionality of the `checkRecurseHelper()` function implemented within the `CharLinkedList` class.

## Functionality

The `CharLinkedList` class is expected to contain a method named `checkRecurseHelper()`, which likely checks if the characters in the linked list are in a specific order or pattern. The test suite provides various test cases to evaluate the behavior of this function under different scenarios.

## Test Cases

The test suite includes multiple test cases, each designed to assess different aspects of the `checkRecurseHelper()` function. These test cases cover scenarios such as:

- Testing when all characters in the list are the same.
- Testing when characters are in a specific order or pattern.
- Testing when characters are not in the expected order or pattern.
- Testing edge cases, such as when the list contains only one character or multiple identical characters.

## Output Verification

The test suite employs the `checkAnswer()` function to compare the received output of the `checkRecurseHelper()` function with the expected output for each test case. If the received output matches the expected output, the test is marked as "PASSED." Otherwise, it is marked as "FAILED," along with the expected and received outputs.
