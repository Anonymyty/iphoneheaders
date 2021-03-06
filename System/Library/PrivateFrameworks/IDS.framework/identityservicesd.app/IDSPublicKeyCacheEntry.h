/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:02 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface IDSPublicKeyCacheEntry : NSObject {

	NSString* _fromURI;
	NSString* _forURI;
	NSString* _forService;
	NSMutableDictionary* _map;

}

@property (nonatomic,copy) NSString * forService;                    //@synthesize forService=_forService - In the implementation block
@property (nonatomic,copy) NSString * fromURI;                       //@synthesize fromURI=_fromURI - In the implementation block
@property (nonatomic,copy) NSString * forURI;                        //@synthesize forURI=_forURI - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * map;              //@synthesize map=_map - In the implementation block
-(NSString *)fromURI;
-(void)setFromURI:(NSString *)arg1 ;
-(NSString *)forURI;
-(void)setForURI:(NSString *)arg1 ;
-(NSString *)forService;
-(void)setForService:(NSString *)arg1 ;
-(NSMutableDictionary *)map;
-(void)setMap:(NSMutableDictionary *)arg1 ;
@end

