/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <useractivityd/useractivityd-Structs.h>
@class AWDServerConnection;

@interface UADiagnosticManager : NSObject {

	AWDServerConnection* _serverConn;

}

@property (nonatomic,retain) AWDServerConnection * serverConn;              //@synthesize serverConn=_serverConn - In the implementation block
+(id)sharedManager;
-(void)submitUserActivityWasDiscovered:(id)arg1 ;
-(void)submitUserActivityWasSuggestedInfo:(id)arg1 ;
-(void)setServerConn:(AWDServerConnection *)arg1 ;
-(AWDServerConnection *)serverConn;
-(id)firstPartyActivityTypeOrUnknown:(id)arg1 ;
-(void)submitUserActivityBecameCurrent:(id)arg1 withToken:(const SCD_Struct_UA0*)arg2 ;
-(void)submitUserActivityWasContinuedInfo:(id)arg1 ;
-(id)init;
@end
