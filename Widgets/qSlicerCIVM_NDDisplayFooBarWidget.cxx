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

// FooBar Widgets includes
#include "qSlicerCIVM_NDDisplayFooBarWidget.h"
#include "ui_qSlicerCIVM_NDDisplayFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_CIVM_NDDisplay
class qSlicerCIVM_NDDisplayFooBarWidgetPrivate
  : public Ui_qSlicerCIVM_NDDisplayFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerCIVM_NDDisplayFooBarWidget);
protected:
  qSlicerCIVM_NDDisplayFooBarWidget* const q_ptr;

public:
  qSlicerCIVM_NDDisplayFooBarWidgetPrivate(
    qSlicerCIVM_NDDisplayFooBarWidget& object);
  virtual void setupUi(qSlicerCIVM_NDDisplayFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerCIVM_NDDisplayFooBarWidgetPrivate
::qSlicerCIVM_NDDisplayFooBarWidgetPrivate(
  qSlicerCIVM_NDDisplayFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerCIVM_NDDisplayFooBarWidgetPrivate
::setupUi(qSlicerCIVM_NDDisplayFooBarWidget* widget)
{
  this->Ui_qSlicerCIVM_NDDisplayFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplayFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayFooBarWidget
::qSlicerCIVM_NDDisplayFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerCIVM_NDDisplayFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerCIVM_NDDisplayFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayFooBarWidget
::~qSlicerCIVM_NDDisplayFooBarWidget()
{
}
