/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString, NSNumber;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * eventType; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (assign) double originalTime; 
@property (nonatomic,retain) NSNumber * pixelRatio; 
@property (nonatomic,retain) NSNumber * screenHeight; 
@property (nonatomic,retain) NSNumber * screenWidth; 
@property (nonatomic,retain) NSNumber * windowHeight; 
@property (nonatomic,retain) NSString * windowOrientation; 
@property (nonatomic,retain) NSNumber * windowWidth; 
@property (nonatomic,retain) NSString * applicationIdentifier; 
@property (nonatomic,retain) NSNumber * clientVersion; 
@property (nonatomic,retain) NSString * hostApplicationIdentifier; 
@property (nonatomic,retain) NSNumber * previousClientVersion; 
@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSString * userAgent; 
@property (nonatomic,retain) NSString * pageContext; 
@property (nonatomic,retain) NSString * pageDescription; 
@property (assign,nonatomic) unsigned long long pageID; 
@property (nonatomic,retain) NSString * pageType; 
@property (nonatomic,retain) NSString * pageURL; 
@property (nonatomic,retain) NSNumber * accountIdentifier; 
@property (nonatomic,retain) NSString * connection; 
-(id)decorateReportingURL:(id)arg1 ;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(void)setEventVersion:(NSNumber *)arg1 ;
-(NSNumber *)eventVersion;
-(NSString *)pageDescription;
-(NSNumber *)pixelRatio;
-(NSNumber *)previousClientVersion;
-(void)setPageDescription:(NSString *)arg1 ;
-(void)setPixelRatio:(NSNumber *)arg1 ;
-(void)setPreviousClientVersion:(NSNumber *)arg1 ;
-(void)setScreenHeight:(NSNumber *)arg1 ;
-(void)setScreenWidth:(NSNumber *)arg1 ;
-(void)setWindowHeight:(NSNumber *)arg1 ;
-(void)setWindowWidth:(NSNumber *)arg1 ;
-(NSNumber *)windowHeight;
-(NSNumber *)windowWidth;
-(id)init;
-(id)description;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setPageURL:(NSString *)arg1 ;
-(NSString *)pageURL;
-(NSString *)connection;
-(void)setConnection:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setClientVersion:(NSNumber *)arg1 ;
-(NSNumber *)clientVersion;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(void)setPageID:(unsigned long long)arg1 ;
-(unsigned long long)pageID;
-(NSNumber *)screenHeight;
-(NSNumber *)screenWidth;
-(void)setOriginalTimeUsingDate:(id)arg1 ;
-(void)setPageType:(NSString *)arg1 ;
-(NSString *)pageType;
-(NSString *)hostApplicationIdentifier;
-(void)setWindowOrientation:(NSString *)arg1 ;
-(void)setPageContext:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(double)originalTime;
-(void)setOriginalTime:(double)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)pageContext;
-(NSString *)topic;
-(NSString *)windowOrientation;
-(NSNumber *)baseVersion;
-(void)setBaseVersion:(NSNumber *)arg1 ;
@end

