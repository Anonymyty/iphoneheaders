/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GAXClient/GAXClient-Structs.h>
@class AXIPCClient, AXIPCServer;

@interface GAXClient : NSObject {

	BOOL _enabled;
	BOOL _allowsMotion;
	BOOL _allowsKeyboardTextInput;
	BOOL _providesViewServices;
	unsigned _serverMode;
	AXIPCClient* _backboardClient;
	AXIPCServer* _appServer;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned serverMode;                                  //@synthesize serverMode=_serverMode - In the implementation block
@property (assign,nonatomic) BOOL allowsMotion;                                    //@synthesize allowsMotion=_allowsMotion - In the implementation block
@property (assign,nonatomic) BOOL allowsKeyboardTextInput;                         //@synthesize allowsKeyboardTextInput=_allowsKeyboardTextInput - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInWorkspace,nonatomic,readonly) BOOL inWorkspace; 
@property (assign,nonatomic) BOOL providesViewServices;                            //@synthesize providesViewServices=_providesViewServices - In the implementation block
@property (nonatomic,retain) AXIPCClient * backboardClient;                        //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXIPCServer * appServer;                              //@synthesize appServer=_appServer - In the implementation block
+(id)sharedInstance;
-(void)setProvidesViewServices:(BOOL)arg1 ;
-(id)_tableViewCellAncestorForView:(id)arg1 ;
-(BOOL)providesViewServices;
-(void)setAllowsMotion:(BOOL)arg1 ;
-(BOOL)_viewRequiresPadding:(id)arg1 ;
-(BOOL)isViewInIgnoredTouchRegion:(id)arg1 ;
-(void)_notifyAppDidBecomeActive;
-(CGRect)_selectionTargetFrameForView:(id)arg1 ;
-(BOOL)allowsKeyboardTextInput;
-(BOOL)_viewShouldBeIgnored:(id)arg1 ;
-(BOOL)isInWorkspace;
-(id)_handleSettingsDidChange:(id)arg1 ;
-(AXIPCServer *)appServer;
-(id)_handlePrepareClientAppForTransitionToWorkspace:(id)arg1 ;
-(BOOL)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 error:(id*)arg5 ;
-(id)_ancestorView:(id)arg1 matchesBlock:(/*^block*/id)arg2 ;
-(void)setServerMode:(unsigned)arg1 ;
-(long long)_stateForRestrictionWithIdentifier:(id)arg1 ;
-(void)setAllowsKeyboardTextInput:(BOOL)arg1 ;
-(id)_guidedAccessRestrictionDelegate;
-(id)_hashForView:(id)arg1 ;
-(AXIPCClient *)backboardClient;
-(void)_notifyGuidedAccessClientDidLoad;
-(id)_allWindowsIncludingStaticChromeForClassicMode:(BOOL)arg1 includingStatusBarWindow:(BOOL)arg2 ;
-(id)_affectedViewsForPath:(id)arg1 ;
-(BOOL)shouldShowKeyboardsInViewServices;
-(id)_handleGetRestrictionIdentifiers:(id)arg1 ;
-(id)_handleGetAffectedViewsForPath:(id)arg1 ;
-(id)_messageServiceName;
-(id)_handleRestrictionDidChangeState:(id)arg1 ;
-(void)asynchronouslyPresentGuidedAccessActiveBanner;
-(void)setAppServer:(AXIPCServer *)arg1 ;
-(id)_controlAncestorForView:(id)arg1 ;
-(id)_handleHideKeyboard:(id)arg1 ;
-(void)_handlePreferenceDidChange:(id)arg1 ;
-(unsigned)serverMode;
-(BOOL)allowsMotion;
-(void)_handleAppDidBecomeActive:(id)arg1 ;
-(long long)stateForRestrictionWithIdentifier:(id)arg1 ;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setPasscode:(id)arg1 ;
@end
