/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString;

@interface LoadMatchStatusOperation : ISOperation {

	NSNumber* _accountID;
	unsigned long long _matchStatus;
	NSString* _userAgent;

}

@property (copy) NSString * userAgent; 
@property (readonly) unsigned long long matchStatus; 
-(id)_newMatchStatusOperationWithURLBag:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(unsigned long long)matchStatus;
-(id)initWithAccountIdentifier:(id)arg1 ;
@end
