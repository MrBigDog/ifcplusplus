/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcBendingParameterSelect.h"
#include "IfcMeasureValue.h"

// TYPE IfcPlaneAngleMeasure = REAL;
class IFCPP_EXPORT IfcPlaneAngleMeasure : public IfcBendingParameterSelect, public IfcMeasureValue
{
public:
	IfcPlaneAngleMeasure();
	IfcPlaneAngleMeasure( double value );
	~IfcPlaneAngleMeasure();
	virtual const char* className() const { return "IfcPlaneAngleMeasure"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPlaneAngleMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	double m_value;
};

