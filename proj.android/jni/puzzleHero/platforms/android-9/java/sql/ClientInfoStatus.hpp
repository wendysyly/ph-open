/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.ClientInfoStatus
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CLIENTINFOSTATUS_HPP_DECL
#define J2CPP_JAVA_SQL_CLIENTINFOSTATUS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class ClientInfoStatus;
	class ClientInfoStatus
		: public object<ClientInfoStatus>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit ClientInfoStatus(jobject jobj)
		: object<ClientInfoStatus>(jobj)
		{
		}

		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Enum>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		static local_ref< array< local_ref< java::sql::ClientInfoStatus >, 1> > values();
		static local_ref< java::sql::ClientInfoStatus > valueOf(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::sql::ClientInfoStatus > > REASON_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::sql::ClientInfoStatus > > REASON_UNKNOWN_PROPERTY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::sql::ClientInfoStatus > > REASON_VALUE_INVALID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::sql::ClientInfoStatus > > REASON_VALUE_TRUNCATED;
	}; //class ClientInfoStatus

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CLIENTINFOSTATUS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CLIENTINFOSTATUS_HPP_IMPL
#define J2CPP_JAVA_SQL_CLIENTINFOSTATUS_HPP_IMPL

namespace j2cpp {



java::sql::ClientInfoStatus::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::sql::ClientInfoStatus::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

java::sql::ClientInfoStatus::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::sql::ClientInfoStatus::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< java::sql::ClientInfoStatus >, 1> > java::sql::ClientInfoStatus::values()
{
	return call_static_method<
		java::sql::ClientInfoStatus::J2CPP_CLASS_NAME,
		java::sql::ClientInfoStatus::J2CPP_METHOD_NAME(0),
		java::sql::ClientInfoStatus::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::sql::ClientInfoStatus >, 1> >
	>();
}

local_ref< java::sql::ClientInfoStatus > java::sql::ClientInfoStatus::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::sql::ClientInfoStatus::J2CPP_CLASS_NAME,
		java::sql::ClientInfoStatus::J2CPP_METHOD_NAME(1),
		java::sql::ClientInfoStatus::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::sql::ClientInfoStatus >
	>(a0);
}




static_field<
	java::sql::ClientInfoStatus::J2CPP_CLASS_NAME,
	java::sql::ClientInfoStatus::J2CPP_FIELD_NAME(0),
	java::sql::ClientInfoStatus::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::sql::ClientInfoStatus >
> java::sql::ClientInfoStatus::REASON_UNKNOWN;

static_field<
	java::sql::ClientInfoStatus::J2CPP_CLASS_NAME,
	java::sql::ClientInfoStatus::J2CPP_FIELD_NAME(1),
	java::sql::ClientInfoStatus::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::sql::ClientInfoStatus >
> java::sql::ClientInfoStatus::REASON_UNKNOWN_PROPERTY;

static_field<
	java::sql::ClientInfoStatus::J2CPP_CLASS_NAME,
	java::sql::ClientInfoStatus::J2CPP_FIELD_NAME(2),
	java::sql::ClientInfoStatus::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::sql::ClientInfoStatus >
> java::sql::ClientInfoStatus::REASON_VALUE_INVALID;

static_field<
	java::sql::ClientInfoStatus::J2CPP_CLASS_NAME,
	java::sql::ClientInfoStatus::J2CPP_FIELD_NAME(3),
	java::sql::ClientInfoStatus::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::sql::ClientInfoStatus >
> java::sql::ClientInfoStatus::REASON_VALUE_TRUNCATED;


J2CPP_DEFINE_CLASS(java::sql::ClientInfoStatus,"java/sql/ClientInfoStatus")
J2CPP_DEFINE_METHOD(java::sql::ClientInfoStatus,0,"values","()[java.sql.ClientInfoStatus")
J2CPP_DEFINE_METHOD(java::sql::ClientInfoStatus,1,"valueOf","(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;")
J2CPP_DEFINE_METHOD(java::sql::ClientInfoStatus,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::sql::ClientInfoStatus,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::sql::ClientInfoStatus,0,"REASON_UNKNOWN","Ljava/sql/ClientInfoStatus;")
J2CPP_DEFINE_FIELD(java::sql::ClientInfoStatus,1,"REASON_UNKNOWN_PROPERTY","Ljava/sql/ClientInfoStatus;")
J2CPP_DEFINE_FIELD(java::sql::ClientInfoStatus,2,"REASON_VALUE_INVALID","Ljava/sql/ClientInfoStatus;")
J2CPP_DEFINE_FIELD(java::sql::ClientInfoStatus,3,"REASON_VALUE_TRUNCATED","Ljava/sql/ClientInfoStatus;")
J2CPP_DEFINE_FIELD(java::sql::ClientInfoStatus,4,"$VALUES","[java.sql.ClientInfoStatus")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CLIENTINFOSTATUS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION