#pragma once

#include "raaFacarde.h"
#include <osg\material>
#include <osg\Geode>

class TrafficLightFacarde : public raaFacarde
{
public:TrafficLightFacarde(osg::Node* pPart, osg::Vec3 vTrans, float fRot, float fScale);
	  virtual ~TrafficLightFacarde();
	  void initLights(osg::Node* pPart);
	  void createMaterial(osg::Vec3f vColour, osg::Material* mat);
	  int m_iTrafficLightStatus;
	  int m_iUpdateCounter = 3;
	  void setRedTrafficLight();
	  void setAmberTrafficLight();
	  void setGreenTrafficLight();
	  void resetUpdateCounter();
	  osg::Vec3f getWorldDetectionPoint();
	  osg::Matrix getWorldRotationPoint();

protected:
	osg::Geode* m_pRedTrafficLight;
	osg::Geode* m_pAmberTrafficLight;
	osg::Geode* m_pGreenTrafficLight;

	osg::Material* m_pRedTrafficLightOnMaterial;
	osg::Material* m_pRedTrafficLightOffMaterial;

	osg::Material* m_pAmberTrafficLightOnMaterial;
	osg::Material* m_pAmberTrafficLightOffMaterial;

	osg::Material* m_pGreenTrafficLightOnMaterial;
	osg::Material* m_pGreenTrafficLightOffMaterial;
};

