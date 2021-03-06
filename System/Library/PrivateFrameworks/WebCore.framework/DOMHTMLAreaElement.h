/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (copy) NSString * alt; 
@property (copy) NSString * coords; 
@property (copy) NSString * href; 
@property (assign) BOOL noHref; 
@property (copy) NSString * shape; 
@property (copy) NSString * target; 
@property (copy) NSString * accessKey; 
@property (copy,readonly) NSString * hashName; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSString * hostname; 
@property (copy,readonly) NSString * pathname; 
@property (copy,readonly) NSString * port; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * search; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
-(id)absoluteQuadsAtPoint:(CGPoint)arg1 ;
-(CGRect)boundingBoxWithOwner:(id)arg1 ;
-(WKQuad)absoluteQuadWithOwner:(id)arg1 ;
-(id)boundingBoxesWithOwner:(id)arg1 ;
-(id)absoluteQuadsWithOwner:(id)arg1 ;
-(NSString *)coords;
-(void)setCoords:(NSString *)arg1 ;
-(void)setPing:(id)arg1 ;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(NSString *)hashName;
-(NSString *)pathname;
-(id)relList;
-(NSString *)alt;
-(BOOL)noHref;
-(void)setNoHref:(BOOL)arg1 ;
-(void)setShape:(NSString *)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(NSString *)host;
-(NSURL *)absoluteLinkURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(id)rel;
-(void)setRel:(id)arg1 ;
-(NSString *)shape;
-(NSString *)port;
-(NSString *)protocol;
-(NSString *)search;
-(NSString *)hostname;
-(void)setAlt:(NSString *)arg1 ;
-(id)ping;
@end

