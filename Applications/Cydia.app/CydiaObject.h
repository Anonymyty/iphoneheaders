/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:01:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@interface CydiaObject : NSObject {

	MenesObjectHandle<CyteWebViewController, 0> indirect_;
	id delegate_;

}
+(id)_attributeKeys;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)setViewportWidth:(float)arg1 ;
-(void)setAllowsNavigationAction:(id)arg1 ;
-(void)setHidesNavigationBar:(id)arg1 ;
-(void)setScrollAlwaysBounceVertical:(id)arg1 ;
-(void)setButtonImage:(id)arg1 withStyle:(id)arg2 toFunction:(id)arg3 ;
-(void)setButtonTitle:(id)arg1 withStyle:(id)arg2 toFunction:(id)arg3 ;
-(void)setNavigationBarStyle:(id)arg1 ;
-(void)registerFrame:(id)arg1 ;
-(void)addBridgedHost:(id)arg1 ;
-(void)addInsecureHost:(id)arg1 ;
-(void)addInternalRedirect:(id)arg1 :(id)arg2 ;
-(void)addPipelinedHost:(id)arg1 scheme:(id)arg2 ;
-(void)addSource:(id)arg1 :(id)arg2 :(id)arg3 ;
-(char)addTrivialSource:(id)arg1 ;
-(id)du:(id)arg1 ;
-(id)stringWithFormat:(id)arg1 arguments:(id)arg2 ;
-(id)getAllSources;
-(id)getApplicationInfo:(id)arg1 value:(id)arg2 ;
-(id)getDisplayIdentifiers;
-(id)getLocalizedNameForDisplayIdentifier:(id)arg1 ;
-(id)getKernelNumber:(id)arg1 ;
-(id)getKernelString:(id)arg1 ;
-(id)getInstalledPackages;
-(id)getIORegistryEntry:(id)arg1 :(id)arg2 ;
-(id)getLocaleIdentifier;
-(id)getPreferredLanguages;
-(id)getPackageById:(id)arg1 ;
-(id)getMetadataKeys;
-(id)getMetadataValue:(id)arg1 ;
-(id)getSessionValue:(id)arg1 ;
-(void)installPackages:(id)arg1 ;
-(id)isReachable:(id)arg1 ;
-(void)popViewController:(id)arg1 ;
-(void)refreshSources;
-(void)saveConfig;
-(void)setMetadataValue:(id)arg1 :(id)arg2 ;
-(void)setSessionValue:(id)arg1 :(id)arg2 ;
-(id)substitutePackageNames:(id)arg1 ;
-(void)scrollToBottom:(id)arg1 ;
-(void)setNavigationBarTintRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4 ;
-(void)setPasteboardString:(id)arg1 ;
-(void)setPasteboardURL:(id)arg1 ;
-(id)statfs:(id)arg1 ;
-(char)supports:(id)arg1 ;
-(id)coreFoundationVersionNumber;
-(id)firmware;
-(id)mcc;
-(id)mnc;
-(id)bbsnum;
-(id)serial;
-(void)setDelegate:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(void)setHidesBackButton:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)model;
-(void)setBadgeValue:(id)arg1 ;
-(id)idiom;
-(void)close;
-(id)version;
-(void)setToken:(id)arg1 ;
-(id)build;
-(id)attributeKeys;
-(id)hostname;
-(id)role;
-(id)ecid;
-(void)removeButton;
-(void)setScrollIndicatorStyle:(id)arg1 ;
-(id)operator;
-(id)device;
-(void)unload;
@end

