/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDerivedUnitElement.h"
#include "ifcpp/IFC4/include/IfcNamedUnit.h"

// ENTITY IfcDerivedUnitElement 
IfcDerivedUnitElement::IfcDerivedUnitElement() {}
IfcDerivedUnitElement::IfcDerivedUnitElement( int id ) { m_entity_id = id; }
IfcDerivedUnitElement::~IfcDerivedUnitElement() {}
shared_ptr<IfcPPObject> IfcDerivedUnitElement::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDerivedUnitElement> copy_self( new IfcDerivedUnitElement() );
	if( m_Unit ) { copy_self->m_Unit = dynamic_pointer_cast<IfcNamedUnit>( m_Unit->getDeepCopy(options) ); }
	copy_self->m_Exponent = m_Exponent;
	return copy_self;
}
void IfcDerivedUnitElement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCDERIVEDUNITELEMENT" << "(";
	if( m_Unit ) { stream << "#" << m_Unit->m_entity_id; } else { stream << "$"; }
	stream << ",";
	stream << m_Exponent;
	stream << ");";
}
void IfcDerivedUnitElement::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcDerivedUnitElement::toString() const { return L"IfcDerivedUnitElement"; }
void IfcDerivedUnitElement::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDerivedUnitElement, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Unit, map );
	readIntValue( args[1], m_Exponent );
}
void IfcDerivedUnitElement::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "Unit", m_Unit ) );
	vec_attributes.push_back( std::make_pair( "Exponent", shared_ptr<IfcPPIntAttribute>( new IfcPPIntAttribute( m_Exponent ) ) ) );
}
void IfcDerivedUnitElement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcDerivedUnitElement::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcDerivedUnitElement::unlinkFromInverseCounterparts()
{
}
