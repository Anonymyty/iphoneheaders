/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScheduleSettings/ScheduleSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class ACAccountStore, PSSpecifier, NSString;

@interface ScheduleSettingsController : PSListController <UIActionSheetDelegate> {

	ACAccountStore* _accountStore;
	PSSpecifier* _checkedSpecifier;
	long long _rowToSelect;
	long long _radioGroup;
	BOOL _isLowPowerMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initForContentSize:(CGSize)arg1 ;
-(void)listItemSelected:(id)arg1 ;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(id)specifiers;
-(id)_makeMCCSpecifiers;
-(void)_readScheduleSettings;
-(BOOL)isExcludedAccountType:(id)arg1 ;
-(id)_specifiersForMCCAccount:(id)arg1 ;
-(id)_specifierForMCCAccount:(id)arg1 dataclasses:(id)arg2 canPush:(BOOL)arg3 canFetch:(BOOL)arg4 canManual:(BOOL)arg5 ;
-(id)_mccSchedule:(id)arg1 ;
-(void)_setMCCSchedule:(id)arg1 specifier:(id)arg2 ;
-(int)styleForAccount:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)pushEnabled:(id)arg1 ;
-(void)setPushEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setPollInterval:(id)arg1 specifier:(id)arg2 ;
@end
