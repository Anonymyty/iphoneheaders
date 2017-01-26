/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:05:14 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSString;

@interface CellDataActivationFailureAlertItem : NSObject {

	int _error;
	BOOL _suggestWiFi;
	NSString* _reason;
	dict* _additionalData;
	NSString* _settingsText;
	NSString* _okText;
	NSString* _body;
	NSString* _title;

}
-(id)initWithErrorCode:(int)arg1 reason:(id)arg2 additionalData:(dict*)arg3 suggestWiFi:(BOOL)arg4 ;
-(void)button_config:(BOOL)arg1 ;
-(void)show;
-(void)dealloc;
@end
