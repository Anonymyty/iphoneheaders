/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileSpotlightIndex.framework/MobileSpotlightIndex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSpotlightIndex/MobileSpotlightIndex-Structs.h>
@interface _MDPlistBytes : NSObject {

	unsigned long long _byteVector;
	unsigned _byteVectorCnt;
	unsigned _byteVectorCapacity;
	unsigned _isBad : 16;
	unsigned _shouldDeallocate : 1;
	unsigned _isMutable : 1;
	unsigned _isMutating : 1;
	unsigned _didFinalize : 1;
	unsigned _useMalloc : 1;
	CFArrayRef _rleQueue;
	unsigned long long* _wrapperPtr;
	unsigned long long* _uidVector;
	int _uidCount;
	int _uidCapacity;

}
+(MDPlistBytesRef)createPlistBytes:(id)arg1 ;
+(MDPlistBytesRef)createArrayPlistBytesUsingBlock:(/*^block*/id)arg1 ;
+(MDPlistBytesRef)createDictionaryPlistBytesUsingBlock:(/*^block*/id)arg1 ;
+(void)enumerateObjectsFromPlistBytes:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
+(MDPlistBytesRef)emptyArrayPlistBytes;
+(MDPlistBytesRef)emptyDictionaryPlistBytes;
+(MDPlistBytesRef)nullObjectPlistBytes;
-(unsigned long long)_cfTypeID;
-(void)dealloc;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(BOOL)arg3 ;
-(CFDataRef)copyDataWithBytesNoCopy;
-(id)createDispatchData;
-(CFDataRef)copyData;
-(void)finalize;
@end
