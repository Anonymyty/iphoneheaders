/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/EKCalendar.servicebundle/EKCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EKCalendar/EKAlertItem.h>

@class NSArray, NSDictionary, UIAlertView, NSString;

@interface EKCalendarItemAlertItem : EKAlertItem {

	NSArray* _actionsForDisplayedButtons;
	NSDictionary* _subActions;
	UIAlertView* _alertSheet;
	NSString* _actionGroupIdentifierToUse;

}

@property (nonatomic,retain) NSString * actionGroupIdentifierToUse;              //@synthesize actionGroupIdentifierToUse=_actionGroupIdentifierToUse - In the implementation block
-(void)removeAlertViews;
-(BOOL)_validateActionArray:(id)arg1 ;
-(NSString *)actionGroupIdentifierToUse;
-(void)_configureAlertView:(id)arg1 withActionIdentifiers:(id)arg2 defaultActionIdentifier:(id)arg3 boldedActionIdentifier:(id)arg4 ;
-(void)dismissAlertView:(id)arg1 withClickedButtonIndex:(long long)arg2 ;
-(void)setActionGroupIdentifierToUse:(NSString *)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end
