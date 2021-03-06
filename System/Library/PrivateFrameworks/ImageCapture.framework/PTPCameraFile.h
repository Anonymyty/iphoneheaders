/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface PTPCameraFile : ICCameraFile {

	void* _ptpCameraFileProperties;
	NSString* _path;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned storageID; 
@property (readonly) unsigned objHandle; 
@property (copy) id info; 
@property (retain) NSString * path;                        //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(NSString *)path;
-(id)info;
-(void)setPath:(NSString *)arg1 ;
-(void)setInfo:(id)arg1 ;
-(id)thumbData;
-(int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3 ;
-(unsigned)objHandle;
-(unsigned)storageID;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned)arg5 objectHandle:(unsigned)arg6 ;
-(id)metadataDict;
-(void)finalize;
@end

