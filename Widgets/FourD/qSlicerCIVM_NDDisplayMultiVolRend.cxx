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
#include "qSlicerCIVM_NDDisplayMultiVolRend.h"
//#include "ui_qSlicerCIVM_NDDisplayMultiVolRend.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_CIVM_NDDisplay
class qSlicerCIVM_NDDisplayMultiVolRendPrivate
//  : public Ui_qSlicerCIVM_NDDisplayMultiVolRend
{
  Q_DECLARE_PUBLIC(qSlicerCIVM_NDDisplayMultiVolRend);
protected:
  qSlicerCIVM_NDDisplayMultiVolRend* const q_ptr;

public:
  qSlicerCIVM_NDDisplayMultiVolRendPrivate(
    qSlicerCIVM_NDDisplayMultiVolRend& object);
  virtual void setupUi(qSlicerCIVM_NDDisplayMultiVolRend*);
};

// --------------------------------------------------------------------------
qSlicerCIVM_NDDisplayMultiVolRendPrivate
::qSlicerCIVM_NDDisplayMultiVolRendPrivate(
  qSlicerCIVM_NDDisplayMultiVolRend& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerCIVM_NDDisplayMultiVolRendPrivate
::setupUi(qSlicerCIVM_NDDisplayMultiVolRend* widget)
{
  //this->Ui_qSlicerCIVM_NDDisplayMultiVolRend::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplayMultiVolRend methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayMultiVolRend
::qSlicerCIVM_NDDisplayMultiVolRend(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerCIVM_NDDisplayMultiVolRendPrivate(*this) )
{
  Q_D(qSlicerCIVM_NDDisplayMultiVolRend);
  //  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayMultiVolRend
::~qSlicerCIVM_NDDisplayMultiVolRend()
{
}
