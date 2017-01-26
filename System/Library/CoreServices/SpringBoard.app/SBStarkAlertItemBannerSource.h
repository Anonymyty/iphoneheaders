/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerSource.h>
#import <SpringBoard/SBAlertItemsControllerObserver.h>

@class NSString;

@interface SBStarkAlertItemBannerSource : SBStarkBannerSource <SBAlertItemsControllerObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void*)arg2 ;
-(void)dealloc;
@end
