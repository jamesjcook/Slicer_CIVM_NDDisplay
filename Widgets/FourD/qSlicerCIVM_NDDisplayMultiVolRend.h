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

#ifndef __qSlicerCIVM_NDDisplayMultiVolRend_h
#define __qSlicerCIVM_NDDisplayMultiVolRend_h

// Qt includes
#include <QWidget>

// FooBar Widgets includes
//#include "qSlicerCIVM_NDDisplayModuleWidgetsExport.h"
//#include "qSlicerCIVM_NDDisplayFourDModule_WidgetsExport.h"
//#include "qSlicerCIVM_NDDisplayFourDModuleWidgetsExport.h"
#include "qSlicerCIVM_NDDisplayFourDModuleExport.h"

class qSlicerCIVM_NDDisplayMultiVolRendPrivate;

/// \ingroup Slicer_QtModules_CIVM_NDDisplay
class QSLICERCIVM_NDDISPLAYFOURDMODULE_WIDGETS_EXPORT qSlicerCIVM_NDDisplayMultiVolRend
  : public QWidget
    //qSlicer${MODULE_NAME}FourDModule,  "${KIT_UPPER}_WIDGETS_EXPORT")
{
  Q_OBJECT
public:
  typedef QWidget Superclass;
  qSlicerCIVM_NDDisplayMultiVolRend(QWidget *parent=0);
  virtual ~qSlicerCIVM_NDDisplayMultiVolRend();

protected slots:

protected:
  QScopedPointer<qSlicerCIVM_NDDisplayMultiVolRendPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerCIVM_NDDisplayMultiVolRend);
  Q_DISABLE_COPY(qSlicerCIVM_NDDisplayMultiVolRend);
};

#endif
