/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcLogicalOperatorEnum = ENUMERATION OF	(LOGICALAND	,LOGICALOR	,LOGICALXOR	,LOGICALNOTAND	,LOGICALNOTOR);
class IFCPP_EXPORT IfcLogicalOperatorEnum : virtual public IfcPPObject
{
public:
	enum IfcLogicalOperatorEnumEnum
	{
		ENUM_LOGICALAND,
		ENUM_LOGICALOR,
		ENUM_LOGICALXOR,
		ENUM_LOGICALNOTAND,
		ENUM_LOGICALNOTOR
	};

	IfcLogicalOperatorEnum();
	IfcLogicalOperatorEnum( IfcLogicalOperatorEnumEnum e ) { m_enum = e; }
	~IfcLogicalOperatorEnum();
	virtual const char* className() const { return "IfcLogicalOperatorEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLogicalOperatorEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcLogicalOperatorEnumEnum m_enum;
};

