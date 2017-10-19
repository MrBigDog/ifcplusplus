/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcArbitraryClosedProfileDef.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// ENTITY IfcArbitraryClosedProfileDef 
IfcArbitraryClosedProfileDef::IfcArbitraryClosedProfileDef() {}
IfcArbitraryClosedProfileDef::IfcArbitraryClosedProfileDef( int id ) { m_id = id; }
IfcArbitraryClosedProfileDef::~IfcArbitraryClosedProfileDef() {}
shared_ptr<IfcPPObject> IfcArbitraryClosedProfileDef::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcArbitraryClosedProfileDef> copy_self( new IfcArbitraryClosedProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_OuterCurve ) { copy_self->m_OuterCurve = dynamic_pointer_cast<IfcCurve>( m_OuterCurve->getDeepCopy(options) ); }
	return copy_self;
}
void IfcArbitraryClosedProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCARBITRARYCLOSEDPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OuterCurve ) { stream << "#" << m_OuterCurve->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcArbitraryClosedProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcArbitraryClosedProfileDef::toString() const { return L"IfcArbitraryClosedProfileDef"; }
void IfcArbitraryClosedProfileDef::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcArbitraryClosedProfileDef, expecting 3, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_OuterCurve, map );
}
void IfcArbitraryClosedProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcProfileDef::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "OuterCurve", m_OuterCurve ) );
}
void IfcArbitraryClosedProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcArbitraryClosedProfileDef::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcArbitraryClosedProfileDef::unlinkFromInverseCounterparts()
{
	IfcProfileDef::unlinkFromInverseCounterparts();
}