/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class WiFiNetwork, UIAlertView, NSString;

@interface APCarPlayAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	WiFiNetwork* _network;
	UIAlertView* _sheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)dismiss;
-(void)showAlertForNetwork:(id)arg1 carName:(id)arg2 delegate:(id)arg3 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 ;
-(id)getNetwork;
@end
