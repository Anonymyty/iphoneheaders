/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/PTPCameraFolder.h>

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {

	NSMutableArray* _tempArrayOfAllObjectHandles;
	NSMutableArray* _tempArrayOfAllObjectHandlesToBeIgnored;

}
-(void)dealloc;
-(id)tempArrayOfAllObjectHandles;
-(id)tempArrayOfAllObjectHandlesToBeIgnored;
-(void)refreshInfo;
-(id)initWithStorageID:(unsigned)arg1 device:(id)arg2 ;
-(void)prime;
@end

