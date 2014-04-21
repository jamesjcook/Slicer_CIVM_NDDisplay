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

#ifndef __qSlicerCIVM_NDDisplaySimpleVolRend_h
#define __qSlicerCIVM_NDDisplaySimpleVolRend_h

// Qt includes
//#include <QWidget>
#include <qSlicerCIVM_NDDisplayBlankWidget>

// FooBar Widgets includes
//#include "qSlicerCIVM_NDDisplayModuleWidgetsExport.h"
#include "qSlicerCIVM_NDDisplayThreeDModuleExport.h"

class qSlicerCIVM_NDDisplaySimpleVolRendPrivate;

/// \ingroup Slicer_QtModules_CIVM_NDDisplay
class QSLICERCIVM_NDDISPLAYTHREEDMODULE_WIDGETS_EXPORT qSlicerCIVM_NDDisplaySimpleVolRend
//  : public QWidget
  : public qSlicerCIVM_NDDisplayBlankWidget
{
  Q_OBJECT
public:
  //  typedef QWidget Superclass;
  typedef qSlicerCIVM_NDDisplayBlankWidget Superclass;
  qSlicerCIVM_NDDisplaySimpleVolRend(QWidget *parent=0);
  //  qSlicerCIVM_NDDisplaySimpleVolRend(qSlicerCIVM_NDDisplayBlankWidget *parent=0);

  virtual ~qSlicerCIVM_NDDisplaySimpleVolRend();

protected slots:

protected:
  QScopedPointer<qSlicerCIVM_NDDisplaySimpleVolRendPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerCIVM_NDDisplaySimpleVolRend);
  Q_DISABLE_COPY(qSlicerCIVM_NDDisplaySimpleVolRend);
};

#endif
