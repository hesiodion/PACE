# Software requirements specification

## Table of contents
1. [Change records](#changerecords)
2. [Introduction](#introduction)
3. [Context](#context)
4. [Specifications](#specifications)
    1. [SRS_GUI](#srs_gui)
        1. [SRS_101_GUI](#srs_101_gui)
        2. [SRS_102_GUI_MENU_OS](#srs_102_gui_menu_os)
        3. [SRS_103_GUI_MAIN_PANEL](#srs_103_gui_main_panel)
        4. [SRS_104_GUI_DESCRIPTION_PANEL](#srs_104_gui_description_panel)
        5. [SRS_105_GUI_OPTIONS_PANEL](#srs_105_gui_options_panel)
        6. [SRS_106_GUI_TREE_NODE](#srs_106_gui_tree_node)
        7. [SRS_107_GUI_GPO_FILL_OPTIONS](#srs_107_gui_gpo_fill_options)
        8. [SRS_108_GUI_TICK_GPO](#srs_108_gui_tick_gpo)
        9. [SRS_109_GUI_GPO_HIGHLIGHT](#srs_109_gui_gpo_highlight)
        10. [SRS_110_GUI_NODE_HIGHLIGHT](#srs_110_gui_node_highlight)
        11. [SRS_111_GUI_FILE_MENU](#srs_111_gui_file_menu)
        12. [SRS_112_GUI_COMPARE_BUTTON](#srs_112_gui_compare_button)
        13. [SRS_113_GUI_COMPARE_RESULTS_DISPLAY](#srs_113_gui_compare_results_display)
        14. [SRS_114_GUI_COMPARE_SELECT_UNMATCHED_RESULT](#srs_114_gui_compare_select_unmatched_result)
    2. [SRS_MF](#srs_mf)
        1. [SRS_201_REF_FILES](#srs_201_ref_files)
        2. [SRS_202_FCT_SAVE](#srs_202_fct_save)
        3. [SRS_203_FCT_IMPORT](#srs_203_fct_import)
        4. [SRS_204_FCT_COMPARE](#srs_204_fct_compare)

## Change records <a name="changerecords"></a>

|      Author      |   Last modified   |      Reason      |
|:----------------:|:-----------------:|:----------------:|
| kh0liu           | 14-04-2024        | Update according to template         |

## Introduction <a name="introduction"></a>
This document describes what the software will do and how it will be expected to perform.

## Context <a name="context"></a>
Have a tool to verify that the GPOs applied to the system are similar to a reference.

## Specifications <a name="specifications"></a>

### SRS_GUI <a name="srs_gui"></a>

#### SRS_101_GUI <a name="srs_101_gui"></a>
- The software has a graphical interface divived in three panels : **MAIN_PANEL**, **DESCRIPTION_PANEL**, **OPTIONS_PANEL**.

#### SRS_102_GUI_MENU_OS <a name="srs_102_gui_menu_os"></a>
- The graphical interface offers a drop-down menu allowing you to choose the OS version. Choosing this OS version allows the program to select the correct GPO reference Excel file.
The choice can be offered automatically using functionality that detects the system on which the program is running. The choice must be able to remain manual in the event that the detection goes wrong.

#### SRS_103_GUI_MAIN_PANEL <a name="srs_103_gui_main_panel"></a>
- The graphical interface has a main panel in which the GPO tree of the reference Excel file is displayed.

#### SRS_104_GUI_DESCRIPTION_PANEL <a name="srs_104_gui_description_panel"></a>
- It is possible to select a GPO to have its description displayed in the **DESCRIPTION_PANEL**.

#### SRS_105_GUI_OPTIONS_PANEL <a name="srs_105_gui_options_panel"></a>
- It is possible to select a GPO to have its options displayed in the **OPTIONS_PANEL**.

#### SRS_106_GUI_TREE_NODE <a name="srs_106_gui_tree_node"></a>
- It is possible to fold/unfold each nodes of the GPO tree to display/hide the GPOs present in the nodes.

#### SRS_107_GUI_GPO_FILL_OPTIONS <a name="srs_107_gui_gpo_fill_options"></a>
- It is possible, for a GPO selected and allowing it, to enter options and save them for this GPO. Selecting another GPO and returning to the one where the options were entered should not remove the options.

#### SRS_108_GUI_TICK_GPO <a name="srs_108_gui_tick_gpo"></a>
- It is possible to check/uncheck each GPO to take them into account or not during the comparison.

#### SRS_109_GUI_GPO_HIGHLIGHT <a name="srs_109_gui_gpo_highlight"></a>
- When a GPO is selected, the row is highlighted in green.

#### SRS_110_GUI_NODE_HIGHLIGHT <a name="srs_110_gui_node_highlight"></a>
- When an unfolded node contains one or more selected GPOs, the latter is highlighted in green and indicates in parentheses the number of GPOs entered directly under it as well as the number of nodes directly under it which also have selected GPOs.

#### SRS_111_GUI_FILE_MENU <a name="srs_111_gui_file_menu"></a>
- The graphical interface has a "File" menu offering the following choices: "Save", "Import".

#### SRS_112_GUI_COMPARE_BUTTON <a name="srs_112_gui_compare_button"></a>
- The GUI has a “Compare” button.

#### SRS_113_GUI_COMPARE_RESULTS_DISPLAY <a name="srs_113_gui_compare_results_display"></a>
- After clicking the "Compare" button, the differences appear by highlighting the GPOs in yellow. When an unfolded node contains one or more GPOs that do not match the reference, the latter is highlighted in yellow and indicates in parentheses the number of GPOs directly under it that do not match the reference as well as the number of nodes directly under him who also have GPOs which are also not adequate.

#### SRS_114_GUI_COMPARE_SELECT_UNMATCHED_RESULT <a name="srs_114_gui_compare_select_unmatched_result"></a>
- Clicking on an unmatched GPO displays what is expected by the reference in **DESCRIPTION_PANEL** on the one hand and what is currently on the system in the **OPTIONS_PANEL** on the other hand.

### SRS_MF <a name="srs_mf"></a>

#### SRS_201_REF_FILES <a name="srs_201_ref_files"></a>
- The software must use the reference Excel files that can be obtained from the site https://admx.help/.

#### SRS_202_FCT_SAVE <a name="srs_202_fct_save"></a>
- "Save" function: Allows you to save the positioned parameters (GPO checked, their options, the reference Excel file) in a file (TBD format) using the Windows file saving windows.

#### SRS_203_FCT_IMPORT <a name="srs_203_fct_import"></a>
- “Import” function: Allows you to import a file (TBD format) from a previous save of the tool. All configured GPOs must be found.

#### SRS_204_FCT_COMPARE <a name="srs_204_fct_compare"></a>
- "Compare" function: Compares the selected GPOs and their options with the system GPOs and their options. 

