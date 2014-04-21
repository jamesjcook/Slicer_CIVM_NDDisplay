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
#include "qSlicerCIVM_NDDisplaySimpleVolRend.h"
//#include "ui_qSlicerCIVM_NDDisplaySimpleVolRend.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_CIVM_NDDisplay
class qSlicerCIVM_NDDisplaySimpleVolRendPrivate
//  : public Ui_qSlicerCIVM_NDDisplaySimpleVolRend
{
  Q_DECLARE_PUBLIC(qSlicerCIVM_NDDisplaySimpleVolRend);
protected:
  qSlicerCIVM_NDDisplaySimpleVolRend* const q_ptr;

public:
  qSlicerCIVM_NDDisplaySimpleVolRendPrivate(
    qSlicerCIVM_NDDisplaySimpleVolRend& object);
  virtual void setupUi(qSlicerCIVM_NDDisplaySimpleVolRend*);
};

// --------------------------------------------------------------------------
qSlicerCIVM_NDDisplaySimpleVolRendPrivate
::qSlicerCIVM_NDDisplaySimpleVolRendPrivate(
  qSlicerCIVM_NDDisplaySimpleVolRend& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerCIVM_NDDisplaySimpleVolRendPrivate
::setupUi(qSlicerCIVM_NDDisplaySimpleVolRend* widget)
{
  //  this->Ui_qSlicerCIVM_NDDisplaySimpleVolRend::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplaySimpleVolRend methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplaySimpleVolRend
::qSlicerCIVM_NDDisplaySimpleVolRend(QWidget* parentWidget)
//::qSlicerCIVM_NDDisplaySimpleVolRend(qSlicerCIVM_NDDisplayBlankWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerCIVM_NDDisplaySimpleVolRendPrivate(*this) )
{
  Q_D(qSlicerCIVM_NDDisplaySimpleVolRend);
  //  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplaySimpleVolRend
::~qSlicerCIVM_NDDisplaySimpleVolRend()
{
}
