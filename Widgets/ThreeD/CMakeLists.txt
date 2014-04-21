

#set(KIT qSlicer${MODULE_NAME}ThreeDModule)

#-----------------------------------------------------------------------------

### project(qSlicer${MODULE_NAME}ModuleWidgets)
### set(KIT ${PROJECT_NAME})

#string(TOUPPER ${KIT} KIT_UPPER)
#set(${KIT}_EXPORT_DIRECTIVE "${KIT_UPPER}_WIDGETS_EXPORT")

set(${KIT}_INCLUDE_DIRECTORIES
   ${PROJECT_NAME_INCLUDE_DIRECTORIES}
  )

set(${KIT}_SRCS
#   qSlicer${MODULE_NAME}FooBarWidget.cxx
#   qSlicer${MODULE_NAME}FooBarWidget.h
    qSlicer${MODULE_NAME}SimpleVolRend.cxx
    qSlicer${MODULE_NAME}SimpleVolRend.h
  )

 set(${KIT}_MOC_SRCS
   #../qSlicer${MODULE_NAME}BlankWidget.h
   )

 set(${KIT}_UI_SRCS
   #../../Resources/UI/qSlicer${MODULE_NAME}BlankWidget.ui
   )

 set(${KIT}_RESOURCES
   #../../Resources/UI/qSlicer${MODULE_NAME}BlankWidget.ui
   )

set(${KIT}_TARGET_LIBRARIES
  ${KIT}
  #vtkSlicer${MODULE_NAME}ModuleLogic
  )

 #-----------------------------------------------------------------------------
# SlicerMacroBuildModuleWidgets(
#   NAME ${KIT}
#   EXPORT_DIRECTIVE ${${KIT}_EXPORT_DIRECTIVE}
#   INCLUDE_DIRECTORIES ${${KIT}_INCLUDE_DIRECTORIES}
#   SRCS ${${KIT}_SRCS}
#   MOC_SRCS ${${KIT}_MOC_SRCS}
#   UI_SRCS ${${KIT}_UI_SRCS}
#   TARGET_LIBRARIES ${${KIT}_TARGET_LIBRARIES}
#   RESOURCES ${${KIT}_RESOURCES}
#   WRAP_PYTHONQT
#   )

