/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DTSPImageDataTexture, TSPData;

@interface TSCH3DTSPMipmapData : NSObject <TSCHUnretainedParent> {

	TSCH3DTSPImageDataTexture* mParent;
	TSPData* mData;

}

@property (nonatomic,readonly) TSPData * data; 
+(id)dataWithTSPData:(id)arg1 ;
-(void)clearParent;
-(id)initWithTSPData:(id)arg1 ;
-(id)databuffer;
-(void)dealloc;
-(TSPData *)data;
-(void)setParent:(id)arg1 ;
@end
