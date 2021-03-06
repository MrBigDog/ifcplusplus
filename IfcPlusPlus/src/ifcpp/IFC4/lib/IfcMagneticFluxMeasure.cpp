/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMagneticFluxMeasure.h"

// TYPE IfcMagneticFluxMeasure = REAL;
IfcMagneticFluxMeasure::IfcMagneticFluxMeasure() {}
IfcMagneticFluxMeasure::IfcMagneticFluxMeasure( double value ) { m_value = value; }
IfcMagneticFluxMeasure::~IfcMagneticFluxMeasure() {}
shared_ptr<IfcPPObject> IfcMagneticFluxMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMagneticFluxMeasure> copy_self( new IfcMagneticFluxMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMagneticFluxMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMAGNETICFLUXMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMagneticFluxMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcMagneticFluxMeasure> IfcMagneticFluxMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMagneticFluxMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMagneticFluxMeasure>(); }
	shared_ptr<IfcMagneticFluxMeasure> type_object( new IfcMagneticFluxMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
