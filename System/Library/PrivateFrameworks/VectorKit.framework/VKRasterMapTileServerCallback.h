/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VKRasterMapTileRequest;

@interface VKRasterMapTileServerCallback : NSObject {

	VKRasterMapTileRequest* request;
	/*^block*/id handler;
	double startTimestamp;

}

@property (nonatomic,retain) VKRasterMapTileRequest * request; 
@property (nonatomic,copy) id handler; 
@property (assign,nonatomic) double startTimestamp; 
-(void)dealloc;
-(id)description;
-(VKRasterMapTileRequest *)request;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setRequest:(VKRasterMapTileRequest *)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
@end
