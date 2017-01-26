/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext, NSMutableDictionary, NSMapTable;

@interface JSWrapperMap : NSObject {

	JSContext* m_context;
	NSMutableDictionary* m_classMap;
	unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > >* m_cachedJSWrappers;
	NSMapTable* m_cachedObjCWrappers;

}
-(id)classInfoForClass:(Class)arg1 ;
-(id)jsWrapperForObject:(id)arg1 ;
-(id)objcWrapperForJSValueRef:(OpaqueJSValueRef)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end
