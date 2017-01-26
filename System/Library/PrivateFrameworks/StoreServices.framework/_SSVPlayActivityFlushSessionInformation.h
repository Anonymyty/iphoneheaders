/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableIndexSet;

@interface _SSVPlayActivityFlushSessionInformation : NSObject {

	NSString* _endpointIdentifier;
	NSMutableIndexSet* _revisionsIndexSet;
	NSString* _revisionVersionToken;
	unsigned long long _sessionToken;

}

@property (nonatomic,copy) NSString * endpointIdentifier;                        //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * revisionsIndexSet;              //@synthesize revisionsIndexSet=_revisionsIndexSet - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                      //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
@property (assign,nonatomic) unsigned long long sessionToken;                    //@synthesize sessionToken=_sessionToken - In the implementation block
-(NSMutableIndexSet *)revisionsIndexSet;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(unsigned long long)sessionToken;
-(NSString *)endpointIdentifier;
-(NSString *)revisionVersionToken;
-(void)setRevisionsIndexSet:(NSMutableIndexSet *)arg1 ;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(void)setSessionToken:(unsigned long long)arg1 ;
@end
