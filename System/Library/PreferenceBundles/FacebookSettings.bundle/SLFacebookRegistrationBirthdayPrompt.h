/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>
#import <UIKit/UITableViewDataSource.h>

@class NSDate, PSSpecifier, NSString;

@interface SLFacebookRegistrationBirthdayPrompt : SLFacebookRegistrationInfoPrompt <UITableViewDataSource> {

	NSDate* _birthday;
	PSSpecifier* _birthdaySpecifier;
	PSSpecifier* _birthdayPickerSpecifier;

}

@property (readonly) NSDate * birthday; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isReadyToValidate;
-(id)_birthdayWithSpecifier:(id)arg1 ;
-(void)_legalLinkButtonTapped:(id)arg1 ;
-(void)updateRegistrationInfo;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)validate;
-(void)datePickerChanged:(id)arg1 ;
-(NSDate *)birthday;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(id)specifiers;
@end

