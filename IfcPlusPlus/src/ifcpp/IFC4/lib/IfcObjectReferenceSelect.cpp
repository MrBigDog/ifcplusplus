/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcObjectReferenceSelect.h"

// TYPE IfcObjectReferenceSelect = SELECT	(IfcAddress	,IfcAppliedValue	,IfcExternalReference	,IfcMaterialDefinition	,IfcOrganization	,IfcPerson	,IfcPersonAndOrganization	,IfcTable	,IfcTimeSeries);
shared_ptr<IfcObjectReferenceSelect> IfcObjectReferenceSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcObjectReferenceSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcObjectReferenceSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcObjectReferenceSelect>();
	}
	shared_ptr<IfcObjectReferenceSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
