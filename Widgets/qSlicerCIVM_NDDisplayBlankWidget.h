/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerCIVM_NDDisplayBlankWidget_h
#define __qSlicerCIVM_NDDisplayBlankWidget_h

// Qt includes
#include <qSlicerWidget.h>

// Blank Widgets includes
#include "qSlicerCIVM_NDDisplayModuleWidgetsExport.h"

class qSlicerCIVM_NDDisplayBlankWidgetPrivate;

/// \ingroup Slicer_QtModules_CIVM_NDDisplay
class Q_SLICER_MODULE_CIVM_NDDISPLAY_WIDGETS_EXPORT qSlicerCIVM_NDDisplayBlankWidget
  : public qSlicerWidget
{
  Q_OBJECT
public:
  typedef qSlicerWidget Superclass;
  qSlicerCIVM_NDDisplayBlankWidget(qSlicerWidget *parent=0);
  virtual ~qSlicerCIVM_NDDisplayBlankWidget();

protected slots:

protected:
  QScopedPointer<qSlicerCIVM_NDDisplayBlankWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerCIVM_NDDisplayBlankWidget);
  Q_DISABLE_COPY(qSlicerCIVM_NDDisplayBlankWidget);
};

#endif
