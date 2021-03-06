/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.sql.CommonDataSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_COMMONDATASOURCE_HPP_DECL
#define J2CPP_JAVAX_SQL_COMMONDATASOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class PrintWriter; } } }


#include <java/io/PrintWriter.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class CommonDataSource;
	class CommonDataSource
		: public object<CommonDataSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit CommonDataSource(jobject jobj)
		: object<CommonDataSource>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getLoginTimeout();
		local_ref< java::io::PrintWriter > getLogWriter();
		void setLoginTimeout(jint);
		void setLogWriter(local_ref< java::io::PrintWriter >  const&);
	}; //class CommonDataSource

} //namespace sql
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_COMMONDATASOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_COMMONDATASOURCE_HPP_IMPL
#define J2CPP_JAVAX_SQL_COMMONDATASOURCE_HPP_IMPL

namespace j2cpp {



javax::sql::CommonDataSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint javax::sql::CommonDataSource::getLoginTimeout()
{
	return call_method<
		javax::sql::CommonDataSource::J2CPP_CLASS_NAME,
		javax::sql::CommonDataSource::J2CPP_METHOD_NAME(0),
		javax::sql::CommonDataSource::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject());
}

local_ref< java::io::PrintWriter > javax::sql::CommonDataSource::getLogWriter()
{
	return call_method<
		javax::sql::CommonDataSource::J2CPP_CLASS_NAME,
		javax::sql::CommonDataSource::J2CPP_METHOD_NAME(1),
		javax::sql::CommonDataSource::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::PrintWriter >
	>(get_jobject());
}

void javax::sql::CommonDataSource::setLoginTimeout(jint a0)
{
	return call_method<
		javax::sql::CommonDataSource::J2CPP_CLASS_NAME,
		javax::sql::CommonDataSource::J2CPP_METHOD_NAME(2),
		javax::sql::CommonDataSource::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void javax::sql::CommonDataSource::setLogWriter(local_ref< java::io::PrintWriter > const &a0)
{
	return call_method<
		javax::sql::CommonDataSource::J2CPP_CLASS_NAME,
		javax::sql::CommonDataSource::J2CPP_METHOD_NAME(3),
		javax::sql::CommonDataSource::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::sql::CommonDataSource,"javax/sql/CommonDataSource")
J2CPP_DEFINE_METHOD(javax::sql::CommonDataSource,0,"getLoginTimeout","()I")
J2CPP_DEFINE_METHOD(javax::sql::CommonDataSource,1,"getLogWriter","()Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(javax::sql::CommonDataSource,2,"setLoginTimeout","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::CommonDataSource,3,"setLogWriter","(Ljava/io/PrintWriter;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_COMMONDATASOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
