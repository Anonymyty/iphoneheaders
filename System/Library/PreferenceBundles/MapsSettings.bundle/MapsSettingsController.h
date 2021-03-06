/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MapsSettings.bundle/MapsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface MapsSettingsController : PSListController {

	BOOL _supportsNavigation;
	BOOL _canLocalizeLabels;
	NSString* _emailAddress;
	long long _disabledTransitModes;

}

@property (assign,nonatomic) long long disabledTransitModes;               //@synthesize disabledTransitModes=_disabledTransitModes - In the implementation block
@property (nonatomic,readonly) long long enabledTransitModes; 
-(id)_labelLanguageAlwaysUILanguage:(id)arg1 ;
-(id)_valueForDefaultsKey:(id)arg1 bundleID:(id)arg2 ;
-(void)_synchronizeNanoDefaultsForDomain:(id)arg1 key:(id)arg2 container:(id)arg3 ;
-(void)_setPauseSpokenAudio:(id)arg1 specifier:(id)arg2 ;
-(void)setDisabledTransitModes:(long long)arg1 ;
-(void)_setValue:(id)arg1 forDefaultsKey:(id)arg2 bundleID:(id)arg3 syncToNano:(BOOL)arg4 ;
-(void)_setAllowEmailCorrespondence:(id)arg1 specifier:(id)arg2 ;
-(long long)disabledTransitModes;
-(id)_allowEmailCorrespondence:(id)arg1 ;
-(id)_pauseSpokenAudio:(id)arg1 ;
-(long long)enabledTransitModes;
-(id)_navVoiceFooterTextForVolume:(id)arg1 ;
-(void)_updateSettingsFromCurrentGeoCountryConfiguration;
-(void)_configureCell:(id)arg1 forTransitSpecifier:(id)arg2 ;
-(void)_setLabelLanguageAlwaysUILanguage:(id)arg1 specifier:(id)arg2 ;
-(void)contryConfigurationDidChange:(id)arg1 ;
-(long long)_adjustedSectionWithSection:(long long)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

