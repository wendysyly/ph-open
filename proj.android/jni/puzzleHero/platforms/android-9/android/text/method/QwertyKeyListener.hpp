/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.QwertyKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_QWERTYKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_QWERTYKEYLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class KeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class BaseKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { namespace TextKeyListener_ { class Capitalize; } } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MetaKeyKeyListener; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }


#include <android/text/Editable.hpp>
#include <android/text/Spannable.hpp>
#include <android/text/method/BaseKeyListener.hpp>
#include <android/text/method/KeyListener.hpp>
#include <android/text/method/MetaKeyKeyListener.hpp>
#include <android/text/method/TextKeyListener.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class QwertyKeyListener;
	class QwertyKeyListener
		: public object<QwertyKeyListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit QwertyKeyListener(jobject jobj)
		: object<QwertyKeyListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::method::KeyListener>() const;
		operator local_ref<android::text::method::BaseKeyListener>() const;
		operator local_ref<android::text::method::MetaKeyKeyListener>() const;


		QwertyKeyListener(local_ref< android::text::method::TextKeyListener_::Capitalize > const&, jboolean);
		static local_ref< android::text::method::QwertyKeyListener > getInstance(jboolean, local_ref< android::text::method::TextKeyListener_::Capitalize >  const&);
		jint getInputType();
		jboolean onKeyDown(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		static void markAsReplaced(local_ref< android::text::Spannable >  const&, jint, jint, local_ref< java::lang::String >  const&);
	}; //class QwertyKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_QWERTYKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_QWERTYKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_QWERTYKEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::QwertyKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::method::QwertyKeyListener::operator local_ref<android::text::method::KeyListener>() const
{
	return local_ref<android::text::method::KeyListener>(get_jobject());
}

android::text::method::QwertyKeyListener::operator local_ref<android::text::method::BaseKeyListener>() const
{
	return local_ref<android::text::method::BaseKeyListener>(get_jobject());
}

android::text::method::QwertyKeyListener::operator local_ref<android::text::method::MetaKeyKeyListener>() const
{
	return local_ref<android::text::method::MetaKeyKeyListener>(get_jobject());
}


android::text::method::QwertyKeyListener::QwertyKeyListener(local_ref< android::text::method::TextKeyListener_::Capitalize > const &a0, jboolean a1)
: object<android::text::method::QwertyKeyListener>(
	call_new_object<
		android::text::method::QwertyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::QwertyKeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::QwertyKeyListener::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< android::text::method::QwertyKeyListener > android::text::method::QwertyKeyListener::getInstance(jboolean a0, local_ref< android::text::method::TextKeyListener_::Capitalize > const &a1)
{
	return call_static_method<
		android::text::method::QwertyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::QwertyKeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::QwertyKeyListener::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::method::QwertyKeyListener >
	>(a0, a1);
}

jint android::text::method::QwertyKeyListener::getInputType()
{
	return call_method<
		android::text::method::QwertyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::QwertyKeyListener::J2CPP_METHOD_NAME(2),
		android::text::method::QwertyKeyListener::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jboolean android::text::method::QwertyKeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::QwertyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::QwertyKeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::QwertyKeyListener::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

void android::text::method::QwertyKeyListener::markAsReplaced(local_ref< android::text::Spannable > const &a0, jint a1, jint a2, local_ref< java::lang::String > const &a3)
{
	return call_static_method<
		android::text::method::QwertyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::QwertyKeyListener::J2CPP_METHOD_NAME(4),
		android::text::method::QwertyKeyListener::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::text::method::QwertyKeyListener,"android/text/method/QwertyKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::QwertyKeyListener,0,"<init>","(Landroid/text/method/TextKeyListener$Capitalize;Z)V")
J2CPP_DEFINE_METHOD(android::text::method::QwertyKeyListener,1,"getInstance","(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/QwertyKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::QwertyKeyListener,2,"getInputType","()I")
J2CPP_DEFINE_METHOD(android::text::method::QwertyKeyListener,3,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::QwertyKeyListener,4,"markAsReplaced","(Landroid/text/Spannable;IILjava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_QWERTYKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION