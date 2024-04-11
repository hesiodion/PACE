####################
#### PACE's SRS ####
####################
 
Context of use: Have a tool to verify that the GPOs applied to the system are similar to a reference.

#1. The program has a graphical interface.

#2. The graphical interface offers a drop-down menu allowing you to choose the OS version. Choosing this OS version allows the program to select the correct GPO reference Excel file.
The choice can be offered automatically using functionality that detects the system on which the program is running. The choice must be able to remain manual in the event that the detection goes wrong.

#3. The graphical interface has a main window in which the GPO tree of the reference Excel file is displayed.

#4. The reference Excel files are those that can be obtained from the site https://admx.help/.

#5. It is possible to fold/unfold each of the nodes of the GPO tree to display/hide the GPOs present in the nodes.

#6. It is possible to select a GPO to have its description and the options that can be entered there.

#7. It is possible, for a GPO selected and allowing it, to enter options and save them for this GPO. Selecting another GPO and returning to the one where the options were entered should not remove the options.

#8. It is possible to check/uncheck each GPO to take them into account or not during the comparison.

#9. When a GPO is selected, the row is highlighted in green.

#10. When an unfolded node contains one or more selected GPOs, the latter is highlighted in green and indicates in parentheses the number of GPOs entered directly under it as well as the number of nodes directly under it which also have selected GPOs.

#11. The graphical interface has a "File" menu offering the following choices: Save, Import.

#12. The GUI has a “Compare” button.

#14. "Save" function: Allows you to save the positioned parameters (GPO checked, their options, the reference Excel file) in a file (TBD format) using the Windows file saving windows.

#15. “Import” function: Allows you to import a file (TBD format) from a previous save of the tool. All configured GPOs must be found.

#16. "Compare" function: Compares the selected GPOs and their options with the system GPOs and their options. In the main window, the differences appear by highlighting the GPOs in yellow. When an unfolded node contains one or more GPOs that do not match the reference, the latter is highlighted in yellow and indicates in parentheses the number of GPOs directly under it that do not match the reference as well as the number of nodes directly under him who also have GPOs which are also not adequate.

#17. Clicking on an unmatched GPO displays what is expected by the reference on the one hand and what is currently on the system on the other hand.
