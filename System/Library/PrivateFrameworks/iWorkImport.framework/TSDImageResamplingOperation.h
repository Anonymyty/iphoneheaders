/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDImageProvider, NSString, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject {

	TSDImageProvider* mImageProvider;
	CGSize mDesiredSize;
	NSString* mDisplayName;
	CGPathRef mMaskingPath;
	TSPObjectContext* mObjectContext;

}

@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,retain) TSPObjectContext * objectContext; 
@property (assign,nonatomic) CGPathRef maskingPath; 
@property (nonatomic,retain) TSDImageProvider * imageProvider; 
@property (assign,nonatomic) CGSize desiredSize; 
-(id)initWithImageProvider:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)setObjectContext:(TSPObjectContext *)arg1 ;
-(void)setMaskingPath:(CGPathRef)arg1 ;
-(id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2 ;
-(TSPObjectContext *)objectContext;
-(CGPathRef)maskingPath;
-(void)dealloc;
-(id)init;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(TSDImageProvider *)imageProvider;
-(void)setImageProvider:(TSDImageProvider *)arg1 ;
@end

