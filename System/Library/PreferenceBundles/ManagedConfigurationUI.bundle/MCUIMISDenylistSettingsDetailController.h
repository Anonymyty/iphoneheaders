/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface MCUIMISDenylistSettingsDetailController : PSListController {

	BOOL _reenabled;

}

@property (assign) BOOL reenabled;              //@synthesize reenabled=_reenabled - In the implementation block
-(void)dealloc;
-(id)init;
-(id)specifiers;
-(void)_reloadAsync;
-(void)setOverride:(id)arg1 ;
-(void)_askForReenableConfirmation;
-(BOOL)overridden;
-(id)_reenableButtonSpecifier;
-(BOOL)reenabled;
-(void)setReenabled:(BOOL)arg1 ;
@end
