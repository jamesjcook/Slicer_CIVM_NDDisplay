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
#include <QtPlugin>

// CIVM_NDDisplay Logic includes
#include <vtkSlicerCIVM_NDDisplayLogic.h>

// CIVM_NDDisplay includes
#include "qSlicerCIVM_NDDisplayModule.h"
#include "qSlicerCIVM_NDDisplayModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerCIVM_NDDisplayModule, qSlicerCIVM_NDDisplayModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerCIVM_NDDisplayModulePrivate
{
public:
  qSlicerCIVM_NDDisplayModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplayModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayModulePrivate
::qSlicerCIVM_NDDisplayModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerCIVM_NDDisplayModule methods

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayModule
::qSlicerCIVM_NDDisplayModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerCIVM_NDDisplayModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerCIVM_NDDisplayModule::~qSlicerCIVM_NDDisplayModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerCIVM_NDDisplayModule::helpText()const
{
  return "This is a loadable module bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerCIVM_NDDisplayModule::acknowledgementText()const
{
  return "This work was was partially funded by NIH grant 3P41RR013218-12S1";
}

//-----------------------------------------------------------------------------
QStringList qSlicerCIVM_NDDisplayModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Jean-Christophe Fillion-Robin (Kitware)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerCIVM_NDDisplayModule::icon()const
{
  return QIcon(":/Icons/CIVM_NDDisplay.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerCIVM_NDDisplayModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerCIVM_NDDisplayModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerCIVM_NDDisplayModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerCIVM_NDDisplayModule
::createWidgetRepresentation()
{
  return new qSlicerCIVM_NDDisplayModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerCIVM_NDDisplayModule::createLogic()
{
  return vtkSlicerCIVM_NDDisplayLogic::New();
}
