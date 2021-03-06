/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBuffer.h>

@interface MTLDebugBuffer : MTLToolsBuffer {

	BOOL _purgeableStateHasBeenSet;
	const void* _pointer;
	unsigned long long _purgeableState;

}

@property (nonatomic,readonly) const void* pointer;                            //@synthesize pointer=_pointer - In the implementation block
@property (nonatomic,readonly) unsigned long long purgeableState;              //@synthesize purgeableState=_purgeableState - In the implementation block
@property (nonatomic,readonly) BOOL purgeableStateHasBeenSet;                  //@synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet - In the implementation block
-(const void*)pointer;
-(void)didModifyRange:(NSRange)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(id)description;
-(void*)contents;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
-(unsigned long long)purgeableState;
-(BOOL)purgeableStateHasBeenSet;
@end

