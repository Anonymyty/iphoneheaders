/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface WebPluginDatabase : NSObject {

	NSMutableDictionary* plugins;
	NSMutableSet* registeredMIMETypes;
	NSArray* plugInPaths;
	NSMutableSet* pluginInstanceViews;

}
+(id)_defaultPlugInPaths;
+(id)sharedDatabaseIfExists;
+(void)closeSharedDatabase;
+(void)setAdditionalWebPlugInPaths:(id)arg1 ;
+(id)sharedDatabase;
-(void)_removePlugin:(id)arg1 ;
-(id)_scanForNewPlugins;
-(void)_addPlugin:(id)arg1 ;
-(id)_plugInPaths;
-(void)setPlugInPaths:(id)arg1 ;
-(id)pluginForMIMEType:(id)arg1 ;
-(id)pluginForExtension:(id)arg1 ;
-(BOOL)isMIMETypeRegistered:(id)arg1 ;
-(void)addPluginInstanceView:(id)arg1 ;
-(void)removePluginInstanceView:(id)arg1 ;
-(void)removePluginInstanceViewsFor:(id)arg1 ;
-(void)destroyAllPluginInstanceViews;
-(void)dealloc;
-(id)init;
-(void)close;
-(void)refresh;
-(id)plugins;
@end

