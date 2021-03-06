/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpResponseFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEFACTORY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class StatusLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/StatusLine.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpResponseFactory;
	class HttpResponseFactory
		: public object<HttpResponseFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit HttpResponseFactory(jobject jobj)
		: object<HttpResponseFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::HttpResponse > newHttpResponse(local_ref< org::apache::http::ProtocolVersion >  const&, jint, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< org::apache::http::HttpResponse > newHttpResponse(local_ref< org::apache::http::StatusLine >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class HttpResponseFactory

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpResponseFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::HttpResponse > org::apache::http::HttpResponseFactory::newHttpResponse(local_ref< org::apache::http::ProtocolVersion > const &a0, jint a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::HttpResponseFactory::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponseFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpResponseFactory::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1, a2);
}

local_ref< org::apache::http::HttpResponse > org::apache::http::HttpResponseFactory::newHttpResponse(local_ref< org::apache::http::StatusLine > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::HttpResponseFactory::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponseFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpResponseFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpResponseFactory,"org/apache/http/HttpResponseFactory")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponseFactory,0,"newHttpResponse","(Lorg/apache/http/ProtocolVersion;ILorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponseFactory,1,"newHttpResponse","(Lorg/apache/http/StatusLine;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
