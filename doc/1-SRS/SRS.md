# Software requirements specification

## Table of contents
1. [Change records](#changerecords)
2. [Introduction](#introduction)
3. [Context](#context)
4. [Specifications](#specifications)
    1. [SRS_GUI](#SRS_section1)
        1. [SRS_101_GUI](#SRS_101)
        2. [SRS_102_GUI_MENU_OS](#SRS_102)
        3. [SRS_103_GUI_MAIN_PANEL](#SRS_103)
        4. [SRS_104_GUI_DESCRIPTION_PANEL](#SRS_104)
        5. [SRS_105_GUI_OPTIONS_PANEL](#SRS_105)
        6. [SRS_106_GUI_TREE_NODE](#SRS_106)
        7. [SRS_107_GUI_GPO_FILL_OPTIONS](#SRS_107)
        8. [SRS_108_GUI_TICK_GPO](#SRS_108)
        9. [SRS_109_GUI_GPO_HIGHLIGHT](#SRS_109)
        10. [SRS_110_GUI_NODE_HIGHLIGHT](#SRS_110)
        11. [SRS_111_GUI_FILE_MENU](#SRS_111)
        12. [SRS_112_GUI_COMPARE_BUTTON](#SRS_112)
        13. [SRS_113_GUI_COMPARE_RESULTS_DISPLAY](#SRS_113)
        14. [SRS_114_GUI_COMPARE_SELECT_UNMATCHED_RESULT](#SRS_114)
    2. [SRS_MF](#SRS_section2)
        1. [SRS_201_REF_FILES](#SRS_201)
        2. [SRS_202_FCT_SAVE](#SRS_202)
        3. [SRS_203_FCT_IMPORT](#SRS_203)
        4. [SRS_204_FCT_COMPARE](#SRS_204)

## Change records <a name="changerecords"></a>

|      Author      |   Last modified   |      Reason      |
|:----------------:|:-----------------:|:----------------:|
| kh0liu           | 14-04-2024        | Update according to template         |



## Introduction <a name="introduction"></a>
This document describes what the software will do and how it will be expected to perform.

## Context <a name="context"></a>
Have a tool to verify that the GPOs applied to the system are similar to a reference.

## Specifications <a name="specifications"></a>
### SRS_GUI <a name="SRS_section1"></a>

#### SRS_101_GUI <a name="SRS_101"></a>
- The software has a graphical interface divived in three panels : **MAIN_PANEL**, **DESCRIPTION_PANEL**, **OPTIONS_PANEL**.

#### SRS_102_GUI_MENU_OS <a name="SRS_102"></a>
- The graphical interface offers a drop-down menu allowing you to choose the OS version. Choosing this OS version allows the program to select the correct GPO reference Excel file.
The choice can be offered automatically using functionality that detects the system on which the program is running. The choice must be able to remain manual in the event that the detection goes wrong.

#### SRS_103_GUI_MAIN_PANEL <a name="SRS_103"></a>
- The graphical interface has a main panel in which the GPO tree of the reference Excel file is displayed.

#### SRS_104_GUI_DESCRIPTION_PANEL <a name="SRS_104"></a>
- It is possible to select a GPO to have its description displayed in the **DESCRIPTION_PANEL**.

#### SRS_105_GUI_OPTIONS_PANEL <a name="SRS_105"></a>
- It is possible to select a GPO to have its options displayed in the **OPTIONS_PANEL**.

#### SRS_106_GUI_TREE_NODE <a name="SRS_106"></a>
- It is possible to fold/unfold each nodes of the GPO tree to display/hide the GPOs present in the nodes.

#### SRS_107_GUI_GPO_FILL_OPTIONS <a name="SRS_107"></a>
- It is possible, for a GPO selected and allowing it, to enter options and save them for this GPO. Selecting another GPO and returning to the one where the options were entered should not remove the options.

#### SRS_108_GUI_TICK_GPO <a name="SRS_108"></a>
- It is possible to check/uncheck each GPO to take them into account or not during the comparison.

#### SRS_109_GUI_GPO_HIGHLIGHT <a name="SRS_109"></a>
- When a GPO is selected, the row is highlighted in green.

#### SRS_110_GUI_NODE_HIGHLIGHT <a name="SRS_110"></a>
- When an unfolded node contains one or more selected GPOs, the latter is highlighted in green and indicates in parentheses the number of GPOs entered directly under it as well as the number of nodes directly under it which also have selected GPOs.

#### SRS_111_GUI_FILE_MENU <a name="SRS_111"></a>
- The graphical interface has a "File" menu offering the following choices: "Save", "Import".

#### SRS_112_GUI_COMPARE_BUTTON <a name="SRS_112"></a>
- The GUI has a “Compare” button.

#### SRS_113_GUI_COMPARE_RESULTS_DISPLAY <a name="SRS_113"></a>
- After clicking the "Compare" button, the differences appear by highlighting the GPOs in yellow. When an unfolded node contains one or more GPOs that do not match the reference, the latter is highlighted in yellow and indicates in parentheses the number of GPOs directly under it that do not match the reference as well as the number of nodes directly under him who also have GPOs which are also not adequate.

#### SRS_114_GUI_COMPARE_SELECT_UNMATCHED_RESULT <a name="SRS_114"></a>
- Clicking on an unmatched GPO displays what is expected by the reference in **DESCRIPTION_PANEL** on the one hand and what is currently on the system in the **OPTIONS_PANEL** on the other hand.

### SRS_MF <a name="SRS_section2"></a>

#### SRS_201_REF_FILES <a name="SRS_201"></a>
- The software must use the reference Excel files that can be obtained from the site https://admx.help/.

#### SRS_202_FCT_SAVE <a name="SRS_202"></a>
- "Save" function: Allows you to save the positioned parameters (GPO checked, their options, the reference Excel file) in a file (TBD format) using the Windows file saving windows.

#### SRS_203_FCT_IMPORT <a name="SRS_203"></a>
- “Import” function: Allows you to import a file (TBD format) from a previous save of the tool. All configured GPOs must be found.

#### SRS_204_FCT_COMPARE <a name="SRS_204"></a>
- "Compare" function: Compares the selected GPOs and their options with the system GPOs and their options. 

