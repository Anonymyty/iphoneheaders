/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer.h>

@class NSString;

@interface DADClientShareResponseDelegate : DADClientDelegate <DAEventsCalendarSharingResponseConsumer> {

	long long _response;
	NSString* _calendarID;
	NSString* _shareID;

}

@property (assign,nonatomic) long long response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSString * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,retain) NSString * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)response;
-(void)setResponse:(long long)arg1 ;
-(void)shareResponseFinishedWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 response:(long long)arg3 calendarID:(id)arg4 ;
-(void)respondToShareRequest;
-(void)setCalendarID:(NSString *)arg1 ;
-(NSString *)calendarID;
-(NSString *)shareID;
-(void)setShareID:(NSString *)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end
