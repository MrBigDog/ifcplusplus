/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcParameterizedProfileDef.h"
class IFCPP_EXPORT IfcPositiveLengthMeasure;
class IFCPP_EXPORT IfcNonNegativeLengthMeasure;
class IFCPP_EXPORT IfcPlaneAngleMeasure;
//ENTITY
class IFCPP_EXPORT IfcAsymmetricIShapeProfileDef : public IfcParameterizedProfileDef
{ 
public:
	IfcAsymmetricIShapeProfileDef();
	IfcAsymmetricIShapeProfileDef( int id );
	~IfcAsymmetricIShapeProfileDef();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 15; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcAsymmetricIShapeProfileDef"; }
	virtual const std::wstring toString() const;


	// IfcProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcProfileTypeEnum>								m_ProfileType;
	//  shared_ptr<IfcLabel>										m_ProfileName;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
	//  std::vector<weak_ptr<IfcProfileProperties> >				m_HasProperties_inverse;

	// IfcParameterizedProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcAxis2Placement2D>								m_Position;					//optional

	// IfcAsymmetricIShapeProfileDef -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPositiveLengthMeasure>						m_BottomFlangeWidth;
	shared_ptr<IfcPositiveLengthMeasure>						m_OverallDepth;
	shared_ptr<IfcPositiveLengthMeasure>						m_WebThickness;
	shared_ptr<IfcPositiveLengthMeasure>						m_BottomFlangeThickness;
	shared_ptr<IfcNonNegativeLengthMeasure>						m_BottomFlangeFilletRadius;	//optional
	shared_ptr<IfcPositiveLengthMeasure>						m_TopFlangeWidth;
	shared_ptr<IfcPositiveLengthMeasure>						m_TopFlangeThickness;		//optional
	shared_ptr<IfcNonNegativeLengthMeasure>						m_TopFlangeFilletRadius;	//optional
	shared_ptr<IfcNonNegativeLengthMeasure>						m_BottomFlangeEdgeRadius;	//optional
	shared_ptr<IfcPlaneAngleMeasure>							m_BottomFlangeSlope;		//optional
	shared_ptr<IfcNonNegativeLengthMeasure>						m_TopFlangeEdgeRadius;		//optional
	shared_ptr<IfcPlaneAngleMeasure>							m_TopFlangeSlope;			//optional
};

