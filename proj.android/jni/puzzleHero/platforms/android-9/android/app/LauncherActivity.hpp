/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.LauncherActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_LAUNCHERACTIVITY_HPP_DECL
#define J2CPP_ANDROID_APP_LAUNCHERACTIVITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ResolveInfo; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace app { class ListActivity; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace view { namespace LayoutInflater_ { class Factory; } } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace view { class ContextThemeWrapper; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/app/Activity.hpp>
#include <android/app/ListActivity.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/pm/ResolveInfo.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Bundle.hpp>
#include <android/view/ContextThemeWrapper.hpp>
#include <android/view/LayoutInflater.hpp>
#include <android/view/View.hpp>
#include <android/view/Window.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace app {

	class LauncherActivity;
	namespace LauncherActivity_ {

		class IconResizer;
		class IconResizer
			: public object<IconResizer>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)

			explicit IconResizer(jobject jobj)
			: object<IconResizer>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			IconResizer(local_ref< android::app::LauncherActivity > const&);
			local_ref< android::graphics::drawable::Drawable > createIconThumbnail(local_ref< android::graphics::drawable::Drawable >  const&);

		}; //class IconResizer

		class ListItem;
		class ListItem
			: public object<ListItem>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)

			explicit ListItem(jobject jobj)
			: object<ListItem>(jobj)
			, resolveInfo(jobj)
			, label(jobj)
			, icon(jobj)
			, packageName(jobj)
			, className(jobj)
			, extras(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			ListItem();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::content::pm::ResolveInfo > > resolveInfo;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::CharSequence > > label;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::drawable::Drawable > > icon;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > packageName;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > className;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::os::Bundle > > extras;
		}; //class ListItem

	} //namespace LauncherActivity_

	class LauncherActivity
		: public object<LauncherActivity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)

		typedef LauncherActivity_::IconResizer IconResizer;
		typedef LauncherActivity_::ListItem ListItem;

		explicit LauncherActivity(jobject jobj)
		: object<LauncherActivity>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::ContextWrapper>() const;
		operator local_ref<android::app::ListActivity>() const;
		operator local_ref<android::app::Activity>() const;
		operator local_ref<android::view::LayoutInflater_::Factory>() const;
		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;
		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::view::ContextThemeWrapper>() const;


		LauncherActivity();
		local_ref< java::util::List > makeListItems();
	}; //class LauncherActivity

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_LAUNCHERACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_LAUNCHERACTIVITY_HPP_IMPL
#define J2CPP_ANDROID_APP_LAUNCHERACTIVITY_HPP_IMPL

namespace j2cpp {




android::app::LauncherActivity_::IconResizer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::app::LauncherActivity_::IconResizer::IconResizer(local_ref< android::app::LauncherActivity > const &a0)
: object<android::app::LauncherActivity_::IconResizer>(
	call_new_object<
		android::app::LauncherActivity_::IconResizer::J2CPP_CLASS_NAME,
		android::app::LauncherActivity_::IconResizer::J2CPP_METHOD_NAME(0),
		android::app::LauncherActivity_::IconResizer::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< android::graphics::drawable::Drawable > android::app::LauncherActivity_::IconResizer::createIconThumbnail(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::app::LauncherActivity_::IconResizer::J2CPP_CLASS_NAME,
		android::app::LauncherActivity_::IconResizer::J2CPP_METHOD_NAME(1),
		android::app::LauncherActivity_::IconResizer::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::app::LauncherActivity_::IconResizer,"android/app/LauncherActivity$IconResizer")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity_::IconResizer,0,"<init>","(Landroid/app/LauncherActivity;)V")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity_::IconResizer,1,"createIconThumbnail","(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_FIELD(android::app::LauncherActivity_::IconResizer,0,"this$0","Landroid/app/LauncherActivity;")


android::app::LauncherActivity_::ListItem::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::app::LauncherActivity_::ListItem::ListItem()
: object<android::app::LauncherActivity_::ListItem>(
	call_new_object<
		android::app::LauncherActivity_::ListItem::J2CPP_CLASS_NAME,
		android::app::LauncherActivity_::ListItem::J2CPP_METHOD_NAME(0),
		android::app::LauncherActivity_::ListItem::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, resolveInfo(get_jobject())
, label(get_jobject())
, icon(get_jobject())
, packageName(get_jobject())
, className(get_jobject())
, extras(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::app::LauncherActivity_::ListItem,"android/app/LauncherActivity$ListItem")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity_::ListItem,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::app::LauncherActivity_::ListItem,0,"resolveInfo","Landroid/content/pm/ResolveInfo;")
J2CPP_DEFINE_FIELD(android::app::LauncherActivity_::ListItem,1,"label","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::app::LauncherActivity_::ListItem,2,"icon","Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_FIELD(android::app::LauncherActivity_::ListItem,3,"packageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::LauncherActivity_::ListItem,4,"className","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::LauncherActivity_::ListItem,5,"extras","Landroid/os/Bundle;")



android::app::LauncherActivity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::app::ListActivity>() const
{
	return local_ref<android::app::ListActivity>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::view::LayoutInflater_::Factory>() const
{
	return local_ref<android::view::LayoutInflater_::Factory>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

android::app::LauncherActivity::operator local_ref<android::view::ContextThemeWrapper>() const
{
	return local_ref<android::view::ContextThemeWrapper>(get_jobject());
}


android::app::LauncherActivity::LauncherActivity()
: object<android::app::LauncherActivity>(
	call_new_object<
		android::app::LauncherActivity::J2CPP_CLASS_NAME,
		android::app::LauncherActivity::J2CPP_METHOD_NAME(0),
		android::app::LauncherActivity::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}









local_ref< java::util::List > android::app::LauncherActivity::makeListItems()
{
	return call_method<
		android::app::LauncherActivity::J2CPP_CLASS_NAME,
		android::app::LauncherActivity::J2CPP_METHOD_NAME(8),
		android::app::LauncherActivity::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::List >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::app::LauncherActivity,"android/app/LauncherActivity")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,1,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,2,"onSetContentView","()V")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,3,"onListItemClick","(Landroid/widget/ListView;Landroid/view/View;IJ)V")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,4,"intentForPosition","(I)Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,5,"itemForPosition","(I)Landroid/app/LauncherActivity$ListItem;")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,6,"getTargetIntent","()Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,7,"onQueryPackageManager","(Landroid/content/Intent;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::app::LauncherActivity,8,"makeListItems","()Ljava/util/List;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_LAUNCHERACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
