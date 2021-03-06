/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIButton, NSString, PSKeychainSyncManager;

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate> {

	UIButton* _footerButton;
	NSString* _phoneNumber;
	NSString* _dialingPrefix;
	NSString* _countryCode;
	PSKeychainSyncManager* _keychainSyncManager;

}

@property (nonatomic,retain) NSString * phoneNumber;                                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                                        //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic,__weak) PSKeychainSyncManager * keychainSyncManager;              //@synthesize keychainSyncManager=_keychainSyncManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(NSString *)phoneNumber;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(NSString *)dialingPrefix;
-(void)dismissAlerts;
-(void)setKeychainSyncManager:(PSKeychainSyncManager *)arg1 ;
-(void)showSupportVerification;
-(PSKeychainSyncManager *)keychainSyncManager;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)specifiers;
@end

