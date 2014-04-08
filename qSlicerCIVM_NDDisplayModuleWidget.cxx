/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QDebug>

// SlicerQt includes
#include "qSlicerCIVM_NDDisplayModuleWidget.h"
#include "ui_qSlicerCIVM_NDDisplayModuleWidget.h"
#include "qSlicerCIVM_NDDisplayFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerCIVM_NDDisplayModuleWidgetPrivate: public Ui_qSlicerCIVM_NDDisplayModuleWidget
{
public:
  qSlicerCIVM_NDDisplayModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplayModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayModuleWidgetPrivate::qSlicerCIVM_NDDisplayModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplayModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayModuleWidget::qSlicerCIVM_NDDisplayModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerCIVM_NDDisplayModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayModuleWidget::~qSlicerCIVM_NDDisplayModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerCIVM_NDDisplayModuleWidget::setup()
{
  Q_D(qSlicerCIVM_NDDisplayModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();

}

