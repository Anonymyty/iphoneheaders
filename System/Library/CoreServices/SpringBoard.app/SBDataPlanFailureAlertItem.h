/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSString;

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem {

	NSString* _carrierName;
	BOOL _newAccount;

}

@property (nonatomic,copy) NSString * carrierName;                             //@synthesize carrierName=_carrierName - In the implementation block
@property (assign,getter=isNewAccount,nonatomic) BOOL newAccount;              //@synthesize newAccount=_newAccount - In the implementation block
+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(BOOL)arg3 ;
-(void)setNewAccount:(BOOL)arg1 ;
-(BOOL)isNewAccount;
-(void)setCarrierName:(NSString *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(NSString *)carrierName;
@end
