/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcStairFlightTypeEnum = ENUMERATION OF	(STRAIGHT	,WINDER	,SPIRAL	,CURVED	,FREEFORM	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcStairFlightTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcStairFlightTypeEnumEnum
	{
		ENUM_STRAIGHT,
		ENUM_WINDER,
		ENUM_SPIRAL,
		ENUM_CURVED,
		ENUM_FREEFORM,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcStairFlightTypeEnum();
	IfcStairFlightTypeEnum( IfcStairFlightTypeEnumEnum e ) { m_enum = e; }
	~IfcStairFlightTypeEnum();
	virtual const char* className() const { return "IfcStairFlightTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcStairFlightTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcStairFlightTypeEnumEnum m_enum;
};

