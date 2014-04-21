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

// Blank Widgets includes
#include "qSlicerCIVM_NDDisplayBlankWidget.h"
#include "ui_qSlicerCIVM_NDDisplayBlankWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_CIVM_NDDisplay
class qSlicerCIVM_NDDisplayBlankWidgetPrivate
  : public Ui_qSlicerCIVM_NDDisplayBlankWidget
{
  Q_DECLARE_PUBLIC(qSlicerCIVM_NDDisplayBlankWidget);
protected:
  qSlicerCIVM_NDDisplayBlankWidget* const q_ptr;

public:
  qSlicerCIVM_NDDisplayBlankWidgetPrivate(
    qSlicerCIVM_NDDisplayBlankWidget& object);
  virtual void setupUi(qSlicerCIVM_NDDisplayBlankWidget*);
};

// --------------------------------------------------------------------------
qSlicerCIVM_NDDisplayBlankWidgetPrivate
::qSlicerCIVM_NDDisplayBlankWidgetPrivate(
  qSlicerCIVM_NDDisplayBlankWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerCIVM_NDDisplayBlankWidgetPrivate
::setupUi(qSlicerCIVM_NDDisplayBlankWidget* widget)
{
  this->Ui_qSlicerCIVM_NDDisplayBlankWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplayBlankWidget methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayBlankWidget
::qSlicerCIVM_NDDisplayBlankWidget(qSlicerWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerCIVM_NDDisplayBlankWidgetPrivate(*this) )
{
  Q_D(qSlicerCIVM_NDDisplayBlankWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayBlankWidget
::~qSlicerCIVM_NDDisplayBlankWidget()
{
}
