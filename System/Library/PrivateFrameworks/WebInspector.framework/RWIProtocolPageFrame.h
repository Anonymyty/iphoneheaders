/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * loaderId; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * securityOrigin; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * parentId; 
@property (nonatomic,copy) NSString * name; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)url;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(NSString *)securityOrigin;
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setLoaderId:(NSString *)arg1 ;
-(void)setParentId:(NSString *)arg1 ;
-(NSString *)parentId;
-(NSString *)loaderId;
-(id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5 ;
-(void)setMimeType:(NSString *)arg1 ;
@end
